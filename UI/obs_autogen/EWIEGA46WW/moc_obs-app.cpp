/****************************************************************************
** Meta object code from reading C++ file 'obs-app.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "D:/WorkDir/obs-studio/UI/obs-app.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'obs-app.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PipeLineListenerThread_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PipeLineListenerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PipeLineListenerThread_t qt_meta_stringdata_PipeLineListenerThread = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PipeLineListenerThread"
QT_MOC_LITERAL(1, 23, 12), // "InputsUpdate"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "StopListen"

    },
    "PipeLineListenerThread\0InputsUpdate\0"
    "\0StopListen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PipeLineListenerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PipeLineListenerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PipeLineListenerThread *_t = static_cast<PipeLineListenerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InputsUpdate(); break;
        case 1: _t->StopListen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PipeLineListenerThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PipeLineListenerThread::InputsUpdate)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PipeLineListenerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PipeLineListenerThread.data,
      qt_meta_data_PipeLineListenerThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PipeLineListenerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PipeLineListenerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PipeLineListenerThread.stringdata0))
        return static_cast<void*>(const_cast< PipeLineListenerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int PipeLineListenerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PipeLineListenerThread::InputsUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_OBSTranslator_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSTranslator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSTranslator_t qt_meta_stringdata_OBSTranslator = {
    {
QT_MOC_LITERAL(0, 0, 13) // "OBSTranslator"

    },
    "OBSTranslator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSTranslator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OBSTranslator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OBSTranslator::staticMetaObject = {
    { &QTranslator::staticMetaObject, qt_meta_stringdata_OBSTranslator.data,
      qt_meta_data_OBSTranslator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSTranslator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSTranslator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSTranslator.stringdata0))
        return static_cast<void*>(const_cast< OBSTranslator*>(this));
    return QTranslator::qt_metacast(_clname);
}

int OBSTranslator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTranslator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OBSApp_t {
    QByteArrayData data[1];
    char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSApp_t qt_meta_stringdata_OBSApp = {
    {
QT_MOC_LITERAL(0, 0, 6) // "OBSApp"

    },
    "OBSApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OBSApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OBSApp::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_OBSApp.data,
      qt_meta_data_OBSApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSApp.stringdata0))
        return static_cast<void*>(const_cast< OBSApp*>(this));
    return QApplication::qt_metacast(_clname);
}

int OBSApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
