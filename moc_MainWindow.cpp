/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[75];
    char stringdata0[1522];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "signal_UnlockUI"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 25), // "signal_MemoryTestCallback"
QT_MOC_LITERAL(4, 54, 3), // "msg"
QT_MOC_LITERAL(5, 58, 5), // "color"
QT_MOC_LITERAL(6, 64, 25), // "signal_DeviceTestCallback"
QT_MOC_LITERAL(7, 90, 22), // "signal_platform_change"
QT_MOC_LITERAL(8, 113, 22), // "signal_language_change"
QT_MOC_LITERAL(9, 136, 5), // "index"
QT_MOC_LITERAL(10, 142, 21), // "signal_start_download"
QT_MOC_LITERAL(11, 164, 28), // "signal_set_UARTBaudrateIndex"
QT_MOC_LITERAL(12, 193, 14), // "signal_err_msg"
QT_MOC_LITERAL(13, 208, 8), // "err_code"
QT_MOC_LITERAL(14, 217, 11), // "std::string"
QT_MOC_LITERAL(15, 229, 3), // "err"
QT_MOC_LITERAL(16, 233, 13), // "slot_show_err"
QT_MOC_LITERAL(17, 247, 17), // "slot_check_finish"
QT_MOC_LITERAL(18, 265, 9), // "hasUpdate"
QT_MOC_LITERAL(19, 275, 13), // "slot_UnlockUI"
QT_MOC_LITERAL(20, 289, 12), // "slot_show_ok"
QT_MOC_LITERAL(21, 302, 14), // "slot_conn_init"
QT_MOC_LITERAL(22, 317, 20), // "slot_enable_DAChksum"
QT_MOC_LITERAL(23, 338, 11), // "chksum_type"
QT_MOC_LITERAL(24, 350, 21), // "slot_language_changed"
QT_MOC_LITERAL(25, 372, 20), // "slot_platformChanged"
QT_MOC_LITERAL(26, 393, 22), // "slot_setMenuItemStatus"
QT_MOC_LITERAL(27, 416, 13), // "toggleLogging"
QT_MOC_LITERAL(28, 430, 28), // "toggleEnableMarkBadBlockMode"
QT_MOC_LITERAL(29, 459, 23), // "toggleEnableAdvanceMode"
QT_MOC_LITERAL(30, 483, 23), // "toggleBromAdapterWidget"
QT_MOC_LITERAL(31, 507, 23), // "toggleSCIDownloadWidget"
QT_MOC_LITERAL(32, 531, 22), // "toggleDeviceTestWidget"
QT_MOC_LITERAL(33, 554, 16), // "slot_GetDAReport"
QT_MOC_LITERAL(34, 571, 18), // "const DA_REPORT_T*"
QT_MOC_LITERAL(35, 590, 11), // "p_da_report"
QT_MOC_LITERAL(36, 602, 11), // "friend_name"
QT_MOC_LITERAL(37, 614, 10), // "usb_status"
QT_MOC_LITERAL(38, 625, 18), // "slot_GetBootResult"
QT_MOC_LITERAL(39, 644, 18), // "const BOOT_RESULT*"
QT_MOC_LITERAL(40, 663, 13), // "p_boot_result"
QT_MOC_LITERAL(41, 677, 21), // "slot_UpdateConnStatus"
QT_MOC_LITERAL(42, 699, 13), // "friendly_name"
QT_MOC_LITERAL(43, 713, 9), // "stopTimer"
QT_MOC_LITERAL(44, 723, 22), // "slot_ScatterFileLoaded"
QT_MOC_LITERAL(45, 746, 35), // "ScatterFileManager::ScatterFi..."
QT_MOC_LITERAL(46, 782, 4), // "type"
QT_MOC_LITERAL(47, 787, 4), // "path"
QT_MOC_LITERAL(48, 792, 26), // "slot_AllScatterFilesLoaded"
QT_MOC_LITERAL(49, 819, 19), // "slot_DeviceDetected"
QT_MOC_LITERAL(50, 839, 10), // "DeviceInfo"
QT_MOC_LITERAL(51, 850, 6), // "device"
QT_MOC_LITERAL(52, 857, 21), // "slot_PortingCompleted"
QT_MOC_LITERAL(53, 879, 13), // "PortingResult"
QT_MOC_LITERAL(54, 893, 6), // "result"
QT_MOC_LITERAL(55, 900, 18), // "slot_PortingFailed"
QT_MOC_LITERAL(56, 919, 5), // "error"
QT_MOC_LITERAL(57, 925, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(58, 950, 34), // "on_action_SoftwareUpdate_trig..."
QT_MOC_LITERAL(59, 985, 35), // "on_actionUSB_UART_options_tri..."
QT_MOC_LITERAL(60, 1021, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(61, 1045, 31), // "on_actionExportFormat_triggered"
QT_MOC_LITERAL(62, 1077, 33), // "on_actionExportDownload_trigg..."
QT_MOC_LITERAL(63, 1111, 48), // "on_actionExportPartial_Format..."
QT_MOC_LITERAL(64, 1160, 36), // "on_actionExportWriteMemory_tr..."
QT_MOC_LITERAL(65, 1197, 34), // "on_actionPhysical_Format_trig..."
QT_MOC_LITERAL(66, 1232, 33), // "on_actionParameter_Page_trigg..."
QT_MOC_LITERAL(67, 1266, 31), // "on_actionWrite_Memory_triggered"
QT_MOC_LITERAL(68, 1298, 32), // "on_actionSecurity_Mode_triggered"
QT_MOC_LITERAL(69, 1331, 35), // "on_actionOpen_Logs_Folder_tri..."
QT_MOC_LITERAL(70, 1367, 27), // "on_actionReadback_triggered"
QT_MOC_LITERAL(71, 1395, 24), // "on_actionIndex_triggered"
QT_MOC_LITERAL(72, 1420, 27), // "on_actionContents_triggered"
QT_MOC_LITERAL(73, 1448, 31), // "on_actionShow_Welcome_triggered"
QT_MOC_LITERAL(74, 1480, 41) // "on_actionCerfitication_downlo..."

    },
    "MainWindow\0signal_UnlockUI\0\0"
    "signal_MemoryTestCallback\0msg\0color\0"
    "signal_DeviceTestCallback\0"
    "signal_platform_change\0signal_language_change\0"
    "index\0signal_start_download\0"
    "signal_set_UARTBaudrateIndex\0"
    "signal_err_msg\0err_code\0std::string\0"
    "err\0slot_show_err\0slot_check_finish\0"
    "hasUpdate\0slot_UnlockUI\0slot_show_ok\0"
    "slot_conn_init\0slot_enable_DAChksum\0"
    "chksum_type\0slot_language_changed\0"
    "slot_platformChanged\0slot_setMenuItemStatus\0"
    "toggleLogging\0toggleEnableMarkBadBlockMode\0"
    "toggleEnableAdvanceMode\0toggleBromAdapterWidget\0"
    "toggleSCIDownloadWidget\0toggleDeviceTestWidget\0"
    "slot_GetDAReport\0const DA_REPORT_T*\0"
    "p_da_report\0friend_name\0usb_status\0"
    "slot_GetBootResult\0const BOOT_RESULT*\0"
    "p_boot_result\0slot_UpdateConnStatus\0"
    "friendly_name\0stopTimer\0slot_ScatterFileLoaded\0"
    "ScatterFileManager::ScatterFileType\0"
    "type\0path\0slot_AllScatterFilesLoaded\0"
    "slot_DeviceDetected\0DeviceInfo\0device\0"
    "slot_PortingCompleted\0PortingResult\0"
    "result\0slot_PortingFailed\0error\0"
    "on_actionAbout_triggered\0"
    "on_action_SoftwareUpdate_triggered\0"
    "on_actionUSB_UART_options_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionExportFormat_triggered\0"
    "on_actionExportDownload_triggered\0"
    "on_actionExportPartial_Format_Download_triggered\0"
    "on_actionExportWriteMemory_triggered\0"
    "on_actionPhysical_Format_triggered\0"
    "on_actionParameter_Page_triggered\0"
    "on_actionWrite_Memory_triggered\0"
    "on_actionSecurity_Mode_triggered\0"
    "on_actionOpen_Logs_Folder_triggered\0"
    "on_actionReadback_triggered\0"
    "on_actionIndex_triggered\0"
    "on_actionContents_triggered\0"
    "on_actionShow_Welcome_triggered\0"
    "on_actionCerfitication_download_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x06 /* Public */,
       3,    2,  265,    2, 0x06 /* Public */,
       6,    2,  270,    2, 0x06 /* Public */,
       7,    0,  275,    2, 0x06 /* Public */,
       8,    1,  276,    2, 0x06 /* Public */,
      10,    0,  279,    2, 0x06 /* Public */,
      11,    1,  280,    2, 0x06 /* Public */,
      12,    2,  283,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,  288,    2, 0x0a /* Public */,
      17,    1,  293,    2, 0x0a /* Public */,
      19,    0,  296,    2, 0x0a /* Public */,
      20,    0,  297,    2, 0x0a /* Public */,
      21,    0,  298,    2, 0x0a /* Public */,
      22,    1,  299,    2, 0x0a /* Public */,
      24,    1,  302,    2, 0x0a /* Public */,
      25,    0,  305,    2, 0x0a /* Public */,
      26,    0,  306,    2, 0x0a /* Public */,
      27,    0,  307,    2, 0x0a /* Public */,
      28,    0,  308,    2, 0x0a /* Public */,
      29,    0,  309,    2, 0x0a /* Public */,
      30,    0,  310,    2, 0x0a /* Public */,
      31,    0,  311,    2, 0x0a /* Public */,
      32,    0,  312,    2, 0x0a /* Public */,
      33,    3,  313,    2, 0x0a /* Public */,
      38,    2,  320,    2, 0x0a /* Public */,
      41,    1,  325,    2, 0x0a /* Public */,
      43,    0,  328,    2, 0x0a /* Public */,
      44,    2,  329,    2, 0x0a /* Public */,
      48,    0,  334,    2, 0x0a /* Public */,
      49,    1,  335,    2, 0x0a /* Public */,
      52,    1,  338,    2, 0x0a /* Public */,
      55,    1,  341,    2, 0x0a /* Public */,
      57,    0,  344,    2, 0x08 /* Private */,
      58,    0,  345,    2, 0x08 /* Private */,
      59,    0,  346,    2, 0x08 /* Private */,
      60,    0,  347,    2, 0x08 /* Private */,
      61,    0,  348,    2, 0x08 /* Private */,
      62,    0,  349,    2, 0x08 /* Private */,
      63,    0,  350,    2, 0x08 /* Private */,
      64,    0,  351,    2, 0x08 /* Private */,
      65,    0,  352,    2, 0x08 /* Private */,
      66,    0,  353,    2, 0x08 /* Private */,
      67,    0,  354,    2, 0x08 /* Private */,
      68,    0,  355,    2, 0x08 /* Private */,
      69,    0,  356,    2, 0x08 /* Private */,
      70,    0,  357,    2, 0x08 /* Private */,
      71,    0,  358,    2, 0x08 /* Private */,
      72,    0,  359,    2, 0x08 /* Private */,
      73,    0,  360,    2, 0x08 /* Private */,
      74,    0,  361,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, 0x80000000 | 14, QMetaType::Int,   35,   36,   37,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 14,   40,   36,
    QMetaType::Void, 0x80000000 | 14,   42,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45, QMetaType::QString,   46,   47,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_UnlockUI(); break;
        case 1: _t->signal_MemoryTestCallback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 2: _t->signal_DeviceTestCallback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 3: _t->signal_platform_change(); break;
        case 4: _t->signal_language_change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->signal_start_download(); break;
        case 6: _t->signal_set_UARTBaudrateIndex((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->signal_err_msg((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 8: _t->slot_show_err((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 9: _t->slot_check_finish((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 10: _t->slot_UnlockUI(); break;
        case 11: _t->slot_show_ok(); break;
        case 12: _t->slot_conn_init(); break;
        case 13: _t->slot_enable_DAChksum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slot_language_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->slot_platformChanged(); break;
        case 16: _t->slot_setMenuItemStatus(); break;
        case 17: _t->toggleLogging(); break;
        case 18: _t->toggleEnableMarkBadBlockMode(); break;
        case 19: _t->toggleEnableAdvanceMode(); break;
        case 20: _t->toggleBromAdapterWidget(); break;
        case 21: _t->toggleSCIDownloadWidget(); break;
        case 22: _t->toggleDeviceTestWidget(); break;
        case 23: _t->slot_GetDAReport((*reinterpret_cast< const DA_REPORT_T*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 24: _t->slot_GetBootResult((*reinterpret_cast< const BOOT_RESULT*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 25: _t->slot_UpdateConnStatus((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 26: _t->stopTimer(); break;
        case 27: _t->slot_ScatterFileLoaded((*reinterpret_cast< ScatterFileManager::ScatterFileType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->slot_AllScatterFilesLoaded(); break;
        case 29: _t->slot_DeviceDetected((*reinterpret_cast< const DeviceInfo(*)>(_a[1]))); break;
        case 30: _t->slot_PortingCompleted((*reinterpret_cast< const PortingResult(*)>(_a[1]))); break;
        case 31: _t->slot_PortingFailed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->on_actionAbout_triggered(); break;
        case 33: _t->on_action_SoftwareUpdate_triggered(); break;
        case 34: _t->on_actionUSB_UART_options_triggered(); break;
        case 35: _t->on_actionExit_triggered(); break;
        case 36: _t->on_actionExportFormat_triggered(); break;
        case 37: _t->on_actionExportDownload_triggered(); break;
        case 38: _t->on_actionExportPartial_Format_Download_triggered(); break;
        case 39: _t->on_actionExportWriteMemory_triggered(); break;
        case 40: _t->on_actionPhysical_Format_triggered(); break;
        case 41: _t->on_actionParameter_Page_triggered(); break;
        case 42: _t->on_actionWrite_Memory_triggered(); break;
        case 43: _t->on_actionSecurity_Mode_triggered(); break;
        case 44: _t->on_actionOpen_Logs_Folder_triggered(); break;
        case 45: _t->on_actionReadback_triggered(); break;
        case 46: _t->on_actionIndex_triggered(); break;
        case 47: _t->on_actionContents_triggered(); break;
        case 48: _t->on_actionShow_Welcome_triggered(); break;
        case 49: _t->on_actionCerfitication_download_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_UnlockUI)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_MemoryTestCallback)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_DeviceTestCallback)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_platform_change)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_language_change)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_start_download)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_set_UARTBaudrateIndex)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::signal_err_msg)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal_UnlockUI()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::signal_MemoryTestCallback(const QString & _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::signal_DeviceTestCallback(const QString & _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::signal_platform_change()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::signal_language_change(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::signal_start_download()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainWindow::signal_set_UARTBaudrateIndex(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::signal_err_msg(int _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
