/****************************************************************************
** Meta object code from reading C++ file 'purchasewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/purchase/purchasewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchasewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__PurchaseWidget_t {
    QByteArrayData data[12];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__PurchaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__PurchaseWidget_t qt_meta_stringdata_LibGUI__PurchaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LibGUI::PurchaseWidget"
QT_MOC_LITERAL(1, 23, 25), // "requestOpenPurchaseWidget"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 4), // "data"
QT_MOC_LITERAL(4, 55, 10), // "addClicked"
QT_MOC_LITERAL(5, 66, 13), // "updateClicked"
QT_MOC_LITERAL(6, 80, 5), // "index"
QT_MOC_LITERAL(7, 86, 13), // "deleteClicked"
QT_MOC_LITERAL(8, 100, 15), // "QModelIndexList"
QT_MOC_LITERAL(9, 116, 18), // "tableDoubleClicked"
QT_MOC_LITERAL(10, 135, 14), // "paymentClicked"
QT_MOC_LITERAL(11, 150, 10) // "getSummary"

    },
    "LibGUI::PurchaseWidget\0requestOpenPurchaseWidget\0"
    "\0data\0addClicked\0updateClicked\0index\0"
    "deleteClicked\0QModelIndexList\0"
    "tableDoubleClicked\0paymentClicked\0"
    "getSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__PurchaseWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    1,   59,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantMap,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::PurchaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PurchaseWidget *_t = static_cast<PurchaseWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestOpenPurchaseWidget((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 1: _t->addClicked(); break;
        case 2: _t->updateClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 4: _t->tableDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->paymentClicked(); break;
        case 6: _t->getSummary(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PurchaseWidget::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PurchaseWidget::requestOpenPurchaseWidget)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LibGUI::PurchaseWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__PurchaseWidget.data,
      qt_meta_data_LibGUI__PurchaseWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::PurchaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::PurchaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__PurchaseWidget.stringdata0))
        return static_cast<void*>(const_cast< PurchaseWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< PurchaseWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::PurchaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::PurchaseWidget::requestOpenPurchaseWidget(const QVariantMap & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
