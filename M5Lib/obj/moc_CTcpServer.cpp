/****************************************************************************
** Meta object code from reading C++ file 'CTcpServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../network/CTcpServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CTcpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CTcpServer_t {
    QByteArrayData data[10];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTcpServer_t qt_meta_stringdata_CTcpServer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CTcpServer"
QT_MOC_LITERAL(1, 11, 9), // "signalLog"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "st"
QT_MOC_LITERAL(4, 25, 13), // "signalReadAll"
QT_MOC_LITERAL(5, 39, 7), // "arrRead"
QT_MOC_LITERAL(6, 47, 20), // "slotAcceptConnection"
QT_MOC_LITERAL(7, 68, 14), // "slotReadClient"
QT_MOC_LITERAL(8, 83, 10), // "slotRetrun"
QT_MOC_LITERAL(9, 94, 9) // "arrReturn"

    },
    "CTcpServer\0signalLog\0\0st\0signalReadAll\0"
    "arrRead\0slotAcceptConnection\0"
    "slotReadClient\0slotRetrun\0arrReturn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTcpServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

void CTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CTcpServer *_t = static_cast<CTcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signalReadAll((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->slotAcceptConnection(); break;
        case 3: _t->slotReadClient(); break;
        case 4: _t->slotRetrun((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CTcpServer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTcpServer::signalLog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CTcpServer::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CTcpServer::signalReadAll)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CTcpServer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CTcpServer.data,
      qt_meta_data_CTcpServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CTcpServer.stringdata0))
        return static_cast<void*>(const_cast< CTcpServer*>(this));
    return QThread::qt_metacast(_clname);
}

int CTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CTcpServer::signalLog(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CTcpServer::signalReadAll(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
