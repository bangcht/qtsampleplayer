/****************************************************************************
** Meta object code from reading C++ file 'DASHPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UI/DASHPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DASHPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sampleplayer__DASHPlayer_t {
    QByteArrayData data[7];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_sampleplayer__DASHPlayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_sampleplayer__DASHPlayer_t qt_meta_stringdata_sampleplayer__DASHPlayer = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 34),
QT_MOC_LITERAL(2, 60, 0),
QT_MOC_LITERAL(3, 61, 18),
QT_MOC_LITERAL(4, 80, 27),
QT_MOC_LITERAL(5, 108, 34),
QT_MOC_LITERAL(6, 143, 27)
    },
    "sampleplayer::DASHPlayer\0"
    "VideoSegmentBufferFillStateChanged\0\0"
    "fillStateInPercent\0VideoBufferFillStateChanged\0"
    "AudioSegmentBufferFillStateChanged\0"
    "AudioBufferFillStateChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sampleplayer__DASHPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x05,
       4,    1,   37,    2, 0x05,
       5,    1,   40,    2, 0x05,
       6,    1,   43,    2, 0x05,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void sampleplayer::DASHPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DASHPlayer *_t = static_cast<DASHPlayer *>(_o);
        switch (_id) {
        case 0: _t->VideoSegmentBufferFillStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->VideoBufferFillStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->AudioSegmentBufferFillStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->AudioBufferFillStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DASHPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DASHPlayer::VideoSegmentBufferFillStateChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (DASHPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DASHPlayer::VideoBufferFillStateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (DASHPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DASHPlayer::AudioSegmentBufferFillStateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (DASHPlayer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DASHPlayer::AudioBufferFillStateChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject sampleplayer::DASHPlayer::staticMetaObject = {
    { &IDASHPlayerGuiObserver::staticMetaObject, qt_meta_stringdata_sampleplayer__DASHPlayer.data,
      qt_meta_data_sampleplayer__DASHPlayer,  qt_static_metacall, 0, 0}
};


const QMetaObject *sampleplayer::DASHPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sampleplayer::DASHPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sampleplayer__DASHPlayer.stringdata))
        return static_cast<void*>(const_cast< DASHPlayer*>(this));
    if (!strcmp(_clname, "managers::IMultimediaManagerObserver"))
        return static_cast< managers::IMultimediaManagerObserver*>(const_cast< DASHPlayer*>(this));
    return IDASHPlayerGuiObserver::qt_metacast(_clname);
}

int sampleplayer::DASHPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IDASHPlayerGuiObserver::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void sampleplayer::DASHPlayer::VideoSegmentBufferFillStateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sampleplayer::DASHPlayer::VideoBufferFillStateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void sampleplayer::DASHPlayer::AudioSegmentBufferFillStateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void sampleplayer::DASHPlayer::AudioBufferFillStateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
