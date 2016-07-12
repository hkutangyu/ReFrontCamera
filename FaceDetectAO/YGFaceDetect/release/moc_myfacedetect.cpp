/****************************************************************************
** Meta object code from reading C++ file 'myfacedetect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../FaceDetectAO/YGFaceDetect/myfacedetect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myfacedetect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyFaceDetect_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyFaceDetect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyFaceDetect_t qt_meta_stringdata_MyFaceDetect = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MyFaceDetect"
QT_MOC_LITERAL(1, 13, 12), // "detectResult"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 19), // "vector<Rect_<int> >"
QT_MOC_LITERAL(4, 47, 5), // "faces"
QT_MOC_LITERAL(5, 53, 12), // "onNewFrameCV"
QT_MOC_LITERAL(6, 66, 3), // "Mat"
QT_MOC_LITERAL(7, 70, 6) // "img_cv"

    },
    "MyFaceDetect\0detectResult\0\0"
    "vector<Rect_<int> >\0faces\0onNewFrameCV\0"
    "Mat\0img_cv"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyFaceDetect[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void MyFaceDetect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyFaceDetect *_t = static_cast<MyFaceDetect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->detectResult((*reinterpret_cast< const vector<Rect_<int> >(*)>(_a[1]))); break;
        case 1: _t->onNewFrameCV((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyFaceDetect::*_t)(const vector<Rect_<int> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyFaceDetect::detectResult)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MyFaceDetect::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyFaceDetect.data,
      qt_meta_data_MyFaceDetect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyFaceDetect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyFaceDetect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyFaceDetect.stringdata0))
        return static_cast<void*>(const_cast< MyFaceDetect*>(this));
    return QThread::qt_metacast(_clname);
}

int MyFaceDetect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MyFaceDetect::detectResult(const vector<Rect_<int> > & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
