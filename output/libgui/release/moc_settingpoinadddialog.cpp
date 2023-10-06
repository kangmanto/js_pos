/****************************************************************************
** Meta object code from reading C++ file 'settingpoinadddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libgui/customer/settingpoinadddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingpoinadddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibGUI__SettingPoinAddDialog_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibGUI__SettingPoinAddDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibGUI__SettingPoinAddDialog_t qt_meta_stringdata_LibGUI__SettingPoinAddDialog = {
    {
QT_MOC_LITERAL(0, 0, 28), // "LibGUI::SettingPoinAddDialog"
QT_MOC_LITERAL(1, 29, 11), // "saveClicked"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "LibGUI::SettingPoinAddDialog\0saveClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibGUI__SettingPoinAddDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LibGUI::SettingPoinAddDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingPoinAddDialog *_t = static_cast<SettingPoinAddDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LibGUI::SettingPoinAddDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LibGUI__SettingPoinAddDialog.data,
      qt_meta_data_LibGUI__SettingPoinAddDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibGUI::SettingPoinAddDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibGUI::SettingPoinAddDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibGUI__SettingPoinAddDialog.stringdata0))
        return static_cast<void*>(const_cast< SettingPoinAddDialog*>(this));
    if (!strcmp(_clname, "LibG::MessageHandler"))
        return static_cast< LibG::MessageHandler*>(const_cast< SettingPoinAddDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LibGUI::SettingPoinAddDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
