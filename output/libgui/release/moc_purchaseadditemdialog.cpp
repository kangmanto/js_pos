/****************************************************************************
** Meta object code from reading C++ file 'purchaseadditemdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/purchase/purchaseadditemdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchaseadditemdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__PurchaseAddItemDialog_t {
    QByteArrayData data[15];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__PurchaseAddItemDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__PurchaseAddItemDialog_t qt_meta_stringdata_LibGUI__PurchaseAddItemDialog = {
    {
QT_MOC_LITERAL(0, 0, 29), // "LibGUI::PurchaseAddItemDialog"
QT_MOC_LITERAL(1, 30, 10), // "addSuccess"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "updateSuccess"
QT_MOC_LITERAL(4, 56, 2), // "id"
QT_MOC_LITERAL(5, 59, 11), // "barcodeDone"
QT_MOC_LITERAL(6, 71, 16), // "saveAgainClicked"
QT_MOC_LITERAL(7, 88, 11), // "saveClicked"
QT_MOC_LITERAL(8, 100, 16), // "unitPriceChanged"
QT_MOC_LITERAL(9, 117, 17), // "totalPriceChanged"
QT_MOC_LITERAL(10, 135, 17), // "calculateDiscount"
QT_MOC_LITERAL(11, 153, 27), // "calculateBuyPriceSuggestion"
QT_MOC_LITERAL(12, 181, 17), // "addNewItemClicked"
QT_MOC_LITERAL(13, 199, 15), // "calculateMargin"
QT_MOC_LITERAL(14, 215, 14) // "openSearchItem"

    },
    "LibGUI::PurchaseAddItemDialog\0addSuccess\0"
    "\0updateSuccess\0id\0barcodeDone\0"
    "saveAgainClicked\0saveClicked\0"
    "unitPriceChanged\0totalPriceChanged\0"
    "calculateDiscount\0calculateBuyPriceSuggestion\0"
    "addNewItemClicked\0calculateMargin\0"
    "openSearchItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__PurchaseAddItemDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,

 // slots: parameters
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

void LibGUI::PurchaseAddItemDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PurchaseAddItemDialog *_t = static_cast<PurchaseAddItemDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addSuccess(); break;
        case 1: _t->updateSuccess((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->barcodeDone(); break;
        case 3: _t->saveAgainClicked(); break;
        case 4: _t->saveClicked(); break;
        case 5: _t->unitPriceChanged(); break;
        case 6: _t->totalPriceChanged(); break;
        case 7: _t->calculateDiscount(); break;
        case 8: _t->calculateBuyPriceSuggestion(); break;
        case 9: _t->addNewItemClicked(); break;
        case 10: _t->calculateMargin(); break;
        case 11: _t->openSearchItem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PurchaseAddItemDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PurchaseAddItemDialog::addSuccess)) {
                *result = 0;
            }
        }
        {
            typedef void (PurchaseAddItemDialog::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PurchaseAddItemDialog::updateSuccess)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject LibGUI::PurchaseAddItemDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__PurchaseAddItemDialog.data,
      qt_meta_data_LibGUI__PurchaseAddItemDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::PurchaseAddItemDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::PurchaseAddItemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__PurchaseAddItemDialog.stringdata0))
        return static_cast<void*>(const_cast< PurchaseAddItemDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< PurchaseAddItemDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::PurchaseAddItemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::PurchaseAddItemDialog::addSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LibGUI::PurchaseAddItemDialog::updateSuccess(QVariant _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
