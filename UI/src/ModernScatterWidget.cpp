#include "ModernScatterWidget.h"
#include "MainWindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QFileInfo>
#include <QPainter>
#include <QStyleOption>

ModernScatterWidget::ModernScatterWidget(QWidget *parent)
    : QWidget(parent)
    , main_window_(nullptr)
    , scatter_manager_(nullptr)
    , loading_in_progress_(false)
{
    setupUI();
    connectSignals();
    setAcceptDrops(true);
    updateUI();
}

ModernScatterWidget::~ModernScatterWidget()
{
}

void ModernScatterWidget::setMainWindow(MainWindow *main_window)
{
    main_window_ = main_window;
}

void ModernScatterWidget::setScatterFileManager(ScatterFileManager *manager)
{
    if (scatter_manager_) {
        disconnect(scatter_manager_, nullptr, this, nullptr);
    }
    
    scatter_manager_ = manager;
    
    if (scatter_manager_) {
        connect(scatter_manager_, &ScatterFileManager::scatterFileLoaded,
                this, &ModernScatterWidget::onScatterFileLoaded);
        connect(scatter_manager_, &ScatterFileManager::scatterFileLoadFailed,
                this, &ModernScatterWidget::onScatterFileLoadFailed);
        connect(scatter_manager_, &ScatterFileManager::allScatterFilesLoaded,
                this, &ModernScatterWidget::onAllScatterFilesLoaded);
        connect(scatter_manager_, &ScatterFileManager::operationModeChanged,
                this, &ModernScatterWidget::onOperationModeChanged);
        
        updateUI();
    }
}

void ModernScatterWidget::setupUI()
{
    main_layout_ = new QVBoxLayout(this);
    main_layout_->setSpacing(10);
    main_layout_->setContentsMargins(10, 10, 10, 10);
    
    setupModeSelection();
    setupScatterFileControls();
    setupActionButtons();
    setupStatusDisplay();
    
    setLayout(main_layout_);
}

void ModernScatterWidget::setupModeSelection()
{
    mode_group_ = new QGroupBox("Operation Mode", this);
    mode_group_->setStyleSheet(
        "QGroupBox {"
        "    font-weight: bold;"
        "    border: 2px solid #cccccc;"
        "    border-radius: 8px;"
        "    margin-top: 10px;"
        "    padding-top: 10px;"
        "}"
        "QGroupBox::title {"
        "    subcontrol-origin: margin;"
        "    left: 10px;"
        "    padding: 0 5px 0 5px;"
        "}"
    );
    
    QHBoxLayout *mode_layout = new QHBoxLayout(mode_group_);
    
    single_mode_radio_ = new QRadioButton("Single Scatter File", mode_group_);
    dual_mode_radio_ = new QRadioButton("Dual Scatter Files", mode_group_);
    
    single_mode_radio_->setChecked(true);
    
    mode_button_group_ = new QButtonGroup(this);
    mode_button_group_->addButton(single_mode_radio_, 0);
    mode_button_group_->addButton(dual_mode_radio_, 1);
    
    mode_layout->addWidget(single_mode_radio_);
    mode_layout->addWidget(dual_mode_radio_);
    mode_layout->addStretch();
    
    main_layout_->addWidget(mode_group_);
}

