/****************************************************************************
** Meta object code from reading C++ file 'purchaseadddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/purchase/purchaseadddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchaseadddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__PurchaseAddDialog_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__PurchaseAddDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__PurchaseAddDialog_t qt_meta_stringdata_LibGUI__PurchaseAddDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LibGUI::PurchaseAddDialog"
QT_MOC_LITERAL(1, 26, 10), // "successAdd"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "successUpdate"
QT_MOC_LITERAL(4, 52, 2), // "id"
QT_MOC_LITERAL(5, 55, 11), // "saveClicked"
QT_MOC_LITERAL(6, 67, 11), // "typeChanged"
QT_MOC_LITERAL(7, 79, 14) // "calculateTotal"

    },
    "LibGUI::PurchaseAddDialog\0successAdd\0"
    "\0successUpdate\0id\0saveClicked\0typeChanged\0"
    "calculateTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__PurchaseAddDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::PurchaseAddDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PurchaseAddDialog *_t = static_cast<PurchaseAddDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->successAdd(); break;
        case 1: _t->successUpdate((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->saveClicked(); break;
        case 3: _t->typeChanged(); break;
        case 4: _t->calculateTotal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PurchaseAddDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PurchaseAddDialog::successAdd)) {
                *result = 0;
            }
        }
        {
            typedef void (PurchaseAddDialog::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PurchaseAddDialog::successUpdate)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject LibGUI::PurchaseAddDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__PurchaseAddDialog.data,
      qt_meta_data_LibGUI__PurchaseAddDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::PurchaseAddDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::PurchaseAddDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__PurchaseAddDialog.stringdata0))
        return static_cast<void*>(const_cast< PurchaseAddDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< PurchaseAddDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::PurchaseAddDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::PurchaseAddDialog::successAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LibGUI::PurchaseAddDialog::successUpdate(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
