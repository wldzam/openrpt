/****************************************************************************
** Meta object code from reading C++ file 'imageeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../imageeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageEditor_t {
    QByteArrayData data[14];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ImageEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ImageEditor_t qt_meta_stringdata_ImageEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ImageEditor"
QT_MOC_LITERAL(1, 12, 16), // "cbStatic_toggled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "yes"
QT_MOC_LITERAL(4, 34, 12), // "getImageData"
QT_MOC_LITERAL(5, 47, 12), // "setImageData"
QT_MOC_LITERAL(6, 60, 3), // "dat"
QT_MOC_LITERAL(7, 64, 7), // "getMode"
QT_MOC_LITERAL(8, 72, 8), // "isInline"
QT_MOC_LITERAL(9, 81, 7), // "setMode"
QT_MOC_LITERAL(10, 89, 1), // "m"
QT_MOC_LITERAL(11, 91, 9), // "setInline"
QT_MOC_LITERAL(12, 101, 15), // "btnLoad_clicked"
QT_MOC_LITERAL(13, 117, 14) // "languageChange"

    },
    "ImageEditor\0cbStatic_toggled\0\0yes\0"
    "getImageData\0setImageData\0dat\0getMode\0"
    "isInline\0setMode\0m\0setInline\0"
    "btnLoad_clicked\0languageChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      11,    1,   71,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ImageEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cbStatic_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getImageData();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setImageData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->getMode();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->isInline();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setInline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->btnLoad_clicked(); break;
        case 8: _t->languageChange(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ImageEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ImageEditor.data,
    qt_meta_data_ImageEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ImageEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ImageEditor"))
        return static_cast< Ui::ImageEditor*>(this);
    return QDialog::qt_metacast(_clname);
}

int ImageEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
