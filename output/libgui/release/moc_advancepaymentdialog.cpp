/****************************************************************************
** Meta object code from reading C++ file 'advancepaymentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/cashier/advancepaymentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advancepaymentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__AdvancePaymentDialog_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__AdvancePaymentDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__AdvancePaymentDialog_t qt_meta_stringdata_LibGUI__AdvancePaymentDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "LibGUI::AdvancePaymentDialog"
QT_MOC_LITERAL(1, 29, 12), // "payRequested"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "type"
QT_MOC_LITERAL(4, 48, 5), // "value"
QT_MOC_LITERAL(5, 54, 4), // "flag"
QT_MOC_LITERAL(6, 59, 19), // "paymentValueChanged"
QT_MOC_LITERAL(7, 79, 10) // "payClicked"

    },
    "LibGUI::AdvancePaymentDialog\0payRequested\0"
    "\0type\0value\0flag\0paymentValueChanged\0"
    "payClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__AdvancePaymentDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   36,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Int,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void LibGUI::AdvancePaymentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdvancePaymentDialog *_t = static_cast<AdvancePaymentDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->payRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->paymentValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->payClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdvancePaymentDialog::*_t)(int , double , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdvancePaymentDialog::payRequested)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibGUI::AdvancePaymentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__AdvancePaymentDialog.data,
      qt_meta_data_LibGUI__AdvancePaymentDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::AdvancePaymentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::AdvancePaymentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__AdvancePaymentDialog.stringdata0))
        return static_cast<void*>(const_cast< AdvancePaymentDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< AdvancePaymentDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::AdvancePaymentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::AdvancePaymentDialog::payRequested(int _t1, double _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
