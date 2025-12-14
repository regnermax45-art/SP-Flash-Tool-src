#ifndef SCATTERFILEMANAGER_H
#define SCATTERFILEMANAGER_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QSharedPointer>
#include "../../Public/AppTypes.h"

class ICallback;
class MainController;

/**
 * @brief The ScatterFileManager class handles dual scatter file operations
 * 
 * This class provides a unified interface for managing both primary and secondary
 * scatter files, including loading, validation, and coordination between the two files.
 */
class ScatterFileManager : public QObject
{
    Q_OBJECT

public:
    enum ScatterFileType {
        PRIMARY_SCATTER = 0,
        SECONDARY_SCATTER = 1
    };

    enum OperationMode {
        SINGLE_SCATTER_MODE = 0,
        DUAL_SCATTER_MODE = 1
    };

    explicit ScatterFileManager(QObject *parent = nullptr);
    ~ScatterFileManager();

    // Mode management
    void setOperationMode(OperationMode mode);
    OperationMode getOperationMode() const { return operation_mode_; }

    // File path management
    void setScatterFilePath(ScatterFileType type, const QString &path);
    QString getScatterFilePath(ScatterFileType type) const;
    QStringList getAllScatterFilePaths() const;

    // File loading operations
    void loadScatterFileAsync(ScatterFileType type, const QString &file_path,
                             ICallback *success_callback, ICallback *failed_callback, 
                             ICallback *cancel_callback);
    
    void loadAllScatterFilesAsync(ICallback *success_callback, ICallback *failed_callback,
                                 ICallback *cancel_callback);

    // Validation
    bool validateScatterFiles();
    bool isScatterFileLoaded(ScatterFileType type) const;
    bool areAllRequiredScatterFilesLoaded() const;

    // File information
    bool getScatterFileInfo(ScatterFileType type, SCATTER_Head_Info *info);
    QString getScatterFileVersion(ScatterFileType type);

    // Recent files management
    void addToRecentFiles(ScatterFileType type, const QString &path);
    QStringList getRecentFiles(ScatterFileType type) const;
    void clearRecentFiles(ScatterFileType type);

    // Error handling
    QString getLastError() const { return last_error_; }
    int getLastErrorCode() const { return last_error_code_; }

    // Integration with MainController
    void setMainController(MainController *controller);

signals:
    void scatterFileLoaded(ScatterFileType type, const QString &path);
    void scatterFileLoadFailed(ScatterFileType type, const QString &path, const QString &error);
    void allScatterFilesLoaded();
    void operationModeChanged(OperationMode mode);
    void errorOccurred(int error_code, const QString &error_message);

private slots:
    void onPrimaryScatterLoaded();
    void onSecondaryScatterLoaded();
    void onScatterLoadFailed();
    void onScatterLoadCanceled();

private:
    void initializeRecentFiles();
    void saveRecentFiles();
    void loadRecentFiles();
    bool validateScatterFileCompatibility();
    void resetLoadingState();

    OperationMode operation_mode_;
    
    // File paths
    QString primary_scatter_path_;
    QString secondary_scatter_path_;
    
    // Loading state
    bool primary_loaded_;
    bool secondary_loaded_;
    bool loading_in_progress_;
    
    // Recent files
    QStringList recent_primary_files_;
    QStringList recent_secondary_files_;
    static const int MAX_RECENT_FILES = 10;
    
    // Error handling
    QString last_error_;
    int last_error_code_;
    
    // Integration
    MainController *main_controller_;
    
    // Callbacks for current operation
    ICallback *current_success_callback_;
    ICallback *current_failed_callback_;
    ICallback *current_cancel_callback_;
};

#endif // SCATTERFILEMANAGER_H