void ModernScatterWidget::setupScatterFileControls()
{
    files_group_ = new QGroupBox("Scatter Files", this);
    files_group_->setStyleSheet(
        "QGroupBox {"
        "    font-weight: bold;"
        "    border: 2px solid #cccccc;"
        "    border-radius: 8px;"
        "    margin-top: 10px;"
        "    padding-top: 10px;"
        "}"
    );
    
    files_layout_ = new QGridLayout(files_group_);
    files_layout_->setSpacing(8);
    
    // Primary scatter file controls
    primary_label_ = new QLabel("Primary Scatter File:", files_group_);
    primary_label_->setStyleSheet("font-weight: bold; color: #2c3e50;");
    
    primary_combo_ = new QComboBox(files_group_);
    primary_combo_->setEditable(true);
    primary_combo_->setMinimumWidth(300);
    primary_combo_->setStyleSheet(getButtonStyle("secondary"));
    
    primary_browse_btn_ = new QPushButton("Browse...", files_group_);
    primary_browse_btn_->setStyleSheet(getButtonStyle("secondary"));
    
    primary_load_btn_ = new QPushButton("Load", files_group_);
    primary_load_btn_->setStyleSheet(getButtonStyle("primary"));
    
    primary_clear_btn_ = new QPushButton("Clear", files_group_);
    primary_clear_btn_->setStyleSheet(getButtonStyle("danger"));
    
    primary_status_ = new QLabel("No file selected", files_group_);
    primary_status_->setStyleSheet(getStatusStyle("info"));
    
    // Secondary scatter file controls
    secondary_label_ = new QLabel("Secondary Scatter File:", files_group_);
    secondary_label_->setStyleSheet("font-weight: bold; color: #2c3e50;");
    
    secondary_combo_ = new QComboBox(files_group_);
    secondary_combo_->setEditable(true);
    secondary_combo_->setMinimumWidth(300);
    secondary_combo_->setStyleSheet(getButtonStyle("secondary"));
    
    secondary_browse_btn_ = new QPushButton("Browse...", files_group_);
    secondary_browse_btn_->setStyleSheet(getButtonStyle("secondary"));
    
    secondary_load_btn_ = new QPushButton("Load", files_group_);
    secondary_load_btn_->setStyleSheet(getButtonStyle("primary"));
    
    secondary_clear_btn_ = new QPushButton("Clear", files_group_);
    secondary_clear_btn_->setStyleSheet(getButtonStyle("danger"));
    
    secondary_status_ = new QLabel("No file selected", files_group_);
    secondary_status_->setStyleSheet(getStatusStyle("info"));
    
    // Layout the controls
    files_layout_->addWidget(primary_label_, 0, 0);
    files_layout_->addWidget(primary_combo_, 0, 1);
    files_layout_->addWidget(primary_browse_btn_, 0, 2);
    files_layout_->addWidget(primary_load_btn_, 0, 3);
    files_layout_->addWidget(primary_clear_btn_, 0, 4);
    files_layout_->addWidget(primary_status_, 1, 1, 1, 4);
    
    files_layout_->addWidget(secondary_label_, 2, 0);
    files_layout_->addWidget(secondary_combo_, 2, 1);
    files_layout_->addWidget(secondary_browse_btn_, 2, 2);
    files_layout_->addWidget(secondary_load_btn_, 2, 3);
    files_layout_->addWidget(secondary_clear_btn_, 2, 4);
    files_layout_->addWidget(secondary_status_, 3, 1, 1, 4);
    
    main_layout_->addWidget(files_group_);
}

void ModernScatterWidget::setupActionButtons()
{
    action_layout_ = new QHBoxLayout();
    action_layout_->setSpacing(10);
    
    load_all_btn_ = new QPushButton("Load All Scatter Files", this);
    load_all_btn_->setStyleSheet(getButtonStyle("primary"));
    load_all_btn_->setMinimumHeight(35);
    
    validate_btn_ = new QPushButton("Validate Files", this);
    validate_btn_->setStyleSheet(getButtonStyle("secondary"));
    validate_btn_->setMinimumHeight(35);
    
    reset_btn_ = new QPushButton("Reset", this);
    reset_btn_->setStyleSheet(getButtonStyle("danger"));
    reset_btn_->setMinimumHeight(35);
    
    action_layout_->addWidget(load_all_btn_);
    action_layout_->addWidget(validate_btn_);
    action_layout_->addStretch();
    action_layout_->addWidget(reset_btn_);
    
    main_layout_->addLayout(action_layout_);
}

