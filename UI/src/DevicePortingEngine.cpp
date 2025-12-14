#include "DevicePortingEngine.h"
#include "MainController.h"
#include "../../Logger/Log.h"
#include "../../Utility/FileUtils.h"
#include <QDir>
#include <QFileInfo>
#include <QStandardPaths>
#include <QCoreApplication>
#include <QElapsedTimer>

// Static member initialization
QMap<QString, QStringList> DevicePortingEngine::chipset_compatibility_map_;
QMap<QString, DeviceInfo> DevicePortingEngine::device_database_;
const QString DevicePortingEngine::TEMP_DIR_PREFIX = "sp_flash_tool_porting_";
const QString DevicePortingEngine::BACKUP_DIR_PREFIX = "sp_flash_tool_backup_";

DevicePortingEngine::DevicePortingEngine(QObject *parent)
    : QObject(parent)
    , mode_(MODE_AUTOMATIC)
    , porting_in_progress_(false)
    , current_stage_(STAGE_DETECTION)
    , current_progress_(0)
    , realtime_monitoring_(false)
    , main_controller_(nullptr)
{
    // Initialize configuration with defaults
    config_.enable_auto_porting = true;
    config_.enable_memory_adaptation = true;
    config_.enable_partition_resize = false;
    config_.enable_bootloader_patch = false;
    config_.enable_kernel_patch = false;
    config_.enable_driver_injection = false;
    
    // Setup timers
    detection_timer_ = new QTimer(this);
    monitoring_timer_ = new QTimer(this);
    
    connect(detection_timer_, &QTimer::timeout, this, &DevicePortingEngine::performDeviceDetection);
    connect(monitoring_timer_, &QTimer::timeout, this, &DevicePortingEngine::updateRealTimeData);
    
    // Initialize device database and compatibility map
    initializeDeviceDatabase();
    initializeCompatibilityMap();
    
    // Setup temporary directories
    setupTempDirectories();
    
    LOGI("DevicePortingEngine initialized");
}

DevicePortingEngine::~DevicePortingEngine()
{
    stopPortingProcess();
    cleanupTempDirectories();
}

void DevicePortingEngine::setPortingConfig(const PortingConfig &config)
{
    QMutexLocker locker(&state_mutex_);
    config_ = config;
    
    LOGI("DevicePortingEngine: Configuration updated - Auto porting: %s, Memory adaptation: %s",
         config_.enable_auto_porting ? "enabled" : "disabled",
         config_.enable_memory_adaptation ? "enabled" : "disabled");
}

void DevicePortingEngine::setPortingMode(PortingMode mode)
{
    QMutexLocker locker(&state_mutex_);
    mode_ = mode;
    
    const char* mode_str = "Unknown";
    switch (mode) {
    case MODE_AUTOMATIC: mode_str = "Automatic"; break;
    case MODE_MANUAL: mode_str = "Manual"; break;
    case MODE_CONSERVATIVE: mode_str = "Conservative"; break;
    case MODE_AGGRESSIVE: mode_str = "Aggressive"; break;
    }
    
    LOGI("DevicePortingEngine: Mode changed to %s", mode_str);
}

bool DevicePortingEngine::detectConnectedDevice()
{
    clearErrors();
    
    // Try USB detection first
    DeviceInfo usb_device = detectUSBDevice();
    if (!usb_device.device_id.isEmpty()) {
        detected_device_ = usb_device;
        emit deviceDetected(detected_device_);
        return true;
    }
    
    // Try serial detection
    DeviceInfo serial_device = detectSerialDevice();
    if (!serial_device.device_id.isEmpty()) {
        detected_device_ = serial_device;
        emit deviceDetected(detected_device_);
        return true;
    }
    
    return false;
}

bool DevicePortingEngine::isDeviceSupported(const DeviceInfo &device)
{
    if (device.chipset.isEmpty()) {
        return false;
    }
    
    // Check if chipset is in our supported list
    QStringList supported_chipsets = getSupportedChipsets();
    return supported_chipsets.contains(device.chipset, Qt::CaseInsensitive);
}

