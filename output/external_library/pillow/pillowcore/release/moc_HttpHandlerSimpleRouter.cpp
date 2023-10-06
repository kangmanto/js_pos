/****************************************************************************
** Meta object code from reading C++ file 'HttpHandlerSimpleRouter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../external_library/pillow/pillowcore/HttpHandlerSimpleRouter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HttpHandlerSimpleRouter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pillow__HttpHandlerSimpleRouter_t {
    QByteArrayData data[4];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pillow__HttpHandlerSimpleRouter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pillow__HttpHandlerSimpleRouter_t qt_meta_stringdata_Pillow__HttpHandlerSimpleRouter = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Pillow::HttpHandlerSimpleRouter"
QT_MOC_LITERAL(1, 32, 18), // "RoutingErrorAction"
QT_MOC_LITERAL(2, 51, 17), // "Return4xxResponse"
QT_MOC_LITERAL(3, 69, 11) // "Passthrough"

    },
    "Pillow::HttpHandlerSimpleRouter\0"
    "RoutingErrorAction\0Return4xxResponse\0"
    "Passthrough"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pillow__HttpHandlerSimpleRouter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(Pillow::HttpHandlerSimpleRouter::Return4xxResponse),
       3, uint(Pillow::HttpHandlerSimpleRouter::Passthrough),

       0        // eod
};

void Pillow::HttpHandlerSimpleRouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Pillow::HttpHandlerSimpleRouter::staticMetaObject = {
    { &Pillow::HttpHandler::staticMetaObject, qt_meta_stringdata_Pillow__HttpHandlerSimpleRouter.data,
      qt_meta_data_Pillow__HttpHandlerSimpleRouter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pillow::HttpHandlerSimpleRouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pillow::HttpHandlerSimpleRouter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pillow__HttpHandlerSimpleRouter.stringdata0))
        return static_cast<void*>(const_cast< HttpHandlerSimpleRouter*>(this));
    return Pillow::HttpHandler::qt_metacast(_clname);
}

int Pillow::HttpHandlerSimpleRouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pillow::HttpHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
