/****************************************************************************
** Meta object code from reading C++ file 'solditemreturnwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/soldreturn/solditemreturnwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'solditemreturnwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__SoldItemReturnWidget_t {
    QByteArrayData data[8];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__SoldItemReturnWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__SoldItemReturnWidget_t qt_meta_stringdata_LibGUI__SoldItemReturnWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "LibGUI::SoldItemReturnWidget"
QT_MOC_LITERAL(1, 29, 10), // "addClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "updateClicked"
QT_MOC_LITERAL(4, 55, 5), // "index"
QT_MOC_LITERAL(5, 61, 13), // "deleteClicked"
QT_MOC_LITERAL(6, 75, 15), // "QModelIndexList"
QT_MOC_LITERAL(7, 91, 10) // "getSummary"

    },
    "LibGUI::SoldItemReturnWidget\0addClicked\0"
    "\0updateClicked\0index\0deleteClicked\0"
    "QModelIndexList\0getSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__SoldItemReturnWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,

       0        // eod
};

void LibGUI::SoldItemReturnWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoldItemReturnWidget *_t = static_cast<SoldItemReturnWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addClicked(); break;
        case 1: _t->updateClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->deleteClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 3: _t->getSummary(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    }
}

const QMetaObject LibGUI::SoldItemReturnWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__SoldItemReturnWidget.data,
      qt_meta_data_LibGUI__SoldItemReturnWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::SoldItemReturnWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::SoldItemReturnWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__SoldItemReturnWidget.stringdata0))
        return static_cast<void*>(const_cast< SoldItemReturnWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< SoldItemReturnWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::SoldItemReturnWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
