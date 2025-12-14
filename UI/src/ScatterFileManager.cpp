#include "ScatterFileManager.h"
#include "MainController.h"
#include "ICallback.h"
#include "../../Logger/Log.h"
#include "../../Utility/IniItem.h"
#include "../../Utility/FileUtils.h"
#include <QDir>
#include <QFileInfo>
#include <QStandardPaths>

ScatterFileManager::ScatterFileManager(QObject *parent)
    : QObject(parent)
    , operation_mode_(SINGLE_SCATTER_MODE)
    , primary_loaded_(false)
    , secondary_loaded_(false)
    , loading_in_progress_(false)
    , last_error_code_(0)
    , main_controller_(nullptr)
    , current_success_callback_(nullptr)
    , current_failed_callback_(nullptr)
    , current_cancel_callback_(nullptr)
{
    initializeRecentFiles();
    loadRecentFiles();
}

ScatterFileManager::~ScatterFileManager()
{
    saveRecentFiles();
}

void ScatterFileManager::setOperationMode(OperationMode mode)
{
    if (operation_mode_ != mode) {
        operation_mode_ = mode;
        resetLoadingState();
        emit operationModeChanged(mode);
        
        LOGI("ScatterFileManager: Operation mode changed to %s", 
             mode == SINGLE_SCATTER_MODE ? "Single" : "Dual");
    }
}

void ScatterFileManager::setScatterFilePath(ScatterFileType type, const QString &path)
{
    QString normalized_path = QDir::toNativeSeparators(path);
    
    switch (type) {
    case PRIMARY_SCATTER:
        if (primary_scatter_path_ != normalized_path) {
            primary_scatter_path_ = normalized_path;
            primary_loaded_ = false;
            addToRecentFiles(type, normalized_path);
        }
        break;
    case SECONDARY_SCATTER:
        if (secondary_scatter_path_ != normalized_path) {
            secondary_scatter_path_ = normalized_path;
            secondary_loaded_ = false;
            addToRecentFiles(type, normalized_path);
        }
        break;
    }
}

QString ScatterFileManager::getScatterFilePath(ScatterFileType type) const
{
    switch (type) {
    case PRIMARY_SCATTER:
        return primary_scatter_path_;
    case SECONDARY_SCATTER:
        return secondary_scatter_path_;
    default:
        return QString();
    }
}

QStringList ScatterFileManager::getAllScatterFilePaths() const
{
    QStringList paths;
    if (!primary_scatter_path_.isEmpty()) {
        paths << primary_scatter_path_;
    }
    if (operation_mode_ == DUAL_SCATTER_MODE && !secondary_scatter_path_.isEmpty()) {
        paths << secondary_scatter_path_;
    }
    return paths;
}

void ScatterFileManager::loadScatterFileAsync(ScatterFileType type, const QString &file_path,
                                            ICallback *success_callback, ICallback *failed_callback,
                                            ICallback *cancel_callback)
{
    if (loading_in_progress_) {
        last_error_ = "Another scatter file loading operation is in progress";
        last_error_code_ = -1;
        if (failed_callback) {
            failed_callback->Execute();
        }
        return;
    }

    if (!main_controller_) {
        last_error_ = "MainController not set";
        last_error_code_ = -2;
        if (failed_callback) {
            failed_callback->Execute();
        }
        return;
    }

    // Validate file exists
    if (!QFileInfo::exists(file_path)) {
        last_error_ = QString("Scatter file does not exist: %1").arg(file_path);
        last_error_code_ = -3;
        if (failed_callback) {
            failed_callback->Execute();
        }
        return;
    }

    setScatterFilePath(type, file_path);
    loading_in_progress_ = true;
    
    // Store callbacks for this operation
    current_success_callback_ = success_callback;
    current_failed_callback_ = failed_callback;
    current_cancel_callback_ = cancel_callback;

    LOGI("ScatterFileManager: Loading %s scatter file: %s", 
         type == PRIMARY_SCATTER ? "primary" : "secondary", 
         file_path.toLocal8Bit().constData());

    // Create wrapper callbacks to handle dual scatter file logic
    ICallback *wrapper_success = nullptr;
    ICallback *wrapper_failed = nullptr;
    ICallback *wrapper_cancel = nullptr;

    if (type == PRIMARY_SCATTER) {
        wrapper_success = new SimpleCallback<ScatterFileManager>(this, &ScatterFileManager::onPrimaryScatterLoaded);
    } else {
        wrapper_success = new SimpleCallback<ScatterFileManager>(this, &ScatterFileManager::onSecondaryScatterLoaded);
    }
    
    wrapper_failed = new SimpleCallback<ScatterFileManager>(this, &ScatterFileManager::onScatterLoadFailed);
    wrapper_cancel = new SimpleCallback<ScatterFileManager>(this, &ScatterFileManager::onScatterLoadCanceled);

    // Load the scatter file through MainController
    main_controller_->LoadScatterAsync(file_path, wrapper_success, wrapper_failed, wrapper_cancel);
}

