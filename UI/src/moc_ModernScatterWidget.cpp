/****************************************************************************
** Meta object code from reading C++ file 'ModernScatterWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "ModernScatterWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModernScatterWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModernScatterWidget_t {
    QByteArrayData data[26];
    char stringdata0[509];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModernScatterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModernScatterWidget_t qt_meta_stringdata_ModernScatterWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ModernScatterWidget"
QT_MOC_LITERAL(1, 20, 19), // "scatterFileSelected"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 35), // "ScatterFileManager::ScatterFi..."
QT_MOC_LITERAL(4, 77, 4), // "type"
QT_MOC_LITERAL(5, 82, 4), // "path"
QT_MOC_LITERAL(6, 87, 20), // "operationModeChanged"
QT_MOC_LITERAL(7, 108, 33), // "ScatterFileManager::Operation..."
QT_MOC_LITERAL(8, 142, 4), // "mode"
QT_MOC_LITERAL(9, 147, 20), // "loadScatterRequested"
QT_MOC_LITERAL(10, 168, 23), // "loadAllScatterRequested"
QT_MOC_LITERAL(11, 192, 19), // "onScatterFileLoaded"
QT_MOC_LITERAL(12, 212, 23), // "onScatterFileLoadFailed"
QT_MOC_LITERAL(13, 236, 5), // "error"
QT_MOC_LITERAL(14, 242, 23), // "onAllScatterFilesLoaded"
QT_MOC_LITERAL(15, 266, 22), // "onOperationModeChanged"
QT_MOC_LITERAL(16, 289, 18), // "onModeRadioToggled"
QT_MOC_LITERAL(17, 308, 22), // "onPrimaryBrowseClicked"
QT_MOC_LITERAL(18, 331, 24), // "onSecondaryBrowseClicked"
QT_MOC_LITERAL(19, 356, 21), // "onPrimaryComboChanged"
QT_MOC_LITERAL(20, 378, 23), // "onSecondaryComboChanged"
QT_MOC_LITERAL(21, 402, 20), // "onLoadPrimaryClicked"
QT_MOC_LITERAL(22, 423, 22), // "onLoadSecondaryClicked"
QT_MOC_LITERAL(23, 446, 16), // "onLoadAllClicked"
QT_MOC_LITERAL(24, 463, 21), // "onClearPrimaryClicked"
QT_MOC_LITERAL(25, 485, 23) // "onClearSecondaryClicked"

    },
    "ModernScatterWidget\0scatterFileSelected\0"
    "\0ScatterFileManager::ScatterFileType\0"
    "type\0path\0operationModeChanged\0"
    "ScatterFileManager::OperationMode\0"
    "mode\0loadScatterRequested\0"
    "loadAllScatterRequested\0onScatterFileLoaded\0"
    "onScatterFileLoadFailed\0error\0"
    "onAllScatterFilesLoaded\0onOperationModeChanged\0"
    "onModeRadioToggled\0onPrimaryBrowseClicked\0"
    "onSecondaryBrowseClicked\0onPrimaryComboChanged\0"
    "onSecondaryComboChanged\0onLoadPrimaryClicked\0"
    "onLoadSecondaryClicked\0onLoadAllClicked\0"
    "onClearPrimaryClicked\0onClearSecondaryClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModernScatterWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x06 /* Public */,
       6,    1,  109,    2, 0x06 /* Public */,
       9,    1,  112,    2, 0x06 /* Public */,
      10,    0,  115,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,  116,    2, 0x0a /* Public */,
      12,    3,  121,    2, 0x0a /* Public */,
      14,    0,  128,    2, 0x0a /* Public */,
      15,    1,  129,    2, 0x0a /* Public */,
      16,    0,  132,    2, 0x08 /* Private */,
      17,    0,  133,    2, 0x08 /* Private */,
      18,    0,  134,    2, 0x08 /* Private */,
      19,    0,  135,    2, 0x08 /* Private */,
      20,    0,  136,    2, 0x08 /* Private */,
      21,    0,  137,    2, 0x08 /* Private */,
      22,    0,  138,    2, 0x08 /* Private */,
      23,    0,  139,    2, 0x08 /* Private */,
      24,    0,  140,    2, 0x08 /* Private */,
      25,    0,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
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

void ModernScatterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModernScatterWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scatterFileSelected((*reinterpret_cast< ScatterFileManager::ScatterFileType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->operationModeChanged((*reinterpret_cast< ScatterFileManager::OperationMode(*)>(_a[1]))); break;
        case 2: _t->loadScatterRequested((*reinterpret_cast< ScatterFileManager::ScatterFileType(*)>(_a[1]))); break;
        case 3: _t->loadAllScatterRequested(); break;
        case 4: _t->onScatterFileLoaded((*reinterpret_cast< ScatterFileManager::ScatterFileType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->onScatterFileLoadFailed((*reinterpret_cast< ScatterFileManager::ScatterFileType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->onAllScatterFilesLoaded(); break;
        case 7: _t->onOperationModeChanged((*reinterpret_cast< ScatterFileManager::OperationMode(*)>(_a[1]))); break;
        case 8: _t->onModeRadioToggled(); break;
        case 9: _t->onPrimaryBrowseClicked(); break;
        case 10: _t->onSecondaryBrowseClicked(); break;
        case 11: _t->onPrimaryComboChanged(); break;
        case 12: _t->onSecondaryComboChanged(); break;
        case 13: _t->onLoadPrimaryClicked(); break;
        case 14: _t->onLoadSecondaryClicked(); break;
        case 15: _t->onLoadAllClicked(); break;
        case 16: _t->onClearPrimaryClicked(); break;
        case 17: _t->onClearSecondaryClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModernScatterWidget::*)(ScatterFileManager::ScatterFileType , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernScatterWidget::scatterFileSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModernScatterWidget::*)(ScatterFileManager::OperationMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernScatterWidget::operationModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModernScatterWidget::*)(ScatterFileManager::ScatterFileType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernScatterWidget::loadScatterRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ModernScatterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernScatterWidget::loadAllScatterRequested)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModernScatterWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ModernScatterWidget.data,
    qt_meta_data_ModernScatterWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModernScatterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModernScatterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModernScatterWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ModernScatterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ModernScatterWidget::scatterFileSelected(ScatterFileManager::ScatterFileType _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModernScatterWidget::operationModeChanged(ScatterFileManager::OperationMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModernScatterWidget::loadScatterRequested(ScatterFileManager::ScatterFileType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ModernScatterWidget::loadAllScatterRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
