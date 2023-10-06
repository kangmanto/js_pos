/****************************************************************************
** Meta object code from reading C++ file 'itemwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/item/itemwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__ItemWidget_t {
    QByteArrayData data[15];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__ItemWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__ItemWidget_t qt_meta_stringdata_LibGUI__ItemWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LibGUI::ItemWidget"
QT_MOC_LITERAL(1, 19, 25), // "mainTableSelectionChanges"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "addItemClicked"
QT_MOC_LITERAL(4, 61, 17), // "updateItemClicked"
QT_MOC_LITERAL(5, 79, 5), // "index"
QT_MOC_LITERAL(6, 85, 17), // "deleteItemClicked"
QT_MOC_LITERAL(7, 103, 15), // "QModelIndexList"
QT_MOC_LITERAL(8, 119, 13), // "importClicked"
QT_MOC_LITERAL(9, 133, 13), // "exportClicked"
QT_MOC_LITERAL(10, 147, 19), // "mainTableKeyPressed"
QT_MOC_LITERAL(11, 167, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 178, 5), // "event"
QT_MOC_LITERAL(13, 184, 13), // "openStockCard"
QT_MOC_LITERAL(14, 198, 13) // "reloadSummary"

    },
    "LibGUI::ItemWidget\0mainTableSelectionChanges\0"
    "\0addItemClicked\0updateItemClicked\0"
    "index\0deleteItemClicked\0QModelIndexList\0"
    "importClicked\0exportClicked\0"
    "mainTableKeyPressed\0QKeyEvent*\0event\0"
    "openStockCard\0reloadSummary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__ItemWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    2,   69,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 11,    2,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::ItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemWidget *_t = static_cast<ItemWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainTableSelectionChanges(); break;
        case 1: _t->addItemClicked(); break;
        case 2: _t->updateItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteItemClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 4: _t->importClicked(); break;
        case 5: _t->exportClicked(); break;
        case 6: _t->mainTableKeyPressed((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 7: _t->openStockCard(); break;
        case 8: _t->reloadSummary(); break;
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

const QMetaObject LibGUI::ItemWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__ItemWidget.data,
      qt_meta_data_LibGUI__ItemWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::ItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::ItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__ItemWidget.stringdata0))
        return static_cast<void*>(const_cast< ItemWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< ItemWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::ItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
