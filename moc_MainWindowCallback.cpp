/****************************************************************************
** Meta object code from reading C++ file 'MainWindowCallback.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/MainWindowCallback.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindowCallback.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowCallback_t {
    QByteArrayData data[88];
    char stringdata0[1673];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowCallback_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowCallback_t qt_meta_stringdata_MainWindowCallback = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MainWindowCallback"
QT_MOC_LITERAL(1, 19, 24), // "signal_OperationFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 18), // "signal_OperationOK"
QT_MOC_LITERAL(4, 64, 18), // "signal_GetDAReport"
QT_MOC_LITERAL(5, 83, 18), // "const DA_REPORT_T*"
QT_MOC_LITERAL(6, 102, 11), // "p_da_report"
QT_MOC_LITERAL(7, 114, 11), // "std::string"
QT_MOC_LITERAL(8, 126, 11), // "friend_name"
QT_MOC_LITERAL(9, 138, 10), // "usb_status"
QT_MOC_LITERAL(10, 149, 21), // "signal_DownloadDAInit"
QT_MOC_LITERAL(11, 171, 7), // "usr_arg"
QT_MOC_LITERAL(12, 179, 25), // "signal_DownloadDAProgress"
QT_MOC_LITERAL(13, 205, 7), // "percent"
QT_MOC_LITERAL(14, 213, 10), // "send_bytes"
QT_MOC_LITERAL(15, 224, 11), // "total_bytes"
QT_MOC_LITERAL(16, 236, 25), // "signal_CheckUSBStatusInit"
QT_MOC_LITERAL(17, 262, 3), // "arg"
QT_MOC_LITERAL(18, 266, 11), // "const char*"
QT_MOC_LITERAL(19, 278, 25), // "signal_FormatProgressInit"
QT_MOC_LITERAL(20, 304, 16), // "HW_StorageType_E"
QT_MOC_LITERAL(21, 321, 12), // "storage_type"
QT_MOC_LITERAL(22, 334, 3), // "U64"
QT_MOC_LITERAL(23, 338, 10), // "begin_addr"
QT_MOC_LITERAL(24, 349, 6), // "length"
QT_MOC_LITERAL(25, 356, 29), // "signal_FormatProgressCallback"
QT_MOC_LITERAL(26, 386, 19), // "finished_percentage"
QT_MOC_LITERAL(27, 406, 26), // "signal_DownloadBLoaderInit"
QT_MOC_LITERAL(28, 433, 30), // "signal_DownloadBLoaderProgress"
QT_MOC_LITERAL(29, 464, 14), // "finished_bytes"
QT_MOC_LITERAL(30, 479, 21), // "signal_DADLChksumInit"
QT_MOC_LITERAL(31, 501, 10), // "image_name"
QT_MOC_LITERAL(32, 512, 25), // "signal_DADLChksumProgress"
QT_MOC_LITERAL(33, 538, 22), // "signal_CERTProcessInit"
QT_MOC_LITERAL(34, 561, 26), // "signal_CERTProcessProgress"
QT_MOC_LITERAL(35, 588, 24), // "signal_DownloadFlashInit"
QT_MOC_LITERAL(36, 613, 28), // "signal_DownloadFlashProgress"
QT_MOC_LITERAL(37, 642, 19), // "signal_ReadbackInit"
QT_MOC_LITERAL(38, 662, 7), // "storage"
QT_MOC_LITERAL(39, 670, 7), // "rb_addr"
QT_MOC_LITERAL(40, 678, 6), // "rb_len"
QT_MOC_LITERAL(41, 685, 4), // "file"
QT_MOC_LITERAL(42, 690, 23), // "signal_ReadbackProgress"
QT_MOC_LITERAL(43, 714, 23), // "signal_BromDownloadInit"
QT_MOC_LITERAL(44, 738, 27), // "signal_BromDownloadProgress"
QT_MOC_LITERAL(45, 766, 10), // "sent_bytes"
QT_MOC_LITERAL(46, 777, 25), // "signal_MemoryTestCallback"
QT_MOC_LITERAL(47, 803, 3), // "msg"
QT_MOC_LITERAL(48, 807, 5), // "color"
QT_MOC_LITERAL(49, 813, 25), // "signal_DeviceTestCallback"
QT_MOC_LITERAL(50, 839, 22), // "signal_WriteMemoryInit"
QT_MOC_LITERAL(51, 862, 26), // "signal_WriteMemoryProgress"
QT_MOC_LITERAL(52, 889, 21), // "signal_updateParaInit"
QT_MOC_LITERAL(53, 911, 17), // "signal_updatePara"
QT_MOC_LITERAL(54, 929, 22), // "signal_postProcessInit"
QT_MOC_LITERAL(55, 952, 18), // "signal_postProcess"
QT_MOC_LITERAL(56, 971, 22), // "signal_memChecksumInit"
QT_MOC_LITERAL(57, 994, 21), // "signal_memChecksumPro"
QT_MOC_LITERAL(58, 1016, 20), // "slot_UpdateTimeLabel"
QT_MOC_LITERAL(59, 1037, 22), // "slot_OperationFinished"
QT_MOC_LITERAL(60, 1060, 16), // "slot_OperationOK"
QT_MOC_LITERAL(61, 1077, 16), // "slot_GetDAReport"
QT_MOC_LITERAL(62, 1094, 19), // "const::std::string&"
QT_MOC_LITERAL(63, 1114, 19), // "slot_DownloadDAInit"
QT_MOC_LITERAL(64, 1134, 23), // "slot_DownloadDAProgress"
QT_MOC_LITERAL(65, 1158, 23), // "slot_CheckUSBStatusInit"
QT_MOC_LITERAL(66, 1182, 23), // "slot_FormatProgressInit"
QT_MOC_LITERAL(67, 1206, 27), // "slot_FormatProgressCallback"
QT_MOC_LITERAL(68, 1234, 24), // "slot_DownloadBLoaderInit"
QT_MOC_LITERAL(69, 1259, 28), // "slot_DownloadBLoaderProgress"
QT_MOC_LITERAL(70, 1288, 22), // "slot_DownloadFlashInit"
QT_MOC_LITERAL(71, 1311, 26), // "slot_DownloadFlashProgress"
QT_MOC_LITERAL(72, 1338, 20), // "slot_DADLChksum_Init"
QT_MOC_LITERAL(73, 1359, 24), // "slot_DADLChksum_Progress"
QT_MOC_LITERAL(74, 1384, 21), // "slot_CERTProcess_Init"
QT_MOC_LITERAL(75, 1406, 25), // "slot_CERTProcess_Progress"
QT_MOC_LITERAL(76, 1432, 17), // "slot_ReadbackInit"
QT_MOC_LITERAL(77, 1450, 21), // "slot_ReadbackProgress"
QT_MOC_LITERAL(78, 1472, 21), // "slot_BromDownloadInit"
QT_MOC_LITERAL(79, 1494, 25), // "slot_BromDownloadProgress"
QT_MOC_LITERAL(80, 1520, 20), // "slot_WriteMemoryInit"
QT_MOC_LITERAL(81, 1541, 24), // "slot_WriteMemoryProgress"
QT_MOC_LITERAL(82, 1566, 19), // "slot_updateParaInit"
QT_MOC_LITERAL(83, 1586, 15), // "slot_updatePara"
QT_MOC_LITERAL(84, 1602, 20), // "slot_postProcessInit"
QT_MOC_LITERAL(85, 1623, 16), // "slot_postProcess"
QT_MOC_LITERAL(86, 1640, 17), // "slot_MemChksumIni"
QT_MOC_LITERAL(87, 1658, 14) // "slot_MemChksum"

    },
    "MainWindowCallback\0signal_OperationFinished\0"
    "\0signal_OperationOK\0signal_GetDAReport\0"
    "const DA_REPORT_T*\0p_da_report\0"
    "std::string\0friend_name\0usb_status\0"
    "signal_DownloadDAInit\0usr_arg\0"
    "signal_DownloadDAProgress\0percent\0"
    "send_bytes\0total_bytes\0signal_CheckUSBStatusInit\0"
    "arg\0const char*\0signal_FormatProgressInit\0"
    "HW_StorageType_E\0storage_type\0U64\0"
    "begin_addr\0length\0signal_FormatProgressCallback\0"
    "finished_percentage\0signal_DownloadBLoaderInit\0"
    "signal_DownloadBLoaderProgress\0"
    "finished_bytes\0signal_DADLChksumInit\0"
    "image_name\0signal_DADLChksumProgress\0"
    "signal_CERTProcessInit\0"
    "signal_CERTProcessProgress\0"
    "signal_DownloadFlashInit\0"
    "signal_DownloadFlashProgress\0"
    "signal_ReadbackInit\0storage\0rb_addr\0"
    "rb_len\0file\0signal_ReadbackProgress\0"
    "signal_BromDownloadInit\0"
    "signal_BromDownloadProgress\0sent_bytes\0"
    "signal_MemoryTestCallback\0msg\0color\0"
    "signal_DeviceTestCallback\0"
    "signal_WriteMemoryInit\0"
    "signal_WriteMemoryProgress\0"
    "signal_updateParaInit\0signal_updatePara\0"
    "signal_postProcessInit\0signal_postProcess\0"
    "signal_memChecksumInit\0signal_memChecksumPro\0"
    "slot_UpdateTimeLabel\0slot_OperationFinished\0"
    "slot_OperationOK\0slot_GetDAReport\0"
    "const::std::string&\0slot_DownloadDAInit\0"
    "slot_DownloadDAProgress\0slot_CheckUSBStatusInit\0"
    "slot_FormatProgressInit\0"
    "slot_FormatProgressCallback\0"
    "slot_DownloadBLoaderInit\0"
    "slot_DownloadBLoaderProgress\0"
    "slot_DownloadFlashInit\0"
    "slot_DownloadFlashProgress\0"
    "slot_DADLChksum_Init\0slot_DADLChksum_Progress\0"
    "slot_CERTProcess_Init\0slot_CERTProcess_Progress\0"
    "slot_ReadbackInit\0slot_ReadbackProgress\0"
    "slot_BromDownloadInit\0slot_BromDownloadProgress\0"
    "slot_WriteMemoryInit\0slot_WriteMemoryProgress\0"
    "slot_updateParaInit\0slot_updatePara\0"
    "slot_postProcessInit\0slot_postProcess\0"
    "slot_MemChksumIni\0slot_MemChksum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowCallback[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      59,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      30,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  309,    2, 0x06 /* Public */,
       3,    0,  310,    2, 0x06 /* Public */,
       4,    3,  311,    2, 0x06 /* Public */,
      10,    1,  318,    2, 0x06 /* Public */,
      12,    4,  321,    2, 0x06 /* Public */,
      16,    2,  330,    2, 0x06 /* Public */,
      19,    4,  335,    2, 0x06 /* Public */,
      25,    2,  344,    2, 0x06 /* Public */,
      27,    1,  349,    2, 0x06 /* Public */,
      28,    4,  352,    2, 0x06 /* Public */,
      30,    2,  361,    2, 0x06 /* Public */,
      32,    4,  366,    2, 0x06 /* Public */,
      33,    1,  375,    2, 0x06 /* Public */,
      34,    1,  378,    2, 0x06 /* Public */,
      35,    1,  381,    2, 0x06 /* Public */,
      36,    4,  384,    2, 0x06 /* Public */,
      37,    5,  393,    2, 0x06 /* Public */,
      42,    4,  404,    2, 0x06 /* Public */,
      43,    1,  413,    2, 0x06 /* Public */,
      44,    4,  416,    2, 0x06 /* Public */,
      46,    2,  425,    2, 0x06 /* Public */,
      49,    2,  430,    2, 0x06 /* Public */,
      50,    0,  435,    2, 0x06 /* Public */,
      51,    4,  436,    2, 0x06 /* Public */,
      52,    1,  445,    2, 0x06 /* Public */,
      53,    2,  448,    2, 0x06 /* Public */,
      54,    1,  453,    2, 0x06 /* Public */,
      55,    2,  456,    2, 0x06 /* Public */,
      56,    2,  461,    2, 0x06 /* Public */,
      57,    4,  466,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      58,    0,  475,    2, 0x0a /* Public */,
      59,    0,  476,    2, 0x0a /* Public */,
      60,    0,  477,    2, 0x0a /* Public */,
      61,    3,  478,    2, 0x0a /* Public */,
      63,    1,  485,    2, 0x0a /* Public */,
      64,    4,  488,    2, 0x0a /* Public */,
      65,    2,  497,    2, 0x0a /* Public */,
      66,    4,  502,    2, 0x0a /* Public */,
      67,    2,  511,    2, 0x0a /* Public */,
      68,    1,  516,    2, 0x0a /* Public */,
      69,    4,  519,    2, 0x0a /* Public */,
      70,    1,  528,    2, 0x0a /* Public */,
      71,    4,  531,    2, 0x0a /* Public */,
      72,    2,  540,    2, 0x0a /* Public */,
      73,    4,  545,    2, 0x0a /* Public */,
      74,    1,  554,    2, 0x0a /* Public */,
      75,    1,  557,    2, 0x0a /* Public */,
      76,    5,  560,    2, 0x0a /* Public */,
      77,    4,  571,    2, 0x0a /* Public */,
      78,    1,  580,    2, 0x0a /* Public */,
      79,    4,  583,    2, 0x0a /* Public */,
      80,    0,  592,    2, 0x0a /* Public */,
      81,    4,  593,    2, 0x0a /* Public */,
      82,    1,  602,    2, 0x0a /* Public */,
      83,    2,  605,    2, 0x0a /* Public */,
      84,    1,  610,    2, 0x0a /* Public */,
      85,    2,  613,    2, 0x0a /* Public */,
      86,    2,  618,    2, 0x0a /* Public */,
      87,    4,  623,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 7,    6,    8,    9,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::UInt, QMetaType::UInt, QMetaType::VoidStar,   13,   14,   15,   11,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 18,   17,    9,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   21,   23,   24,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::VoidStar,   26,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::UInt, QMetaType::UInt, QMetaType::VoidStar,   26,   29,   15,   11,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 18,   11,   31,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   13,   14,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   29,   15,   11,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 22, 0x80000000 | 18, QMetaType::VoidStar,   38,   39,   40,   41,   11,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   29,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   45,   15,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,   47,   48,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,   47,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   13,   45,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::VoidStar,   13,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::VoidStar,   13,   11,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QString,   11,   31,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   29,   15,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 62,    6,    8,    9,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::UInt, QMetaType::UInt, QMetaType::VoidStar,   13,   14,   15,   11,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 18,   17,    2,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   21,   23,   24,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::VoidStar,   26,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::UInt, QMetaType::UInt, QMetaType::VoidStar,   26,   29,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   29,   15,   11,
    QMetaType::Void, QMetaType::VoidStar, 0x80000000 | 18,   11,    2,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   13,   14,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::VoidStar,    2,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 22, 0x80000000 | 22, 0x80000000 | 18, QMetaType::VoidStar,   38,   39,   40,   41,   11,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   29,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   45,   15,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   13,   45,   15,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::VoidStar,   13,   11,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Void, QMetaType::UChar, QMetaType::VoidStar,   13,   11,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QString,   11,   31,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 22, 0x80000000 | 22, QMetaType::VoidStar,   26,   29,   15,   11,

       0        // eod
};

