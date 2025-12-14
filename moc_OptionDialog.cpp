/****************************************************************************
** Meta object code from reading C++ file 'OptionDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/OptionDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CleanThread_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CleanThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CleanThread_t qt_meta_stringdata_CleanThread = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CleanThread"
QT_MOC_LITERAL(1, 12, 20), // "signal_willCleanDone"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "CleanThread\0signal_willCleanDone\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CleanThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void CleanThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CleanThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_willCleanDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CleanThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CleanThread::signal_willCleanDone)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CleanThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CleanThread.data,
    qt_meta_data_CleanThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CleanThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CleanThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CleanThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int CleanThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CleanThread::signal_willCleanDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_OptionDialog_t {
    QByteArrayData data[31];
    char stringdata0[649];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionDialog_t qt_meta_stringdata_OptionDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OptionDialog"
QT_MOC_LITERAL(1, 13, 22), // "signal_enable_DAChksum"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "Chksum_type"
QT_MOC_LITERAL(4, 49, 22), // "signal_language_change"
QT_MOC_LITERAL(5, 72, 16), // "onToggleUSB_UART"
QT_MOC_LITERAL(6, 89, 7), // "toggled"
QT_MOC_LITERAL(7, 97, 32), // "on_treeWidget_currentItemChanged"
QT_MOC_LITERAL(8, 130, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 147, 7), // "current"
QT_MOC_LITERAL(10, 155, 8), // "previous"
QT_MOC_LITERAL(11, 164, 30), // "on_comboBox_Language_activated"
QT_MOC_LITERAL(12, 195, 5), // "index"
QT_MOC_LITERAL(13, 201, 29), // "on_pushButton_browser_clicked"
QT_MOC_LITERAL(14, 231, 36), // "on_comboBoxTheme_currentIndex..."
QT_MOC_LITERAL(15, 268, 31), // "on_checkBox_ShowWelcome_clicked"
QT_MOC_LITERAL(16, 300, 34), // "on_checkBox_physicalFormat_cl..."
QT_MOC_LITERAL(17, 335, 33), // "on_tableWidget_currentCellCha..."
QT_MOC_LITERAL(18, 369, 10), // "currentRow"
QT_MOC_LITERAL(19, 380, 13), // "currentColumn"
QT_MOC_LITERAL(20, 394, 11), // "previousRow"
QT_MOC_LITERAL(21, 406, 14), // "previousColumn"
QT_MOC_LITERAL(22, 421, 34), // "on_checkBox_RestoreStartup_cl..."
QT_MOC_LITERAL(23, 456, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(24, 476, 33), // "on_checkBox_enableTracing_cli..."
QT_MOC_LITERAL(25, 510, 29), // "on_checkBox_usbchksum_toggled"
QT_MOC_LITERAL(26, 540, 7), // "checked"
QT_MOC_LITERAL(27, 548, 30), // "on_checkBox_emmcchksum_toggled"
QT_MOC_LITERAL(28, 579, 25), // "slot_SetUARTBaudrateIndex"
QT_MOC_LITERAL(29, 605, 18), // "slot_willCleanDone"
QT_MOC_LITERAL(30, 624, 24) // "on_checkBox_rpmb_clicked"

    },
    "OptionDialog\0signal_enable_DAChksum\0"
    "\0Chksum_type\0signal_language_change\0"
    "onToggleUSB_UART\0toggled\0"
    "on_treeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "on_comboBox_Language_activated\0index\0"
    "on_pushButton_browser_clicked\0"
    "on_comboBoxTheme_currentIndexChanged\0"
    "on_checkBox_ShowWelcome_clicked\0"
    "on_checkBox_physicalFormat_clicked\0"
    "on_tableWidget_currentCellChanged\0"
    "currentRow\0currentColumn\0previousRow\0"
    "previousColumn\0on_checkBox_RestoreStartup_clicked\0"
    "on_checkBox_clicked\0"
    "on_checkBox_enableTracing_clicked\0"
    "on_checkBox_usbchksum_toggled\0checked\0"
    "on_checkBox_emmcchksum_toggled\0"
    "slot_SetUARTBaudrateIndex\0slot_willCleanDone\0"
    "on_checkBox_rpmb_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    0,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  108,    2, 0x08 /* Private */,
       7,    2,  111,    2, 0x08 /* Private */,
      11,    1,  116,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    1,  120,    2, 0x08 /* Private */,
      15,    0,  123,    2, 0x08 /* Private */,
      16,    0,  124,    2, 0x08 /* Private */,
      17,    4,  125,    2, 0x08 /* Private */,
      22,    0,  134,    2, 0x08 /* Private */,
      23,    0,  135,    2, 0x08 /* Private */,
      24,    0,  136,    2, 0x08 /* Private */,
      25,    1,  137,    2, 0x08 /* Private */,
      27,    1,  140,    2, 0x08 /* Private */,
      28,    1,  143,    2, 0x08 /* Private */,
      29,    0,  146,    2, 0x08 /* Private */,
      30,    0,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   18,   19,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OptionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OptionDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_enable_DAChksum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signal_language_change(); break;
        case 2: _t->onToggleUSB_UART((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 4: _t->on_comboBox_Language_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_browser_clicked(); break;
        case 6: _t->on_comboBoxTheme_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_ShowWelcome_clicked(); break;
        case 8: _t->on_checkBox_physicalFormat_clicked(); break;
        case 9: _t->on_tableWidget_currentCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 10: _t->on_checkBox_RestoreStartup_clicked(); break;
        case 11: _t->on_checkBox_clicked(); break;
        case 12: _t->on_checkBox_enableTracing_clicked(); break;
        case 13: _t->on_checkBox_usbchksum_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_checkBox_emmcchksum_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->slot_SetUARTBaudrateIndex((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: _t->slot_willCleanDone(); break;
        case 17: _t->on_checkBox_rpmb_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OptionDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptionDialog::signal_enable_DAChksum)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OptionDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OptionDialog::signal_language_change)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OptionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OptionDialog.data,
    qt_meta_data_OptionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OptionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OptionDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "APCore::IPlatformOb"))
        return static_cast< APCore::IPlatformOb*>(this);
    return QDialog::qt_metacast(_clname);
}

int OptionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void OptionDialog::signal_enable_DAChksum(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionDialog::signal_language_change()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
