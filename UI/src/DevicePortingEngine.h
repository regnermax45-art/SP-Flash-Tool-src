#ifndef DEVICEPORTINGENGINE_H
#define DEVICEPORTINGENGINE_H

#include <QObject>
#include <QString>
#include <QStringList>
#include <QMap>
#include <QVariant>
#include <QThread>
#include <QMutex>
#include <QTimer>
#include "../../Public/AppTypes.h"

class MainController;

/**
 * @brief Device information structure
 */
struct DeviceInfo {
    QString device_id;
    QString chipset;
    QString model_name;
    QString manufacturer;
    QString board_name;
    QString platform;
    quint64 memory_size;
    QString memory_type;
    QMap<QString, QVariant> custom_properties;
    
    DeviceInfo() : memory_size(0) {}
};

/**
 * @brief Porting configuration structure
 */
struct PortingConfig {
    bool enable_auto_porting;
    bool enable_memory_adaptation;
    bool enable_partition_resize;
    bool enable_bootloader_patch;
    bool enable_kernel_patch;
    bool enable_driver_injection;
    
    QString target_chipset;
    QString target_platform;
    quint64 target_memory_size;
    
    QStringList custom_patches;
    QMap<QString, QString> partition_mappings;
    QMap<QString, QVariant> advanced_options;
    
    PortingConfig() : 
        enable_auto_porting(true),
        enable_memory_adaptation(true),
        enable_partition_resize(false),
        enable_bootloader_patch(false),
        enable_kernel_patch(false),
        enable_driver_injection(false),
        target_memory_size(0) {}
};

/**
 * @brief Porting operation result
 */
struct PortingResult {
    bool success;
    QString error_message;
    QStringList warnings;
    QStringList applied_patches;
    QMap<QString, QString> modified_files;
    qint64 processing_time_ms;
    
    PortingResult() : success(false), processing_time_ms(0) {}
};

/**
 * @brief The DevicePortingEngine class handles real-time device adaptation during flashing
 * 
 * This engine can detect connected devices, analyze their characteristics, and apply
 * necessary modifications to firmware images to ensure compatibility.
 */
class DevicePortingEngine : public QObject
{
    Q_OBJECT

public:
    enum PortingStage {
        STAGE_DETECTION = 0,
        STAGE_ANALYSIS,
        STAGE_PREPARATION,
        STAGE_BOOTLOADER_PATCH,
        STAGE_KERNEL_PATCH,
        STAGE_DRIVER_INJECTION,
        STAGE_PARTITION_ADAPTATION,
        STAGE_FINALIZATION,
        STAGE_COMPLETE
    };

    enum PortingMode {
        MODE_AUTOMATIC = 0,
        MODE_MANUAL,
        MODE_CONSERVATIVE,
        MODE_AGGRESSIVE
    };

    explicit DevicePortingEngine(QObject *parent = nullptr);
    ~DevicePortingEngine();

    // Configuration
    void setPortingConfig(const PortingConfig &config);
    PortingConfig getPortingConfig() const { return config_; }
    
    void setPortingMode(PortingMode mode);
    PortingMode getPortingMode() const { return mode_; }

    // Device detection and analysis
    bool detectConnectedDevice();
    DeviceInfo getDetectedDevice() const { return detected_device_; }
    bool isDeviceSupported(const DeviceInfo &device);
    
    // Porting operations
    void startPortingProcess(const QStringList &firmware_files);
    void stopPortingProcess();
    bool isPortingInProgress() const { return porting_in_progress_; }
    
    PortingResult getLastPortingResult() const { return last_result_; }
    
    // Real-time monitoring
    void enableRealTimeMonitoring(bool enable);
    bool isRealTimeMonitoringEnabled() const { return realtime_monitoring_; }
    
    // Integration with MainController
    void setMainController(MainController *controller);

    // Utility functions
    static QStringList getSupportedChipsets();
    static QStringList getSupportedPlatforms();
    static bool isChipsetCompatible(const QString &source, const QString &target);

signals:
    void deviceDetected(const DeviceInfo &device);
    void deviceDisconnected();
    void portingStarted();
    void portingStageChanged(PortingStage stage, const QString &description);
    void portingProgressChanged(int percentage);
    void portingCompleted(const PortingResult &result);
    void portingFailed(const QString &error);
    void warningGenerated(const QString &warning);
    void realTimeDataUpdated(const QMap<QString, QVariant> &data);

public slots:
    void onDeviceConnectionChanged();
    void onFlashingStarted();
    void onFlashingProgress(int percentage);
    void onFlashingCompleted();

private slots:
    void performDeviceDetection();
    void processPortingStage();
    void updateRealTimeData();

private:
    // Core porting functions
    bool analyzeDevice(const DeviceInfo &device);
    bool preparePortingEnvironment();
    bool applyBootloaderPatches(const QString &bootloader_file);
    bool applyKernelPatches(const QString &kernel_file);
    bool injectDrivers(const QStringList &driver_files);
    bool adaptPartitionLayout(const QString &scatter_file);
    bool finalizePorting();
    
    // Device detection helpers
    DeviceInfo detectUSBDevice();
    DeviceInfo detectSerialDevice();
    bool queryDeviceProperties(DeviceInfo &device);
    
    // Porting helpers
    bool validateFirmwareCompatibility(const QStringList &files);
    bool createBackupFiles(const QStringList &files);
    bool restoreBackupFiles();
    QString generatePatchScript(const QString &source_file, const QString &target_file);
    bool executePatchScript(const QString &script);
    
    // Memory and partition helpers
    bool analyzeMemoryLayout(const DeviceInfo &device);
    bool calculatePartitionSizes(const DeviceInfo &device);
    bool updateScatterFile(const QString &scatter_file, const QMap<QString, quint64> &new_sizes);
    
    // Error handling
    void setError(const QString &error);
    void addWarning(const QString &warning);
    void clearErrors();

    // Configuration and state
    PortingConfig config_;
    PortingMode mode_;
    DeviceInfo detected_device_;
    PortingResult last_result_;
    
    // Processing state
    bool porting_in_progress_;
    PortingStage current_stage_;
    int current_progress_;
    QStringList current_firmware_files_;
    
    // Real-time monitoring
    bool realtime_monitoring_;
    QTimer *detection_timer_;
    QTimer *monitoring_timer_;
    
    // Thread safety
    QMutex state_mutex_;
    
    // Integration
    MainController *main_controller_;
    
    // Temporary files and backup
    QString temp_directory_;
    QString backup_directory_;
    QStringList temp_files_;
    QStringList backup_files_;
    
    // Device database
    static QMap<QString, QStringList> chipset_compatibility_map_;
    static QMap<QString, DeviceInfo> device_database_;
    
    // Constants
    static const int DETECTION_INTERVAL_MS = 2000;
    static const int MONITORING_INTERVAL_MS = 500;
    static const QString TEMP_DIR_PREFIX;
    static const QString BACKUP_DIR_PREFIX;
};

#endif // DEVICEPORTINGENGINE_H
