/****************************************************************************
** Meta object code from reading C++ file 'o1flickr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../external_library/o2/src/o1flickr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'o1flickr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_O1Flickr_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O1Flickr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O1Flickr_t qt_meta_stringdata_O1Flickr = {
    {
QT_MOC_LITERAL(0, 0, 8) // "O1Flickr"

    },
    "O1Flickr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O1Flickr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void O1Flickr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject O1Flickr::staticMetaObject = {
    { &O1::staticMetaObject, qt_meta_stringdata_O1Flickr.data,
      qt_meta_data_O1Flickr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *O1Flickr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O1Flickr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_O1Flickr.stringdata0))
        return static_cast<void*>(const_cast< O1Flickr*>(this));
    return O1::qt_metacast(_clname);
}

int O1Flickr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = O1::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
