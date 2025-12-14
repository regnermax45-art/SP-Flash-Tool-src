/****************************************************************************
** Meta object code from reading C++ file 'ReadBackAddressDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "UI/src/ReadBackAddressDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReadBackAddressDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReadBackAddressDialog_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadBackAddressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadBackAddressDialog_t qt_meta_stringdata_ReadBackAddressDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ReadBackAddressDialog"
QT_MOC_LITERAL(1, 22, 11), // "onToggleHex"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "onToggleDec"
QT_MOC_LITERAL(4, 47, 36), // "on_radioButton_readPageSpare_..."
QT_MOC_LITERAL(5, 84, 21), // "slot_platform_changed"
QT_MOC_LITERAL(6, 106, 17), // "HW_StorageType_E&"
QT_MOC_LITERAL(7, 124, 7) // "storage"

    },
    "ReadBackAddressDialog\0onToggleHex\0\0"
    "onToggleDec\0on_radioButton_readPageSpare_clicked\0"
    "slot_platform_changed\0HW_StorageType_E&\0"
    "storage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadBackAddressDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    1,   37,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ReadBackAddressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReadBackAddressDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onToggleHex((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onToggleDec((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_radioButton_readPageSpare_clicked(); break;
        case 3: _t->slot_platform_changed((*reinterpret_cast< HW_StorageType_E(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReadBackAddressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ReadBackAddressDialog.data,
    qt_meta_data_ReadBackAddressDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReadBackAddressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadBackAddressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReadBackAddressDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReadBackAddressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
