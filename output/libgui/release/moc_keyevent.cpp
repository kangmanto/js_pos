/****************************************************************************
** Meta object code from reading C++ file 'keyevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/keyevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__KeyEvent_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__KeyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__KeyEvent_t qt_meta_stringdata_LibGUI__KeyEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LibGUI::KeyEvent"
QT_MOC_LITERAL(1, 17, 10), // "keyPressed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "sender"
QT_MOC_LITERAL(4, 36, 10), // "QKeyEvent*"
QT_MOC_LITERAL(5, 47, 8), // "keyEvent"
QT_MOC_LITERAL(6, 56, 7), // "focused"
QT_MOC_LITERAL(7, 64, 7) // "clicked"

    },
    "LibGUI::KeyEvent\0keyPressed\0\0sender\0"
    "QKeyEvent*\0keyEvent\0focused\0clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__KeyEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    1,   34,    2, 0x06 /* Public */,
       7,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QObjectStar,    3,
    QMetaType::Void, QMetaType::QObjectStar,    3,

       0        // eod
};

void LibGUI::KeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyEvent *_t = static_cast<KeyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keyPressed((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 1: _t->focused((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KeyEvent::*_t)(QObject * , QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyEvent::keyPressed)) {
                *result = 0;
            }
        }
        {
            typedef void (KeyEvent::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyEvent::focused)) {
                *result = 1;
            }
        }
        {
            typedef void (KeyEvent::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyEvent::clicked)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject LibGUI::KeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LibGUI__KeyEvent.data,
      qt_meta_data_LibGUI__KeyEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::KeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::KeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__KeyEvent.stringdata0))
        return static_cast<void*>(const_cast< KeyEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int LibGUI::KeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LibGUI::KeyEvent::keyPressed(QObject * _t1, QKeyEvent * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibGUI::KeyEvent::focused(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibGUI::KeyEvent::clicked(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