void ModernScatterWidget::setupStatusDisplay()
{
    status_group_ = new QGroupBox("Status", this);
    status_group_->setStyleSheet(
        "QGroupBox {"
        "    font-weight: bold;"
        "    border: 2px solid #cccccc;"
        "    border-radius: 8px;"
        "    margin-top: 10px;"
        "    padding-top: 10px;"
        "}"
    );
    
    status_layout_ = new QVBoxLayout(status_group_);
    
    overall_status_ = new QLabel("Ready", status_group_);
    overall_status_->setStyleSheet(getStatusStyle("info"));
    overall_status_->setAlignment(Qt::AlignCenter);
    
    progress_bar_ = new QProgressBar(status_group_);
    progress_bar_->setVisible(false);
    progress_bar_->setStyleSheet(
        "QProgressBar {"
        "    border: 2px solid #bdc3c7;"
        "    border-radius: 5px;"
        "    text-align: center;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #3498db;"
        "    border-radius: 3px;"
        "}"
    );
    
    info_label_ = new QLabel("Select scatter files to begin", status_group_);
    info_label_->setStyleSheet("color: #7f8c8d; font-style: italic;");
    info_label_->setAlignment(Qt::AlignCenter);
    
    status_layout_->addWidget(overall_status_);
    status_layout_->addWidget(progress_bar_);
    status_layout_->addWidget(info_label_);
    
    main_layout_->addWidget(status_group_);
}

void ModernScatterWidget::connectSignals()
{
    connect(mode_button_group_, QOverload<int>::of(&QButtonGroup::buttonClicked),
            this, &ModernScatterWidget::onModeRadioToggled);
    
    connect(primary_browse_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onPrimaryBrowseClicked);
    connect(secondary_browse_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onSecondaryBrowseClicked);
    
    connect(primary_combo_, QOverload<const QString &>::of(&QComboBox::currentTextChanged),
            this, &ModernScatterWidget::onPrimaryComboChanged);
    connect(secondary_combo_, QOverload<const QString &>::of(&QComboBox::currentTextChanged),
            this, &ModernScatterWidget::onSecondaryComboChanged);
    
    connect(primary_load_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onLoadPrimaryClicked);
    connect(secondary_load_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onLoadSecondaryClicked);
    connect(load_all_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onLoadAllClicked);
    
    connect(primary_clear_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onClearPrimaryClicked);
    connect(secondary_clear_btn_, &QPushButton::clicked,
            this, &ModernScatterWidget::onClearSecondaryClicked);
}

QString ModernScatterWidget::getButtonStyle(const QString &type)
{
    if (type == "primary") {
        return "QPushButton {"
               "    background-color: #3498db;"
               "    color: white;"
               "    border: none;"
               "    padding: 8px 16px;"
               "    border-radius: 4px;"
               "    font-weight: bold;"
               "}"
               "QPushButton:hover {"
               "    background-color: #2980b9;"
               "}"
               "QPushButton:pressed {"
               "    background-color: #21618c;"
               "}";
    } else if (type == "secondary") {
        return "QPushButton {"
               "    background-color: #95a5a6;"
               "    color: white;"
               "    border: none;"
               "    padding: 8px 16px;"
               "    border-radius: 4px;"
               "}"
               "QPushButton:hover {"
               "    background-color: #7f8c8d;"
               "}";
    } else if (type == "danger") {
        return "QPushButton {"
               "    background-color: #e74c3c;"
               "    color: white;"
               "    border: none;"
               "    padding: 8px 16px;"
               "    border-radius: 4px;"
               "}"
               "QPushButton:hover {"
               "    background-color: #c0392b;"
               "}";
    }
    return "";
}

