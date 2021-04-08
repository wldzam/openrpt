/****************************************************************************
** Meta object code from reading C++ file 'reportgridoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../reportgridoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reportgridoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReportGridOptions_t {
    QByteArrayData data[11];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReportGridOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReportGridOptions_t qt_meta_stringdata_ReportGridOptions = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ReportGridOptions"
QT_MOC_LITERAL(1, 18, 18), // "gridOptionsChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "setVisible"
QT_MOC_LITERAL(4, 49, 3), // "yes"
QT_MOC_LITERAL(5, 53, 4), // "show"
QT_MOC_LITERAL(6, 58, 4), // "hide"
QT_MOC_LITERAL(7, 63, 12), // "setXInterval"
QT_MOC_LITERAL(8, 76, 1), // "i"
QT_MOC_LITERAL(9, 78, 12), // "setYInterval"
QT_MOC_LITERAL(10, 91, 7) // "setSnap"

    },
    "ReportGridOptions\0gridOptionsChanged\0"
    "\0setVisible\0yes\0show\0hide\0setXInterval\0"
    "i\0setYInterval\0setSnap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReportGridOptions[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       3,    0,   63,    2, 0x2a /* Public | MethodCloned */,
       5,    0,   64,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void ReportGridOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReportGridOptions *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gridOptionsChanged(); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setVisible(); break;
        case 3: _t->show(); break;
        case 4: _t->hide(); break;
        case 5: _t->setXInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setYInterval((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setSnap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setSnap(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReportGridOptions::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReportGridOptions::gridOptionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReportGridOptions::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ReportGridOptions.data,
    qt_meta_data_ReportGridOptions,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReportGridOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReportGridOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReportGridOptions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReportGridOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ReportGridOptions::gridOptionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
