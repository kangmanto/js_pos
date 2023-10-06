/****************************************************************************
** Meta object code from reading C++ file 'userpermissiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/user/userpermissiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userpermissiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserPermissionDialog_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserPermissionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserPermissionDialog_t qt_meta_stringdata_UserPermissionDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "UserPermissionDialog"
QT_MOC_LITERAL(1, 21, 8), // "saveData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "data"
QT_MOC_LITERAL(4, 36, 2), // "id"
QT_MOC_LITERAL(5, 39, 26), // "listAvailableDoubleClicked"
QT_MOC_LITERAL(6, 66, 5), // "index"
QT_MOC_LITERAL(7, 72, 25), // "listSelectedDoubleClicked"
QT_MOC_LITERAL(8, 98, 11) // "saveClicked"

    },
    "UserPermissionDialog\0saveData\0\0data\0"
    "id\0listAvailableDoubleClicked\0index\0"
    "listSelectedDoubleClicked\0saveClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserPermissionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x08 /* Private */,
       7,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,

       0        // eod
};

void UserPermissionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserPermissionDialog *_t = static_cast<UserPermissionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveData((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->listAvailableDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->listSelectedDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->saveClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserPermissionDialog::*_t)(const QVariantMap & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserPermissionDialog::saveData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UserPermissionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserPermissionDialog.data,
      qt_meta_data_UserPermissionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserPermissionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserPermissionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserPermissionDialog.stringdata0))
        return static_cast<void*>(const_cast< UserPermissionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserPermissionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void UserPermissionDialog::saveData(const QVariantMap & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
