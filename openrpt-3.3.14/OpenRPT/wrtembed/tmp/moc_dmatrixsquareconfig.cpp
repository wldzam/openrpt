/****************************************************************************
** Meta object code from reading C++ file 'dmatrixsquareconfig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dmatrixsquareconfig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dmatrixsquareconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DMatrixSquareConfig_t {
    QByteArrayData data[11];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DMatrixSquareConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DMatrixSquareConfig_t qt_meta_stringdata_DMatrixSquareConfig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DMatrixSquareConfig"
QT_MOC_LITERAL(1, 20, 13), // "refreshWidget"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 1), // "i"
QT_MOC_LITERAL(4, 37, 11), // "setVisible2"
QT_MOC_LITERAL(5, 49, 7), // "visible"
QT_MOC_LITERAL(6, 57, 14), // "languageChange"
QT_MOC_LITERAL(7, 72, 14), // "setCursorValue"
QT_MOC_LITERAL(8, 87, 25), // "on__previewButton_clicked"
QT_MOC_LITERAL(9, 113, 13), // "formatRefresh"
QT_MOC_LITERAL(10, 127, 15) // "capacityRefresh"

    },
    "DMatrixSquareConfig\0refreshWidget\0\0i\0"
    "setVisible2\0visible\0languageChange\0"
    "setCursorValue\0on__previewButton_clicked\0"
    "formatRefresh\0capacityRefresh"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DMatrixSquareConfig[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x0a /* Public */,
       4,    0,   60,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   61,    2, 0x09 /* Protected */,
       7,    1,   62,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void DMatrixSquareConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DMatrixSquareConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setVisible2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setVisible2(); break;
        case 3: _t->languageChange(); break;
        case 4: _t->setCursorValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on__previewButton_clicked(); break;
        case 6: _t->formatRefresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->capacityRefresh((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DMatrixSquareConfig::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DMatrixSquareConfig::refreshWidget)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DMatrixSquareConfig::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DMatrixSquareConfig.data,
    qt_meta_data_DMatrixSquareConfig,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DMatrixSquareConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DMatrixSquareConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DMatrixSquareConfig.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DMatrixSquareConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void DMatrixSquareConfig::refreshWidget(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
