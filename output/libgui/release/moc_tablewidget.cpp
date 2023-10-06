/****************************************************************************
** Meta object code from reading C++ file 'tablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/tablewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__TableWidget_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__TableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__TableWidget_t qt_meta_stringdata_LibGUI__TableWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LibGUI::TableWidget"
QT_MOC_LITERAL(1, 20, 14), // "tableRefreshed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "addClicked"
QT_MOC_LITERAL(4, 47, 13), // "updateClicked"
QT_MOC_LITERAL(5, 61, 5), // "index"
QT_MOC_LITERAL(6, 67, 13), // "deleteClicked"
QT_MOC_LITERAL(7, 81, 15), // "QModelIndexList"
QT_MOC_LITERAL(8, 97, 13), // "actionClicked"
QT_MOC_LITERAL(9, 111, 13), // "tableSelected"
QT_MOC_LITERAL(10, 125, 18) // "tableDoubleClicked"

    },
    "LibGUI::TableWidget\0tableRefreshed\0\0"
    "addClicked\0updateClicked\0index\0"
    "deleteClicked\0QModelIndexList\0"
    "actionClicked\0tableSelected\0"
    "tableDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__TableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, 0x80000000 | 7,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,

       0        // eod
};

void LibGUI::TableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableWidget *_t = static_cast<TableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tableRefreshed(); break;
        case 1: _t->addClicked(); break;
        case 2: _t->updateClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteClicked((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 4: _t->actionClicked(); break;
        case 5: _t->tableSelected(); break;
        case 6: _t->tableDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
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
            typedef void (TableWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableWidget::tableRefreshed)) {
                *result = 0;
            }
        }
        {
            typedef void (TableWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableWidget::addClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (TableWidget::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableWidget::updateClicked)) {
                *result = 2;
            }
        }
        {
            typedef void (TableWidget::*_t)(const QModelIndexList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TableWidget::deleteClicked)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject LibGUI::TableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibGUI__TableWidget.data,
      qt_meta_data_LibGUI__TableWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::TableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::TableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__TableWidget.stringdata0))
        return static_cast<void*>(const_cast< TableWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibGUI::TableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LibGUI::TableWidget::tableRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LibGUI::TableWidget::addClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void LibGUI::TableWidget::updateClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibGUI::TableWidget::deleteClicked(const QModelIndexList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
