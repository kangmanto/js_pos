/****************************************************************************
** Meta object code from reading C++ file 'rewardwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/customer/rewardwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rewardwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__RewardWidget_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__RewardWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__RewardWidget_t qt_meta_stringdata_LibGUI__RewardWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LibGUI::RewardWidget"
QT_MOC_LITERAL(1, 21, 18), // "addExchangeClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "updateExchangeClicked"
QT_MOC_LITERAL(4, 63, 5), // "index"
QT_MOC_LITERAL(5, 69, 21), // "deleteExchangeClicked"
QT_MOC_LITERAL(6, 91, 15), // "QModelIndexList"
QT_MOC_LITERAL(7, 107, 14), // "addPoinClicked"
QT_MOC_LITERAL(8, 122, 17), // "updatePoinClicked"
QT_MOC_LITERAL(9, 140, 17) // "deletePoinClicked"

    },
    "LibGUI::RewardWidget\0addExchangeClicked\0"
    "\0updateExchangeClicked\0index\0"
    "deleteExchangeClicked\0QModelIndexList\0"
    "addPoinClicked\0updatePoinClicked\0"
    "deletePoinClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__RewardWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

void LibGUI::RewardWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RewardWidget *_t = static_cast<RewardWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addExchangeClicked(); break;
        case 1: _t->updateExchangeClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->deleteExchangeClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 3: _t->addPoinClicked(); break;
        case 4: _t->updatePoinClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->deletePoinClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
            }
            break;
        }
    }
}

const QMetaObject LibGUI::RewardWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__RewardWidget.data,
      qt_meta_data_LibGUI__RewardWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::RewardWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::RewardWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__RewardWidget.stringdata0))
        return static_cast<void*>(const_cast< RewardWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< RewardWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::RewardWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
