/****************************************************************************
** Meta object code from reading C++ file 'myvideo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../FaceDetectAO/YGFaceDetect/myvideo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myvideo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyVideo_t {
    QByteArrayData data[13];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyVideo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyVideo_t qt_meta_stringdata_MyVideo = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyVideo"
QT_MOC_LITERAL(1, 8, 8), // "newFrame"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "qImg"
QT_MOC_LITERAL(4, 23, 19), // "vector<Rect_<int> >"
QT_MOC_LITERAL(5, 43, 5), // "faces"
QT_MOC_LITERAL(6, 49, 10), // "newFrameCV"
QT_MOC_LITERAL(7, 60, 3), // "Mat"
QT_MOC_LITERAL(8, 64, 6), // "img_cv"
QT_MOC_LITERAL(9, 71, 13), // "onCloseCamera"
QT_MOC_LITERAL(10, 85, 14), // "onDetectResult"
QT_MOC_LITERAL(11, 100, 16), // "onSetProcessFlag"
QT_MOC_LITERAL(12, 117, 8) // "bProcess"

    },
    "MyVideo\0newFrame\0\0qImg\0vector<Rect_<int> >\0"
    "faces\0newFrameCV\0Mat\0img_cv\0onCloseCamera\0"
    "onDetectResult\0onSetProcessFlag\0"
    "bProcess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyVideo[] = {

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
       1,    2,   39,    2, 0x06 /* Public */,
       6,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   47,    2, 0x0a /* Public */,
      10,    1,   48,    2, 0x0a /* Public */,
      11,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void MyVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyVideo *_t = static_cast<MyVideo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newFrame((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< vector<Rect_<int> >(*)>(_a[2]))); break;
        case 1: _t->newFrameCV((*reinterpret_cast< const Mat(*)>(_a[1]))); break;
        case 2: _t->onCloseCamera(); break;
        case 3: _t->onDetectResult((*reinterpret_cast< vector<Rect_<int> >(*)>(_a[1]))); break;
        case 4: _t->onSetProcessFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyVideo::*_t)(const QImage & , vector<Rect_<int> > );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyVideo::newFrame)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyVideo::*_t)(const Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyVideo::newFrameCV)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MyVideo::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyVideo.data,
      qt_meta_data_MyVideo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyVideo.stringdata0))
        return static_cast<void*>(const_cast< MyVideo*>(this));
    return QThread::qt_metacast(_clname);
}

int MyVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MyVideo::newFrame(const QImage & _t1, vector<Rect_<int> > _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyVideo::newFrameCV(const Mat & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
