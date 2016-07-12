/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../FaceDetectAO/YGFaceDetect/dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 11), // "closeCamera"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "SetProcessFlag"
QT_MOC_LITERAL(4, 35, 8), // "bProcess"
QT_MOC_LITERAL(5, 44, 10), // "onNewFrame"
QT_MOC_LITERAL(6, 55, 4), // "qImg"
QT_MOC_LITERAL(7, 60, 19), // "vector<Rect_<int> >"
QT_MOC_LITERAL(8, 80, 5), // "faces"
QT_MOC_LITERAL(9, 86, 14), // "onTcpConnected"
QT_MOC_LITERAL(10, 101, 25), // "on_closeCameraBtn_clicked"
QT_MOC_LITERAL(11, 127, 16), // "onMessageHistory"
QT_MOC_LITERAL(12, 144, 3), // "msg"
QT_MOC_LITERAL(13, 148, 22) // "onDisconnectFromServer"

    },
    "Dialog\0closeCamera\0\0SetProcessFlag\0"
    "bProcess\0onNewFrame\0qImg\0vector<Rect_<int> >\0"
    "faces\0onTcpConnected\0on_closeCameraBtn_clicked\0"
    "onMessageHistory\0msg\0onDisconnectFromServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   53,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    1,   60,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeCamera(); break;
        case 1: _t->SetProcessFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onNewFrame((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< vector<Rect_<int> >(*)>(_a[2]))); break;
        case 3: _t->onTcpConnected(); break;
        case 4: _t->on_closeCameraBtn_clicked(); break;
        case 5: _t->onMessageHistory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onDisconnectFromServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::closeCamera)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Dialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dialog::SetProcessFlag)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Dialog::closeCamera()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Dialog::SetProcessFlag(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