QString ModernScatterWidget::getStatusStyle(const QString &type)
{
    if (type == "success") {
        return "color: #27ae60; font-weight: bold;";
    } else if (type == "error") {
        return "color: #e74c3c; font-weight: bold;";
    } else if (type == "warning") {
        return "color: #f39c12; font-weight: bold;";
    } else if (type == "info") {
        return "color: #3498db;";
    }
    return "";
}

void ModernScatterWidget::onModeRadioToggled()
{
    ScatterFileManager::OperationMode mode = single_mode_radio_->isChecked() ? 
        ScatterFileManager::SINGLE_SCATTER_MODE : ScatterFileManager::DUAL_SCATTER_MODE;
    
    if (scatter_manager_) {
        scatter_manager_->setOperationMode(mode);
    }
    
    updateModeUI();
    emit operationModeChanged(mode);
}

void ModernScatterWidget::onPrimaryBrowseClicked()
{
    QString file_path = browseForScatterFile("Select Primary Scatter File");
    if (!file_path.isEmpty()) {
        primary_combo_->setCurrentText(file_path);
        if (scatter_manager_) {
            scatter_manager_->setScatterFilePath(ScatterFileManager::PRIMARY_SCATTER, file_path);
        }
        emit scatterFileSelected(ScatterFileManager::PRIMARY_SCATTER, file_path);
    }
}

void ModernScatterWidget::onSecondaryBrowseClicked()
{
    QString file_path = browseForScatterFile("Select Secondary Scatter File");
    if (!file_path.isEmpty()) {
        secondary_combo_->setCurrentText(file_path);
        if (scatter_manager_) {
            scatter_manager_->setScatterFilePath(ScatterFileManager::SECONDARY_SCATTER, file_path);
        }
        emit scatterFileSelected(ScatterFileManager::SECONDARY_SCATTER, file_path);
    }
}

void ModernScatterWidget::onPrimaryComboChanged()
{
    QString path = primary_combo_->currentText();
    if (!path.isEmpty() && scatter_manager_) {
        scatter_manager_->setScatterFilePath(ScatterFileManager::PRIMARY_SCATTER, path);
        emit scatterFileSelected(ScatterFileManager::PRIMARY_SCATTER, path);
    }
}

void ModernScatterWidget::onSecondaryComboChanged()
{
    QString path = secondary_combo_->currentText();
    if (!path.isEmpty() && scatter_manager_) {
        scatter_manager_->setScatterFilePath(ScatterFileManager::SECONDARY_SCATTER, path);
        emit scatterFileSelected(ScatterFileManager::SECONDARY_SCATTER, path);
    }
}

void ModernScatterWidget::onLoadPrimaryClicked()
{
    if (!scatter_manager_) return;
    
    QString path = primary_combo_->currentText();
    if (path.isEmpty()) {
        showError("Please select a primary scatter file first");
        return;
    }
    
    setLoadingState(true);
    emit loadScatterRequested(ScatterFileManager::PRIMARY_SCATTER);
}

void ModernScatterWidget::onLoadSecondaryClicked()
{
    if (!scatter_manager_) return;
    
    QString path = secondary_combo_->currentText();
    if (path.isEmpty()) {
        showError("Please select a secondary scatter file first");
        return;
    }
    
    setLoadingState(true);
    emit loadScatterRequested(ScatterFileManager::SECONDARY_SCATTER);
}

void ModernScatterWidget::onLoadAllClicked()
{
    if (!scatter_manager_) return;
    
    setLoadingState(true);
    emit loadAllScatterRequested();
}

void ModernScatterWidget::onClearPrimaryClicked()
{
    primary_combo_->setCurrentText("");
    primary_status_->setText("No file selected");
    primary_status_->setStyleSheet(getStatusStyle("info"));
    
    if (scatter_manager_) {
        scatter_manager_->setScatterFilePath(ScatterFileManager::PRIMARY_SCATTER, "");
    }
}

