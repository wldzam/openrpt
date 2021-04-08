/****************************************************************************
** Meta object code from reading C++ file 'metasqlsaveparameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../metasqlsaveparameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metasqlsaveparameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MetaSQLSaveParameters_t {
    QByteArrayData data[10];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MetaSQLSaveParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MetaSQLSaveParameters_t qt_meta_stringdata_MetaSQLSaveParameters = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MetaSQLSaveParameters"
QT_MOC_LITERAL(1, 22, 8), // "setGrade"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 1), // "p"
QT_MOC_LITERAL(4, 34, 8), // "setGroup"
QT_MOC_LITERAL(5, 43, 7), // "setName"
QT_MOC_LITERAL(6, 51, 8), // "setNotes"
QT_MOC_LITERAL(7, 60, 9), // "setSchema"
QT_MOC_LITERAL(8, 70, 14), // "languageChange"
QT_MOC_LITERAL(9, 85, 10) // "sGetGroups"

    },
    "MetaSQLSaveParameters\0setGrade\0\0p\0"
    "setGroup\0setName\0setNotes\0setSchema\0"
    "languageChange\0sGetGroups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MetaSQLSaveParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       7,    1,   61,    2, 0x0a /* Public */,
       8,    0,   64,    2, 0x09 /* Protected */,
       9,    0,   65,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MetaSQLSaveParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MetaSQLSaveParameters *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setGrade((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->setGroup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setNotes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setSchema((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->languageChange(); break;
        case 6: _t->sGetGroups(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MetaSQLSaveParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MetaSQLSaveParameters.data,
    qt_meta_data_MetaSQLSaveParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MetaSQLSaveParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MetaSQLSaveParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MetaSQLSaveParameters.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MetaSQLSaveParameters"))
        return static_cast< Ui::MetaSQLSaveParameters*>(this);
    return QDialog::qt_metacast(_clname);
}

int MetaSQLSaveParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
