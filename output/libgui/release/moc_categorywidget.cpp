/****************************************************************************
** Meta object code from reading C++ file 'categorywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/category/categorywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'categorywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__CategoryWidget_t {
    QByteArrayData data[9];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__CategoryWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__CategoryWidget_t qt_meta_stringdata_LibGUI__CategoryWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "LibGUI::CategoryWidget"
QT_MOC_LITERAL(1, 23, 12), // "loadCategory"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "addClicked"
QT_MOC_LITERAL(4, 48, 13), // "updateClicked"
QT_MOC_LITERAL(5, 62, 13), // "deleteClicked"
QT_MOC_LITERAL(6, 76, 13), // "saveRequested"
QT_MOC_LITERAL(7, 90, 4), // "data"
QT_MOC_LITERAL(8, 95, 2) // "id"

    },
    "LibGUI::CategoryWidget\0loadCategory\0"
    "\0addClicked\0updateClicked\0deleteClicked\0"
    "saveRequested\0data\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__CategoryWidget[] = {

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
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantMap, QMetaType::Int,    7,    8,

       0        // eod
};

void LibGUI::CategoryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CategoryWidget *_t = static_cast<CategoryWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadCategory(); break;
        case 1: _t->addClicked(); break;
        case 2: _t->updateClicked(); break;
        case 3: _t->deleteClicked(); break;
        case 4: _t->saveRequested((*reinterpret_cast< const QVariantMap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject LibGUI::CategoryWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__CategoryWidget.data,
      qt_meta_data_LibGUI__CategoryWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::CategoryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::CategoryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__CategoryWidget.stringdata0))
        return static_cast<void*>(const_cast< CategoryWidget*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< CategoryWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::CategoryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