void MainWindowCallback::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindowCallback *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_OperationFinished(); break;
        case 1: _t->signal_OperationOK(); break;
        case 2: _t->signal_GetDAReport((*reinterpret_cast< const DA_REPORT_T*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 3: _t->signal_DownloadDAInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: _t->signal_DownloadDAProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 5: _t->signal_CheckUSBStatusInit((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 6: _t->signal_FormatProgressInit((*reinterpret_cast< HW_StorageType_E(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 7: _t->signal_FormatProgressCallback((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 8: _t->signal_DownloadBLoaderInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 9: _t->signal_DownloadBLoaderProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 10: _t->signal_DADLChksumInit((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 11: _t->signal_DADLChksumProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 12: _t->signal_CERTProcessInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 13: _t->signal_CERTProcessProgress((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 14: _t->signal_DownloadFlashInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 15: _t->signal_DownloadFlashProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 16: _t->signal_ReadbackInit((*reinterpret_cast< HW_StorageType_E(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])),(*reinterpret_cast< void*(*)>(_a[5]))); break;
        case 17: _t->signal_ReadbackProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 18: _t->signal_BromDownloadInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 19: _t->signal_BromDownloadProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 20: _t->signal_MemoryTestCallback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 21: _t->signal_DeviceTestCallback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 22: _t->signal_WriteMemoryInit(); break;
        case 23: _t->signal_WriteMemoryProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 24: _t->signal_updateParaInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 25: _t->signal_updatePara((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 26: _t->signal_postProcessInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 27: _t->signal_postProcess((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 28: _t->signal_memChecksumInit((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->signal_memChecksumPro((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 30: _t->slot_UpdateTimeLabel(); break;
        case 31: _t->slot_OperationFinished(); break;
        case 32: _t->slot_OperationOK(); break;
        case 33: _t->slot_GetDAReport((*reinterpret_cast< const DA_REPORT_T*(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< const::std::string(*)>(_a[3]))); break;
        case 34: _t->slot_DownloadDAInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 35: _t->slot_DownloadDAProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 36: _t->slot_CheckUSBStatusInit((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 37: _t->slot_FormatProgressInit((*reinterpret_cast< HW_StorageType_E(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 38: _t->slot_FormatProgressCallback((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 39: _t->slot_DownloadBLoaderInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 40: _t->slot_DownloadBLoaderProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 41: _t->slot_DownloadFlashInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 42: _t->slot_DownloadFlashProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 43: _t->slot_DADLChksum_Init((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 44: _t->slot_DADLChksum_Progress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 45: _t->slot_CERTProcess_Init((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 46: _t->slot_CERTProcess_Progress((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 47: _t->slot_ReadbackInit((*reinterpret_cast< HW_StorageType_E(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])),(*reinterpret_cast< void*(*)>(_a[5]))); break;
        case 48: _t->slot_ReadbackProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 49: _t->slot_BromDownloadInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 50: _t->slot_BromDownloadProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 51: _t->slot_WriteMemoryInit(); break;
        case 52: _t->slot_WriteMemoryProgress((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 53: _t->slot_updateParaInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 54: _t->slot_updatePara((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 55: _t->slot_postProcessInit((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 56: _t->slot_postProcess((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 57: _t->slot_MemChksumIni((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 58: _t->slot_MemChksum((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< U64(*)>(_a[2])),(*reinterpret_cast< U64(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindowCallback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_OperationFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_OperationOK)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(const DA_REPORT_T * , const std::string & , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_GetDAReport)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DownloadDAInit)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , unsigned int , unsigned int , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DownloadDAProgress)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * , const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_CheckUSBStatusInit)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(HW_StorageType_E , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_FormatProgressInit)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_FormatProgressCallback)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DownloadBLoaderInit)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , unsigned int , unsigned int , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DownloadBLoaderProgress)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * , const char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DADLChksumInit)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DADLChksumProgress)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_CERTProcessInit)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_CERTProcessProgress)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DownloadFlashInit)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DownloadFlashProgress)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(HW_StorageType_E , U64 , U64 , const char * , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_ReadbackInit)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_ReadbackProgress)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_BromDownloadInit)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_BromDownloadProgress)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(const QString & , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_MemoryTestCallback)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(const QString & , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_DeviceTestCallback)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_WriteMemoryInit)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_WriteMemoryProgress)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_updateParaInit)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_updatePara)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_postProcessInit)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_postProcess)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(void * , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_memChecksumInit)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MainWindowCallback::*)(unsigned char , U64 , U64 , void * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindowCallback::signal_memChecksumPro)) {
                *result = 29;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindowCallback::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MainWindowCallback.data,
    qt_meta_data_MainWindowCallback,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindowCallback::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowCallback::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowCallback.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MainWindowCallback::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 59)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 59;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 59)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 59;
    }
    return _id;
}

// SIGNAL 0
void MainWindowCallback::signal_OperationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindowCallback::signal_OperationOK()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindowCallback::signal_GetDAReport(const DA_REPORT_T * _t1, const std::string & _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindowCallback::signal_DownloadDAInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindowCallback::signal_DownloadDAProgress(unsigned char _t1, unsigned int _t2, unsigned int _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindowCallback::signal_CheckUSBStatusInit(void * _t1, const char * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindowCallback::signal_FormatProgressInit(HW_StorageType_E _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindowCallback::signal_FormatProgressCallback(unsigned char _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindowCallback::signal_DownloadBLoaderInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindowCallback::signal_DownloadBLoaderProgress(unsigned char _t1, unsigned int _t2, unsigned int _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindowCallback::signal_DADLChksumInit(void * _t1, const char * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindowCallback::signal_DADLChksumProgress(unsigned char _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindowCallback::signal_CERTProcessInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindowCallback::signal_CERTProcessProgress(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindowCallback::signal_DownloadFlashInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindowCallback::signal_DownloadFlashProgress(unsigned char _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindowCallback::signal_ReadbackInit(HW_StorageType_E _t1, U64 _t2, U64 _t3, const char * _t4, void * _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindowCallback::signal_ReadbackProgress(unsigned char _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindowCallback::signal_BromDownloadInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindowCallback::signal_BromDownloadProgress(unsigned char _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MainWindowCallback::signal_MemoryTestCallback(const QString & _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindowCallback::signal_DeviceTestCallback(const QString & _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MainWindowCallback::signal_WriteMemoryInit()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MainWindowCallback::signal_WriteMemoryProgress(unsigned char _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MainWindowCallback::signal_updateParaInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MainWindowCallback::signal_updatePara(unsigned char _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MainWindowCallback::signal_postProcessInit(void * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MainWindowCallback::signal_postProcess(unsigned char _t1, void * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MainWindowCallback::signal_memChecksumInit(void * _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MainWindowCallback::signal_memChecksumPro(unsigned char _t1, U64 _t2, U64 _t3, void * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
