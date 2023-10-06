/****************************************************************************
** Meta object code from reading C++ file 'customerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/customer/customerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__CustomerWidget_t {
    QByteArrayData data[16];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__CustomerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__CustomerWidget_t qt_meta_stringdata_LibGUI__CustomerWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LibGUI::CustomerWidget"
QT_MOC_LITERAL(1, 23, 25), // "requestOpenCustomerCredit"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 2), // "id"
QT_MOC_LITERAL(4, 53, 6), // "number"
QT_MOC_LITERAL(5, 60, 25), // "requestOpenCustomerReward"
QT_MOC_LITERAL(6, 86, 10), // "addClicked"
QT_MOC_LITERAL(7, 97, 13), // "updateClicked"
QT_MOC_LITERAL(8, 111, 5), // "index"
QT_MOC_LITERAL(9, 117, 13), // "deleteClicked"
QT_MOC_LITERAL(10, 131, 15), // "QModelIndexList"
QT_MOC_LITERAL(11, 147, 13), // "customerAdded"
QT_MOC_LITERAL(12, 161, 15), // "customerUpdated"
QT_MOC_LITERAL(13, 177, 13), // "creditClicked"
QT_MOC_LITERAL(14, 191, 13), // "rewardClicked"
QT_MOC_LITERAL(15, 205, 14) // "refreshSummary"

    },
    "LibGUI::CustomerWidget\0requestOpenCustomerCredit\0"
    "\0id\0number\0requestOpenCustomerReward\0"
    "addClicked\0updateClicked\0index\0"
    "deleteClicked\0QModelIndexList\0"
    "customerAdded\0customerUpdated\0"
    "creditClicked\0rewardClicked\0refreshSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__CustomerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    1,   78,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    1,   82,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,
      14,    0,   86,    2, 0x08 /* Private */,
      15,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::CustomerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomerWidget *_t = static_cast<CustomerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestOpenCustomerCredit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestOpenCustomerReward((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->addClicked(); break;
        case 3: _t->updateClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->deleteClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 5: _t->customerAdded(); break;
        case 6: _t->customerUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->creditClicked(); break;
        case 8: _t->rewardClicked(); break;
        case 9: _t->refreshSummary(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            typedef void (CustomerWidget::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomerWidget::requestOpenCustomerCredit)) {
                *result = 0;
            }
        }
        {
            typedef void (CustomerWidget::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomerWidget::requestOpenCustomerReward)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject LibGUI::CustomerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__CustomerWidget.data,
      qt_meta_data_LibGUI__CustomerWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::CustomerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::CustomerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__CustomerWidget.stringdata0))
        return static_cast<void*>(const_cast< CustomerWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< CustomerWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::CustomerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LibGUI::CustomerWidget::requestOpenCustomerCredit(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibGUI::CustomerWidget::requestOpenCustomerReward(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