void DevicePortingEngine::startPortingProcess(const QStringList &firmware_files)
{
    if (porting_in_progress_) {
        LOGW("DevicePortingEngine: Porting already in progress");
        return;
    }
    
    QMutexLocker locker(&state_mutex_);
    
    clearErrors();
    current_firmware_files_ = firmware_files;
    porting_in_progress_ = true;
    current_stage_ = STAGE_DETECTION;
    current_progress_ = 0;
    
    LOGI("DevicePortingEngine: Starting porting process with %d firmware files", firmware_files.size());
    
    emit portingStarted();
    
    // Start the porting process
    QTimer::singleShot(100, this, &DevicePortingEngine::processPortingStage);
}

void DevicePortingEngine::stopPortingProcess()
{
    if (!porting_in_progress_) {
        return;
    }
    
    QMutexLocker locker(&state_mutex_);
    
    porting_in_progress_ = false;
    current_stage_ = STAGE_COMPLETE;
    
    // Restore backup files if needed
    restoreBackupFiles();
    
    LOGI("DevicePortingEngine: Porting process stopped");
}

void DevicePortingEngine::enableRealTimeMonitoring(bool enable)
{
    realtime_monitoring_ = enable;
    
    if (enable) {
        detection_timer_->start(DETECTION_INTERVAL_MS);
        monitoring_timer_->start(MONITORING_INTERVAL_MS);
        LOGI("DevicePortingEngine: Real-time monitoring enabled");
    } else {
        detection_timer_->stop();
        monitoring_timer_->stop();
        LOGI("DevicePortingEngine: Real-time monitoring disabled");
    }
}

void DevicePortingEngine::setMainController(MainController *controller)
{
    main_controller_ = controller;
}

QStringList DevicePortingEngine::getSupportedChipsets()
{
    static QStringList supported_chipsets = {
        "MT6580", "MT6582", "MT6592", "MT6595", "MT6732", "MT6735", "MT6737",
        "MT6750", "MT6753", "MT6755", "MT6757", "MT6763", "MT6765", "MT6768",
        "MT6771", "MT6779", "MT6785", "MT6833", "MT6853", "MT6873", "MT6877",
        "MT6883", "MT6889", "MT6891", "MT6893", "MT8163", "MT8167", "MT8173",
        "MT8176", "MT8183", "MT8185", "MT8186", "MT8188", "MT8195"
    };
    return supported_chipsets;
}

QStringList DevicePortingEngine::getSupportedPlatforms()
{
    static QStringList supported_platforms = {
        "Android", "Linux", "RTOS", "Bare Metal"
    };
    return supported_platforms;
}

bool DevicePortingEngine::isChipsetCompatible(const QString &source, const QString &target)
{
    if (source == target) {
        return true;
    }
    
    // Check compatibility map
    if (chipset_compatibility_map_.contains(source)) {
        return chipset_compatibility_map_[source].contains(target);
    }
    
    return false;
}

void DevicePortingEngine::performDeviceDetection()
{
    if (porting_in_progress_) {
        return; // Don't interfere with active porting
    }
    
    static QString last_detected_id;
    
    bool device_found = detectConnectedDevice();
    
    if (device_found) {
        if (detected_device_.device_id != last_detected_id) {
            last_detected_id = detected_device_.device_id;
            LOGI("DevicePortingEngine: New device detected - %s (%s)", 
                 detected_device_.model_name.toLocal8Bit().constData(),
                 detected_device_.chipset.toLocal8Bit().constData());
        }
    } else {
        if (!last_detected_id.isEmpty()) {
            last_detected_id.clear();
            emit deviceDisconnected();
            LOGI("DevicePortingEngine: Device disconnected");
        }
    }
}