void ScatterFileManager::loadAllScatterFilesAsync(ICallback *success_callback, ICallback *failed_callback,
                                                 ICallback *cancel_callback)
{
    if (operation_mode_ == SINGLE_SCATTER_MODE) {
        if (!primary_scatter_path_.isEmpty()) {
            loadScatterFileAsync(PRIMARY_SCATTER, primary_scatter_path_, 
                               success_callback, failed_callback, cancel_callback);
        } else {
            last_error_ = "No primary scatter file specified";
            last_error_code_ = -4;
            if (failed_callback) {
                failed_callback->Execute();
            }
        }
    } else {
        // For dual mode, we need to load both files sequentially
        if (primary_scatter_path_.isEmpty() || secondary_scatter_path_.isEmpty()) {
            last_error_ = "Both primary and secondary scatter files must be specified for dual mode";
            last_error_code_ = -5;
            if (failed_callback) {
                failed_callback->Execute();
            }
            return;
        }

        // Store the final callbacks
        current_success_callback_ = success_callback;
        current_failed_callback_ = failed_callback;
        current_cancel_callback_ = cancel_callback;

        // Load primary first, then secondary in the callback
        loadScatterFileAsync(PRIMARY_SCATTER, primary_scatter_path_, nullptr, failed_callback, cancel_callback);
    }
}

bool ScatterFileManager::validateScatterFiles()
{
    if (operation_mode_ == SINGLE_SCATTER_MODE) {
        return isScatterFileLoaded(PRIMARY_SCATTER);
    } else {
        return isScatterFileLoaded(PRIMARY_SCATTER) && 
               isScatterFileLoaded(SECONDARY_SCATTER) &&
               validateScatterFileCompatibility();
    }
}

bool ScatterFileManager::isScatterFileLoaded(ScatterFileType type) const
{
    switch (type) {
    case PRIMARY_SCATTER:
        return primary_loaded_;
    case SECONDARY_SCATTER:
        return secondary_loaded_;
    default:
        return false;
    }
}

bool ScatterFileManager::areAllRequiredScatterFilesLoaded() const
{
    if (operation_mode_ == SINGLE_SCATTER_MODE) {
        return primary_loaded_;
    } else {
        return primary_loaded_ && secondary_loaded_;
    }
}

bool ScatterFileManager::getScatterFileInfo(ScatterFileType type, SCATTER_Head_Info *info)
{
    if (!main_controller_ || !isScatterFileLoaded(type)) {
        return false;
    }

    // For now, we can only get info from the currently loaded scatter file
    // In a full implementation, we'd need to extend MainController to support multiple files
    return main_controller_->GetScatterHeadInfo(info);
}

QString ScatterFileManager::getScatterFileVersion(ScatterFileType type)
{
    if (!main_controller_ || !isScatterFileLoaded(type)) {
        return QString();
    }

    char version[256] = {0};
    if (main_controller_->GetScatterVersion(version)) {
        return QString(version);
    }
    return QString();
}

void ScatterFileManager::addToRecentFiles(ScatterFileType type, const QString &path)
{
    QStringList *recent_list = (type == PRIMARY_SCATTER) ? &recent_primary_files_ : &recent_secondary_files_;
    
    // Remove if already exists
    recent_list->removeAll(path);
    
    // Add to front
    recent_list->prepend(path);
    
    // Limit size
    while (recent_list->size() > MAX_RECENT_FILES) {
        recent_list->removeLast();
    }
}