void ModernScatterWidget::onClearSecondaryClicked()
{
    secondary_combo_->setCurrentText("");
    secondary_status_->setText("No file selected");
    secondary_status_->setStyleSheet(getStatusStyle("info"));
    
    if (scatter_manager_) {
        scatter_manager_->setScatterFilePath(ScatterFileManager::SECONDARY_SCATTER, "");
    }
}

void ModernScatterWidget::onScatterFileLoaded(ScatterFileManager::ScatterFileType type, const QString &path)
{
    if (type == ScatterFileManager::PRIMARY_SCATTER) {
        primary_status_->setText("✓ Loaded successfully");
        primary_status_->setStyleSheet(getStatusStyle("success"));
    } else {
        secondary_status_->setText("✓ Loaded successfully");
        secondary_status_->setStyleSheet(getStatusStyle("success"));
    }
    
    updateStatusDisplay();
}

void ModernScatterWidget::onScatterFileLoadFailed(ScatterFileManager::ScatterFileType type, const QString &path, const QString &error)
{
    QString message = QString("✗ Failed to load: %1").arg(error);
    
    if (type == ScatterFileManager::PRIMARY_SCATTER) {
        primary_status_->setText(message);
        primary_status_->setStyleSheet(getStatusStyle("error"));
    } else {
        secondary_status_->setText(message);
        secondary_status_->setStyleSheet(getStatusStyle("error"));
    }
    
    setLoadingState(false);
    showError(QString("Failed to load %1 scatter file: %2")
              .arg(type == ScatterFileManager::PRIMARY_SCATTER ? "primary" : "secondary")
              .arg(error));
}

void ModernScatterWidget::onAllScatterFilesLoaded()
{
    setLoadingState(false);
    showSuccess("All scatter files loaded successfully!");
    updateStatusDisplay();
}

void ModernScatterWidget::onOperationModeChanged(ScatterFileManager::OperationMode mode)
{
    if (mode == ScatterFileManager::SINGLE_SCATTER_MODE) {
        single_mode_radio_->setChecked(true);
    } else {
        dual_mode_radio_->setChecked(true);
    }
    updateModeUI();
}

void ModernScatterWidget::updateUI()
{
    updateModeUI();
    updateFileControls();
    updateActionButtons();
    updateStatusDisplay();
}

void ModernScatterWidget::updateModeUI()
{
    bool dual_mode = dual_mode_radio_->isChecked();
    
    secondary_label_->setVisible(dual_mode);
    secondary_combo_->setVisible(dual_mode);
    secondary_browse_btn_->setVisible(dual_mode);
    secondary_load_btn_->setVisible(dual_mode);
    secondary_clear_btn_->setVisible(dual_mode);
    secondary_status_->setVisible(dual_mode);
}

void ModernScatterWidget::updateFileControls()
{
    if (!scatter_manager_) return;
    
    populateRecentFiles(ScatterFileManager::PRIMARY_SCATTER);
    populateRecentFiles(ScatterFileManager::SECONDARY_SCATTER);
}

void ModernScatterWidget::updateActionButtons()
{
    bool has_files = false;
    
    if (scatter_manager_) {
        if (scatter_manager_->getOperationMode() == ScatterFileManager::SINGLE_SCATTER_MODE) {
            has_files = !scatter_manager_->getScatterFilePath(ScatterFileManager::PRIMARY_SCATTER).isEmpty();
        } else {
            has_files = !scatter_manager_->getScatterFilePath(ScatterFileManager::PRIMARY_SCATTER).isEmpty() &&
                       !scatter_manager_->getScatterFilePath(ScatterFileManager::SECONDARY_SCATTER).isEmpty();
        }
    }
    
    load_all_btn_->setEnabled(has_files && !loading_in_progress_);
    validate_btn_->setEnabled(has_files && !loading_in_progress_);
}