void DevicePortingEngine::processPortingStage()
{
    if (!porting_in_progress_) {
        return;
    }
    
    QElapsedTimer stage_timer;
    stage_timer.start();
    
    bool stage_success = false;
    QString stage_description;
    
    switch (current_stage_) {
    case STAGE_DETECTION:
        stage_description = "Detecting connected device...";
        stage_success = detectConnectedDevice() && analyzeDevice(detected_device_);
        current_progress_ = 10;
        break;
        
    case STAGE_ANALYSIS:
        stage_description = "Analyzing device compatibility...";
        stage_success = validateFirmwareCompatibility(current_firmware_files_);
        current_progress_ = 20;
        break;
        
    case STAGE_PREPARATION:
        stage_description = "Preparing porting environment...";
        stage_success = preparePortingEnvironment() && createBackupFiles(current_firmware_files_);
        current_progress_ = 30;
        break;
        
    case STAGE_BOOTLOADER_PATCH:
        stage_description = "Applying bootloader patches...";
        stage_success = true; // Skip if not enabled
        if (config_.enable_bootloader_patch) {
            // Find bootloader file and apply patches
            for (const QString &file : current_firmware_files_) {
                if (file.contains("preloader", Qt::CaseInsensitive) || 
                    file.contains("bootloader", Qt::CaseInsensitive)) {
                    stage_success = applyBootloaderPatches(file);
                    break;
                }
            }
        }
        current_progress_ = 50;
        break;
        
    case STAGE_KERNEL_PATCH:
        stage_description = "Applying kernel patches...";
        stage_success = true; // Skip if not enabled
        if (config_.enable_kernel_patch) {
            // Find kernel file and apply patches
            for (const QString &file : current_firmware_files_) {
                if (file.contains("boot", Qt::CaseInsensitive) || 
                    file.contains("kernel", Qt::CaseInsensitive)) {
                    stage_success = applyKernelPatches(file);
                    break;
                }
            }
        }
        current_progress_ = 70;
        break;
        
    case STAGE_DRIVER_INJECTION:
        stage_description = "Injecting device drivers...";
        stage_success = true; // Skip if not enabled
        if (config_.enable_driver_injection) {
            stage_success = injectDrivers(QStringList()); // TODO: Implement driver list
        }
        current_progress_ = 80;
        break;
        
    case STAGE_PARTITION_ADAPTATION:
        stage_description = "Adapting partition layout...";
        stage_success = true; // Skip if not enabled
        if (config_.enable_partition_resize) {
            // Find scatter file and adapt partitions
            for (const QString &file : current_firmware_files_) {
                if (file.contains("scatter", Qt::CaseInsensitive)) {
                    stage_success = adaptPartitionLayout(file);
                    break;
                }
            }
        }
        current_progress_ = 90;
        break;
        
    case STAGE_FINALIZATION:
        stage_description = "Finalizing porting process...";
        stage_success = finalizePorting();
        current_progress_ = 100;
        break;
        
    case STAGE_COMPLETE:
        // Process complete
        porting_in_progress_ = false;
        last_result_.success = true;
        last_result_.processing_time_ms = stage_timer.elapsed();
        emit portingCompleted(last_result_);
        return;
    }
    
    emit portingStageChanged(current_stage_, stage_description);
    emit portingProgressChanged(current_progress_);
    
    if (stage_success) {
        // Move to next stage
        current_stage_ = static_cast<PortingStage>(static_cast<int>(current_stage_) + 1);
        
        // Schedule next stage
        QTimer::singleShot(500, this, &DevicePortingEngine::processPortingStage);
    } else {
        // Stage failed
        porting_in_progress_ = false;
        last_result_.success = false;
        last_result_.error_message = QString("Failed at stage: %1").arg(stage_description);
        last_result_.processing_time_ms = stage_timer.elapsed();
        
        emit portingFailed(last_result_.error_message);
    }
}

void DevicePortingEngine::updateRealTimeData()
{
    if (!realtime_monitoring_) {
        return;
    }
    
    QMap<QString, QVariant> data;
    
    // Collect real-time data
    data["device_connected"] = !detected_device_.device_id.isEmpty();
    data["porting_in_progress"] = porting_in_progress_;
    data["current_stage"] = static_cast<int>(current_stage_);
    data["progress_percentage"] = current_progress_;
    
    if (!detected_device_.device_id.isEmpty()) {
        data["device_chipset"] = detected_device_.chipset;
        data["device_model"] = detected_device_.model_name;
        data["device_memory"] = static_cast<qulonglong>(detected_device_.memory_size);
    }
    
    emit realTimeDataUpdated(data);
}

// Device detection implementations
DeviceInfo DevicePortingEngine::detectUSBDevice()
{
    DeviceInfo device;
    
    // TODO: Implement actual USB device detection
    // This would use platform-specific APIs to enumerate USB devices
    // For now, return empty device info
    
    return device;
}

