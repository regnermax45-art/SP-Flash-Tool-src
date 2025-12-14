#ifndef MODERNSCATTERWIDGET_H
#define MODERNSCATTERWIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QRadioButton>
#include <QButtonGroup>
#include <QProgressBar>
#include <QFrame>
#include <QFileDialog>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QUrl>
#include "ScatterFileManager.h"

class MainWindow;

/**
 * @brief Modern, enhanced UI widget for dual scatter file selection
 * 
 * This widget provides an intuitive interface for selecting and managing
 * both single and dual scatter file operations with drag-and-drop support,
 * recent files, and enhanced visual feedback.
 */
class ModernScatterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ModernScatterWidget(QWidget *parent = nullptr);
    ~ModernScatterWidget();

    // Integration with main window
    void setMainWindow(MainWindow *main_window);
    
    // Scatter file manager integration
    void setScatterFileManager(ScatterFileManager *manager);
    ScatterFileManager* getScatterFileManager() const { return scatter_manager_; }

    // Mode management
    void setOperationMode(ScatterFileManager::OperationMode mode);
    ScatterFileManager::OperationMode getOperationMode() const;

    // File path access
    QString getPrimaryScatterPath() const;
    QString getSecondaryScatterPath() const;
    QStringList getAllScatterPaths() const;

    // UI state management
    void updateUI();
    void setEnabled(bool enabled);
    void resetUI();

    // Loading state
    void setLoadingState(bool loading);
    void setLoadingProgress(int percentage);

signals:
    void scatterFileSelected(ScatterFileManager::ScatterFileType type, const QString &path);
    void operationModeChanged(ScatterFileManager::OperationMode mode);
    void loadScatterRequested(ScatterFileManager::ScatterFileType type);
    void loadAllScatterRequested();

public slots:
    void onScatterFileLoaded(ScatterFileManager::ScatterFileType type, const QString &path);
    void onScatterFileLoadFailed(ScatterFileManager::ScatterFileType type, const QString &path, const QString &error);
    void onAllScatterFilesLoaded();
    void onOperationModeChanged(ScatterFileManager::OperationMode mode);

private slots:
    void onModeRadioToggled();
    void onPrimaryBrowseClicked();
    void onSecondaryBrowseClicked();
    void onPrimaryComboChanged();
    void onSecondaryComboChanged();
    void onLoadPrimaryClicked();
    void onLoadSecondaryClicked();
    void onLoadAllClicked();
    void onClearPrimaryClicked();
    void onClearSecondaryClicked();

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    void setupUI();
    void setupModeSelection();
    void setupScatterFileControls();
    void setupActionButtons();
    void setupStatusDisplay();
    void connectSignals();
    
    void updateModeUI();
    void updateFileControls();
    void updateActionButtons();
    void updateStatusDisplay();
    
    void populateRecentFiles(ScatterFileManager::ScatterFileType type);
    void addRecentFile(ScatterFileManager::ScatterFileType type, const QString &path);
    
    QString browseForScatterFile(const QString &title);
    bool isScatterFile(const QString &path);
    void handleDroppedFile(const QString &path, const QPoint &position);
    
    void showError(const QString &message);
    void showSuccess(const QString &message);
    void showInfo(const QString &message);

    // UI Components
    QVBoxLayout *main_layout_;
    
    // Mode selection
    QGroupBox *mode_group_;
    QRadioButton *single_mode_radio_;
    QRadioButton *dual_mode_radio_;
    QButtonGroup *mode_button_group_;
    
    // Scatter file controls
    QGroupBox *files_group_;
    QGridLayout *files_layout_;
    
    // Primary scatter file
    QLabel *primary_label_;
    QComboBox *primary_combo_;
    QPushButton *primary_browse_btn_;
    QPushButton *primary_load_btn_;
    QPushButton *primary_clear_btn_;
    QLabel *primary_status_;
    
    // Secondary scatter file
    QLabel *secondary_label_;
    QComboBox *secondary_combo_;
    QPushButton *secondary_browse_btn_;
    QPushButton *secondary_load_btn_;
    QPushButton *secondary_clear_btn_;
    QLabel *secondary_status_;
    
    // Action buttons
    QHBoxLayout *action_layout_;
    QPushButton *load_all_btn_;
    QPushButton *validate_btn_;
    QPushButton *reset_btn_;
    
    // Status display
    QGroupBox *status_group_;
    QVBoxLayout *status_layout_;
    QLabel *overall_status_;
    QProgressBar *progress_bar_;
    QLabel *info_label_;
    
    // Drop zones
    QFrame *primary_drop_zone_;
    QFrame *secondary_drop_zone_;
    
    // Data
    MainWindow *main_window_;
    ScatterFileManager *scatter_manager_;
    bool loading_in_progress_;
    
    // Styling
    QString getDropZoneStyle(bool active = false);
    QString getStatusStyle(const QString &type); // success, error, info, warning
    QString getButtonStyle(const QString &type); // primary, secondary, danger
};

#endif // MODERNSCATTERWIDGET_H
