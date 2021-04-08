/****************************************************************************
** Meta object code from reading C++ file 'editpreferences.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../editpreferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editpreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditPreferences_t {
    QByteArrayData data[20];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditPreferences_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditPreferences_t qt_meta_stringdata_EditPreferences = {
    {
QT_MOC_LITERAL(0, 0, 15), // "EditPreferences"
QT_MOC_LITERAL(1, 16, 11), // "setGridSize"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "x"
QT_MOC_LITERAL(4, 31, 1), // "y"
QT_MOC_LITERAL(5, 33, 9), // "gridSizeX"
QT_MOC_LITERAL(6, 43, 9), // "gridSizeY"
QT_MOC_LITERAL(7, 53, 8), // "showGrid"
QT_MOC_LITERAL(8, 62, 8), // "snapGrid"
QT_MOC_LITERAL(9, 71, 11), // "setShowGrid"
QT_MOC_LITERAL(10, 83, 4), // "show"
QT_MOC_LITERAL(11, 88, 11), // "setSnapGrid"
QT_MOC_LITERAL(12, 100, 4), // "snap"
QT_MOC_LITERAL(13, 105, 14), // "setDefaultFont"
QT_MOC_LITERAL(14, 120, 3), // "fnt"
QT_MOC_LITERAL(15, 124, 11), // "defaultFont"
QT_MOC_LITERAL(16, 136, 14), // "languageChange"
QT_MOC_LITERAL(17, 151, 17), // "changeDefaultFont"
QT_MOC_LITERAL(18, 169, 11), // "selLanguage"
QT_MOC_LITERAL(19, 181, 3) // "sel"

    },
    "EditPreferences\0setGridSize\0\0x\0y\0"
    "gridSizeX\0gridSizeY\0showGrid\0snapGrid\0"
    "setShowGrid\0show\0setSnapGrid\0snap\0"
    "setDefaultFont\0fnt\0defaultFont\0"
    "languageChange\0changeDefaultFont\0"
    "selLanguage\0sel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditPreferences[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x0a /* Public */,
       5,    0,   79,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    0,   82,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      13,    1,   89,    2, 0x0a /* Public */,
      15,    0,   92,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x09 /* Protected */,
      17,    0,   94,    2, 0x09 /* Protected */,
      18,    1,   95,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QFont,   14,
    QMetaType::QFont,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void EditPreferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditPreferences *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setGridSize((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: { double _r = _t->gridSizeX();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 2: { double _r = _t->gridSizeY();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->showGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->snapGrid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setSnapGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setDefaultFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 8: { QFont _r = _t->defaultFont();
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->languageChange(); break;
        case 10: _t->changeDefaultFont(); break;
        case 11: _t->selLanguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditPreferences::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EditPreferences.data,
    qt_meta_data_EditPreferences,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EditPreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditPreferences.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::EditPreferences"))
        return static_cast< Ui::EditPreferences*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
