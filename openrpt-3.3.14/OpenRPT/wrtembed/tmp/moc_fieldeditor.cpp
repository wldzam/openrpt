/****************************************************************************
** Meta object code from reading C++ file 'fieldeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../fieldeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fieldeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FieldEditor_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FieldEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FieldEditor_t qt_meta_stringdata_FieldEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FieldEditor"
QT_MOC_LITERAL(1, 12, 15), // "rbAlign_changed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "btnFont_clicked"
QT_MOC_LITERAL(4, 45, 18), // "tbText_textChanged"
QT_MOC_LITERAL(5, 64, 3), // "Str"
QT_MOC_LITERAL(6, 68, 13), // "setLabelFlags"
QT_MOC_LITERAL(7, 82, 1), // "f"
QT_MOC_LITERAL(8, 84, 20), // "rbHAlignNone_clicked"
QT_MOC_LITERAL(9, 105, 14) // "languageChange"

    },
    "FieldEditor\0rbAlign_changed\0\0"
    "btnFont_clicked\0tbText_textChanged\0"
    "Str\0setLabelFlags\0f\0rbHAlignNone_clicked\0"
    "languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FieldEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FieldEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FieldEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rbAlign_changed(); break;
        case 1: _t->btnFont_clicked(); break;
        case 2: _t->tbText_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setLabelFlags((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rbHAlignNone_clicked(); break;
        case 5: _t->languageChange(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FieldEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FieldEditor.data,
    qt_meta_data_FieldEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FieldEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FieldEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FieldEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::FieldEditor"))
        return static_cast< Ui::FieldEditor*>(this);
    return QDialog::qt_metacast(_clname);
}

int FieldEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
