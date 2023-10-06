/****************************************************************************
** Meta object code from reading C++ file 'o2requestor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../external_library/o2/src/o2requestor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'o2requestor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_O2Requestor_t {
    QByteArrayData data[27];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_O2Requestor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_O2Requestor_t qt_meta_stringdata_O2Requestor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "O2Requestor"
QT_MOC_LITERAL(1, 12, 8), // "finished"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "id"
QT_MOC_LITERAL(4, 25, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 53, 5), // "error"
QT_MOC_LITERAL(6, 59, 4), // "data"
QT_MOC_LITERAL(7, 64, 14), // "uploadProgress"
QT_MOC_LITERAL(8, 79, 9), // "bytesSent"
QT_MOC_LITERAL(9, 89, 10), // "bytesTotal"
QT_MOC_LITERAL(10, 100, 16), // "downloadProgress"
QT_MOC_LITERAL(11, 117, 13), // "bytesReceived"
QT_MOC_LITERAL(12, 131, 3), // "get"
QT_MOC_LITERAL(13, 135, 15), // "QNetworkRequest"
QT_MOC_LITERAL(14, 151, 3), // "req"
QT_MOC_LITERAL(15, 155, 4), // "post"
QT_MOC_LITERAL(16, 160, 3), // "put"
QT_MOC_LITERAL(17, 164, 17), // "onRefreshFinished"
QT_MOC_LITERAL(18, 182, 17), // "onRequestFinished"
QT_MOC_LITERAL(19, 200, 14), // "onRequestError"
QT_MOC_LITERAL(20, 215, 5), // "retry"
QT_MOC_LITERAL(21, 221, 6), // "finish"
QT_MOC_LITERAL(22, 228, 16), // "onUploadProgress"
QT_MOC_LITERAL(23, 245, 8), // "uploaded"
QT_MOC_LITERAL(24, 254, 5), // "total"
QT_MOC_LITERAL(25, 260, 18), // "onDownloadProgress"
QT_MOC_LITERAL(26, 279, 10) // "downloaded"

    },
    "O2Requestor\0finished\0\0id\0"
    "QNetworkReply::NetworkError\0error\0"
    "data\0uploadProgress\0bytesSent\0bytesTotal\0"
    "downloadProgress\0bytesReceived\0get\0"
    "QNetworkRequest\0req\0post\0put\0"
    "onRefreshFinished\0onRequestFinished\0"
    "onRequestError\0retry\0finish\0"
    "onUploadProgress\0uploaded\0total\0"
    "onDownloadProgress\0downloaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_O2Requestor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,
       7,    3,   86,    2, 0x06 /* Public */,
      10,    3,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  100,    2, 0x0a /* Public */,
      15,    2,  103,    2, 0x0a /* Public */,
      16,    2,  108,    2, 0x0a /* Public */,
      17,    1,  113,    2, 0x09 /* Protected */,
      18,    0,  116,    2, 0x09 /* Protected */,
      19,    1,  117,    2, 0x09 /* Protected */,
      20,    0,  120,    2, 0x09 /* Protected */,
      21,    0,  121,    2, 0x09 /* Protected */,
      22,    2,  122,    2, 0x09 /* Protected */,
      25,    2,  127,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::QByteArray,    3,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong, QMetaType::LongLong,    3,   11,    9,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 13,   14,
    QMetaType::Int, 0x80000000 | 13, QMetaType::QByteArray,   14,    6,
    QMetaType::Int, 0x80000000 | 13, QMetaType::QByteArray,   14,    6,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   23,   24,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   26,   24,

       0        // eod
};

void O2Requestor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        O2Requestor *_t = static_cast<O2Requestor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 1: _t->uploadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 3: { int _r = _t->get((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->post((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->put((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: _t->onRefreshFinished((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 7: _t->onRequestFinished(); break;
        case 8: _t->onRequestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 9: _t->retry(); break;
        case 10: _t->finish(); break;
        case 11: _t->onUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 12: _t->onDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (O2Requestor::*_t)(int , QNetworkReply::NetworkError , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&O2Requestor::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (O2Requestor::*_t)(int , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&O2Requestor::uploadProgress)) {
                *result = 1;
            }
        }
        {
            typedef void (O2Requestor::*_t)(int , qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&O2Requestor::downloadProgress)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject O2Requestor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_O2Requestor.data,
      qt_meta_data_O2Requestor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *O2Requestor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *O2Requestor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_O2Requestor.stringdata0))
        return static_cast<void*>(const_cast< O2Requestor*>(this));
    return QObject::qt_metacast(_clname);
}

int O2Requestor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void O2Requestor::finished(int _t1, QNetworkReply::NetworkError _t2, QByteArray _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void O2Requestor::uploadProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void O2Requestor::downloadProgress(int _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