DeviceInfo DevicePortingEngine::detectSerialDevice()
{
    DeviceInfo device;
    
    // TODO: Implement actual serial device detection
    // This would enumerate serial ports and try to communicate with devices
    // For now, return empty device info
    
    return device;
}

// Helper function implementations
void DevicePortingEngine::initializeDeviceDatabase()
{
    // TODO: Load device database from file or embedded resources
    // For now, create some sample entries
    
    DeviceInfo sample_device;
    sample_device.device_id = "sample_mt6765";
    sample_device.chipset = "MT6765";
    sample_device.model_name = "Sample Device";
    sample_device.manufacturer = "MediaTek";
    sample_device.platform = "Android";
    sample_device.memory_size = 4ULL * 1024 * 1024 * 1024; // 4GB
    sample_device.memory_type = "LPDDR4";
    
    device_database_[sample_device.device_id] = sample_device;
}

void DevicePortingEngine::initializeCompatibilityMap()
{
    // TODO: Load compatibility map from configuration file
    // For now, create some sample mappings
    
    chipset_compatibility_map_["MT6765"] = QStringList() << "MT6762" << "MT6763";
    chipset_compatibility_map_["MT6762"] = QStringList() << "MT6765";
    chipset_compatibility_map_["MT6763"] = QStringList() << "MT6765" << "MT6762";
}

void DevicePortingEngine::setupTempDirectories()
{
    QString temp_base = QStandardPaths::writableLocation(QStandardPaths::TempLocation);
    
    temp_directory_ = QDir(temp_base).absoluteFilePath(TEMP_DIR_PREFIX + QString::number(QCoreApplication::applicationPid()));
    backup_directory_ = QDir(temp_base).absoluteFilePath(BACKUP_DIR_PREFIX + QString::number(QCoreApplication::applicationPid()));
    
    QDir().mkpath(temp_directory_);
    QDir().mkpath(backup_directory_);
}

void DevicePortingEngine::cleanupTempDirectories()
{
    // Clean up temporary files
    for (const QString &file : temp_files_) {
        QFile::remove(file);
    }
    temp_files_.clear();
    
    // Remove temporary directories
    QDir(temp_directory_).removeRecursively();
    QDir(backup_directory_).removeRecursively();
}

// Stub implementations for porting functions
bool DevicePortingEngine::analyzeDevice(const DeviceInfo &device) { return true; }
bool DevicePortingEngine::preparePortingEnvironment() { return true; }
bool DevicePortingEngine::applyBootloaderPatches(const QString &bootloader_file) { return true; }
bool DevicePortingEngine::applyKernelPatches(const QString &kernel_file) { return true; }
bool DevicePortingEngine::injectDrivers(const QStringList &driver_files) { return true; }
bool DevicePortingEngine::adaptPartitionLayout(const QString &scatter_file) { return true; }
bool DevicePortingEngine::finalizePorting() { return true; }
bool DevicePortingEngine::validateFirmwareCompatibility(const QStringList &files) { return true; }
bool DevicePortingEngine::createBackupFiles(const QStringList &files) { return true; }
bool DevicePortingEngine::restoreBackupFiles() { return true; }

void DevicePortingEngine::setError(const QString &error)
{
    last_result_.error_message = error;
    LOGE("DevicePortingEngine: %s", error.toLocal8Bit().constData());
}

void DevicePortingEngine::addWarning(const QString &warning)
{
    last_result_.warnings.append(warning);
    emit warningGenerated(warning);
    LOGW("DevicePortingEngine: %s", warning.toLocal8Bit().constData());
}

void DevicePortingEngine::clearErrors()
{
    last_result_.error_message.clear();
    last_result_.warnings.clear();
}

// Public slot implementations
void DevicePortingEngine::onDeviceConnectionChanged()
{
    // Handle device connection changes
    detectConnectedDevice();
}

void DevicePortingEngine::onFlashingStarted()
{
    // Handle flashing start event
    LOGI("DevicePortingEngine: Flashing started");
}

void DevicePortingEngine::onFlashingProgress(int percentage)
{
    // Handle flashing progress updates
    Q_UNUSED(percentage);
    LOGI("DevicePortingEngine: Flashing progress: %d%%", percentage);
}

void DevicePortingEngine::onFlashingCompleted()
{
    // Handle flashing completion
    LOGI("DevicePortingEngine: Flashing completed");
}