void ModernScatterWidget::updateStatusDisplay()
{
    if (!scatter_manager_) {
        overall_status_->setText("No scatter file manager");
        overall_status_->setStyleSheet(getStatusStyle("error"));
        return;
    }
    
    if (scatter_manager_->areAllRequiredScatterFilesLoaded()) {
        overall_status_->setText("✓ All required files loaded");
        overall_status_->setStyleSheet(getStatusStyle("success"));
        info_label_->setText("Ready for flashing operations");
    } else {
        overall_status_->setText("Waiting for scatter files");
        overall_status_->setStyleSheet(getStatusStyle("info"));
        info_label_->setText("Load scatter files to continue");
    }
}

void ModernScatterWidget::populateRecentFiles(ScatterFileManager::ScatterFileType type)
{
    if (!scatter_manager_) return;
    
    QComboBox *combo = (type == ScatterFileManager::PRIMARY_SCATTER) ? primary_combo_ : secondary_combo_;
    QStringList recent_files = scatter_manager_->getRecentFiles(type);
    
    combo->clear();
    combo->addItems(recent_files);
    
    QString current_path = scatter_manager_->getScatterFilePath(type);
    if (!current_path.isEmpty()) {
        combo->setCurrentText(current_path);
    }
}

void ModernScatterWidget::setLoadingState(bool loading)
{
    loading_in_progress_ = loading;
    progress_bar_->setVisible(loading);
    
    if (loading) {
        progress_bar_->setRange(0, 0); // Indeterminate progress
        overall_status_->setText("Loading scatter files...");
        overall_status_->setStyleSheet(getStatusStyle("info"));
    }
    
    updateActionButtons();
}

void ModernScatterWidget::setLoadingProgress(int percentage)
{
    if (loading_in_progress_) {
        progress_bar_->setRange(0, 100);
        progress_bar_->setValue(percentage);
    }
}

QString ModernScatterWidget::browseForScatterFile(const QString &title)
{
    QString filter = "Scatter Files (*.txt);;All Files (*.*)";
    QString file_path = QFileDialog::getOpenFileName(this, title, QString(), filter);
    
    if (!file_path.isEmpty() && isScatterFile(file_path)) {
        return file_path;
    }
    
    return QString();
}

bool ModernScatterWidget::isScatterFile(const QString &path)
{
    QFileInfo info(path);
    return info.exists() && (info.suffix().toLower() == "txt" || 
                            info.fileName().toLower().contains("scatter"));
}

void ModernScatterWidget::showError(const QString &message)
{
    info_label_->setText(QString("Error: %1").arg(message));
    info_label_->setStyleSheet(getStatusStyle("error"));
}

void ModernScatterWidget::showSuccess(const QString &message)
{
    info_label_->setText(message);
    info_label_->setStyleSheet(getStatusStyle("success"));
}

void ModernScatterWidget::showInfo(const QString &message)
{
    info_label_->setText(message);
    info_label_->setStyleSheet(getStatusStyle("info"));
}

void ModernScatterWidget::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasUrls()) {
        event->acceptProposedAction();
    }
}

void ModernScatterWidget::dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();
    if (mimeData->hasUrls()) {
        QList<QUrl> urls = mimeData->urls();
        if (!urls.isEmpty()) {
            QString path = urls.first().toLocalFile();
            if (isScatterFile(path)) {
                handleDroppedFile(path, event->pos());
                event->acceptProposedAction();
            }
        }
    }
}

void ModernScatterWidget::handleDroppedFile(const QString &path, const QPoint &position)
{
    // Determine which scatter file slot to use based on drop position
    QRect primary_rect = primary_combo_->geometry();
    QRect secondary_rect = secondary_combo_->geometry();
    
    bool use_secondary = dual_mode_radio_->isChecked() && 
                        secondary_rect.contains(position);
    
    if (use_secondary) {
        secondary_combo_->setCurrentText(path);
        onSecondaryComboChanged();
    } else {
        primary_combo_->setCurrentText(path);
        onPrimaryComboChanged();
    }
}

void ModernScatterWidget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
