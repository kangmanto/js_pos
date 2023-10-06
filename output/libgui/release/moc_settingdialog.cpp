/****************************************************************************
** Meta object code from reading C++ file 'settingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/main/settingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__SettingDialog_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__SettingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__SettingDialog_t qt_meta_stringdata_LibGUI__SettingDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LibGUI::SettingDialog"
QT_MOC_LITERAL(1, 22, 15), // "databaseChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "checkSetting"
QT_MOC_LITERAL(4, 52, 9), // "checkType"
QT_MOC_LITERAL(5, 62, 10), // "checkMysql"
QT_MOC_LITERAL(6, 73, 15), // "checkConnection"
QT_MOC_LITERAL(7, 89, 6), // "cancel"
QT_MOC_LITERAL(8, 96, 4), // "save"
QT_MOC_LITERAL(9, 101, 21) // "openDirectorySelector"

    },
    "LibGUI::SettingDialog\0databaseChanged\0"
    "\0checkSetting\0checkType\0checkMysql\0"
    "checkConnection\0cancel\0save\0"
    "openDirectorySelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__SettingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibGUI::SettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingDialog *_t = static_cast<SettingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->databaseChanged(); break;
        case 1: _t->checkSetting(); break;
        case 2: _t->checkType(); break;
        case 3: _t->checkMysql(); break;
        case 4: _t->checkConnection(); break;
        case 5: _t->cancel(); break;
        case 6: _t->save(); break;
        case 7: _t->openDirectorySelector(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LibGUI::SettingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__SettingDialog.data,
      qt_meta_data_LibGUI__SettingDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::SettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::SettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__SettingDialog.stringdata0))
        return static_cast<void*>(const_cast< SettingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::SettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
