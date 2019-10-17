/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EmoSenseQML/backend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BackEnd_t {
    QByteArrayData data[16];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BackEnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BackEnd_t qt_meta_stringdata_BackEnd = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BackEnd"
QT_MOC_LITERAL(1, 8, 18), // "subjectNameChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "subjectAgeChanged"
QT_MOC_LITERAL(4, 46, 25), // "arduinoButtonsPathChanged"
QT_MOC_LITERAL(5, 72, 25), // "arduinoSensorsPathChanged"
QT_MOC_LITERAL(6, 98, 18), // "affectivaIPChanged"
QT_MOC_LITERAL(7, 117, 25), // "picturesFolderPathChanged"
QT_MOC_LITERAL(8, 143, 23), // "videosFolderPathChanged"
QT_MOC_LITERAL(9, 167, 11), // "subjectName"
QT_MOC_LITERAL(10, 179, 10), // "subjectAge"
QT_MOC_LITERAL(11, 190, 18), // "arduinoButtonsPath"
QT_MOC_LITERAL(12, 209, 18), // "arduinoSensorsPath"
QT_MOC_LITERAL(13, 228, 11), // "affectivaIP"
QT_MOC_LITERAL(14, 240, 18), // "picturesFolderPath"
QT_MOC_LITERAL(15, 259, 16) // "videosFolderPath"

    },
    "BackEnd\0subjectNameChanged\0\0"
    "subjectAgeChanged\0arduinoButtonsPathChanged\0"
    "arduinoSensorsPathChanged\0affectivaIPChanged\0"
    "picturesFolderPathChanged\0"
    "videosFolderPathChanged\0subjectName\0"
    "subjectAge\0arduinoButtonsPath\0"
    "arduinoSensorsPath\0affectivaIP\0"
    "picturesFolderPath\0videosFolderPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackEnd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void BackEnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BackEnd *_t = static_cast<BackEnd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subjectNameChanged(); break;
        case 1: _t->subjectAgeChanged(); break;
        case 2: _t->arduinoButtonsPathChanged(); break;
        case 3: _t->arduinoSensorsPathChanged(); break;
        case 4: _t->affectivaIPChanged(); break;
        case 5: _t->picturesFolderPathChanged(); break;
        case 6: _t->videosFolderPathChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::subjectNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::subjectAgeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::arduinoButtonsPathChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::arduinoSensorsPathChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::affectivaIPChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::picturesFolderPathChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BackEnd::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::videosFolderPathChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BackEnd *_t = static_cast<BackEnd *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->subjectName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->subjectAge(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->arduinoButtonsPath(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->arduinoSensorsPath(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->affectivaIP(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->picturesFolderPath(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->videosFolderPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BackEnd *_t = static_cast<BackEnd *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSubjectName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubjectAge(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setArduinoButtonsPath(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setArduinoSensorsPath(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setAffectivaIP(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPicturesFolderPath(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setVideosFolderPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject BackEnd::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BackEnd.data,
      qt_meta_data_BackEnd,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BackEnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackEnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackEnd.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BackEnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BackEnd::subjectNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BackEnd::subjectAgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BackEnd::arduinoButtonsPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BackEnd::arduinoSensorsPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BackEnd::affectivaIPChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BackEnd::picturesFolderPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BackEnd::videosFolderPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