QStringList ScatterFileManager::getRecentFiles(ScatterFileType type) const
{
    return (type == PRIMARY_SCATTER) ? recent_primary_files_ : recent_secondary_files_;
}

void ScatterFileManager::clearRecentFiles(ScatterFileType type)
{
    if (type == PRIMARY_SCATTER) {
        recent_primary_files_.clear();
    } else {
        recent_secondary_files_.clear();
    }
}

void ScatterFileManager::setMainController(MainController *controller)
{
    main_controller_ = controller;
}

void ScatterFileManager::onPrimaryScatterLoaded()
{
    primary_loaded_ = true;
    loading_in_progress_ = false;
    
    emit scatterFileLoaded(PRIMARY_SCATTER, primary_scatter_path_);
    
    if (operation_mode_ == SINGLE_SCATTER_MODE) {
        // Single mode - we're done
        if (current_success_callback_) {
            current_success_callback_->Execute();
        }
        emit allScatterFilesLoaded();
    } else {
        // Dual mode - load secondary file next
        if (!secondary_scatter_path_.isEmpty()) {
            loadScatterFileAsync(SECONDARY_SCATTER, secondary_scatter_path_,
                               current_success_callback_, current_failed_callback_, current_cancel_callback_);
        }
    }
}

void ScatterFileManager::onSecondaryScatterLoaded()
{
    secondary_loaded_ = true;
    loading_in_progress_ = false;
    
    emit scatterFileLoaded(SECONDARY_SCATTER, secondary_scatter_path_);
    
    // Both files loaded in dual mode
    if (current_success_callback_) {
        current_success_callback_->Execute();
    }
    emit allScatterFilesLoaded();
}

void ScatterFileManager::onScatterLoadFailed()
{
    loading_in_progress_ = false;
    
    if (current_failed_callback_) {
        current_failed_callback_->Execute();
    }
}

void ScatterFileManager::onScatterLoadCanceled()
{
    loading_in_progress_ = false;
    
    if (current_cancel_callback_) {
        current_cancel_callback_->Execute();
    }
}

void ScatterFileManager::initializeRecentFiles()
{
    recent_primary_files_.clear();
    recent_secondary_files_.clear();
}

void ScatterFileManager::saveRecentFiles()
{
    IniItem primary_item("option.ini", "ScatterFiles", "RecentPrimary");
    primary_item.SaveStringValue(recent_primary_files_.join(";"));
    
    IniItem secondary_item("option.ini", "ScatterFiles", "RecentSecondary");
    secondary_item.SaveStringValue(recent_secondary_files_.join(";"));
    
    IniItem mode_item("option.ini", "ScatterFiles", "OperationMode");
    mode_item.SaveIntValue(static_cast<int>(operation_mode_));
}

void ScatterFileManager::loadRecentFiles()
{
    IniItem primary_item("option.ini", "ScatterFiles", "RecentPrimary");
    QString primary_str = primary_item.GetStringValue();
    if (!primary_str.isEmpty()) {
        recent_primary_files_ = primary_str.split(";", Qt::SkipEmptyParts);
    }
    
    IniItem secondary_item("option.ini", "ScatterFiles", "RecentSecondary");
    QString secondary_str = secondary_item.GetStringValue();
    if (!secondary_str.isEmpty()) {
        recent_secondary_files_ = secondary_str.split(";", Qt::SkipEmptyParts);
    }
    
    IniItem mode_item("option.ini", "ScatterFiles", "OperationMode");
    int mode = mode_item.GetIntValue();
    if (mode >= 0 && mode <= 1) {
        operation_mode_ = static_cast<OperationMode>(mode);
    }
}

bool ScatterFileManager::validateScatterFileCompatibility()
{
    // TODO: Implement compatibility validation between primary and secondary scatter files
    // This would check for compatible chipsets, memory layouts, etc.
    return true;
}

void ScatterFileManager::resetLoadingState()
{
    primary_loaded_ = false;
    secondary_loaded_ = false;
    loading_in_progress_ = false;
    last_error_.clear();
    last_error_code_ = 0;
}
