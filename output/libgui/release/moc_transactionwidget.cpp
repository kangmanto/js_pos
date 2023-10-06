/****************************************************************************
** Meta object code from reading C++ file 'transactionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/transaction/transactionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__TransactionWidget_t {
    QByteArrayData data[9];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__TransactionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__TransactionWidget_t qt_meta_stringdata_LibGUI__TransactionWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LibGUI::TransactionWidget"
QT_MOC_LITERAL(1, 26, 14), // "refreshSummary"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "addClicked"
QT_MOC_LITERAL(4, 53, 11), // "editClicked"
QT_MOC_LITERAL(5, 65, 5), // "index"
QT_MOC_LITERAL(6, 71, 13), // "deleteClicked"
QT_MOC_LITERAL(7, 85, 15), // "QModelIndexList"
QT_MOC_LITERAL(8, 101, 13) // "exportClicked"

    },
    "LibGUI::TransactionWidget\0refreshSummary\0"
    "\0addClicked\0editClicked\0index\0"
    "deleteClicked\0QModelIndexList\0"
    "exportClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__TransactionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,

       0        // eod
};

void LibGUI::TransactionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionWidget *_t = static_cast<TransactionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshSummary(); break;
        case 1: _t->addClicked(); break;
        case 2: _t->editClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 4: _t->exportClicked(); break;
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
    }
}

const QMetaObject LibGUI::TransactionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__TransactionWidget.data,
      qt_meta_data_LibGUI__TransactionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::TransactionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::TransactionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__TransactionWidget.stringdata0))
        return static_cast<void*>(const_cast< TransactionWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< TransactionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::TransactionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
