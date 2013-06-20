/****************************************************************************
** Meta object code from reading C++ file 'iclassquewindow.h'
**
** Created: Sat Oct 6 21:21:03 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../iclass/iclassquewindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iclassquewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_iClassQueWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      44,   16,   16,   16, 0x08,
      71,   16,   16,   16, 0x08,
      98,   16,   16,   16, 0x08,
     125,   16,   16,   16, 0x08,
     160,   16,   16,   16, 0x08,
     210,  175,   16,   16, 0x08,
     229,   16,   16,   16, 0x08,
     253,   16,   16,   16, 0x08,
     267,   16,   16,   16, 0x08,
     303,   16,   16,   16, 0x08,
     339,   16,   16,   16, 0x08,
     375,   16,   16,   16, 0x08,
     411,   16,   16,   16, 0x08,
     437,   16,   16,   16, 0x08,
     463,   16,   16,   16, 0x08,
     487,   16,   16,   16, 0x08,
     513,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_iClassQueWindow[] = {
    "iClassQueWindow\0\0on_subject2Radio_clicked()\0"
    "on_subject3Radio_clicked()\0"
    "on_subject4Radio_clicked()\0"
    "on_subject1Radio_clicked()\0"
    "on_submitExamPushBurtton_clicked()\0"
    "close_thread()\0current_button_group,number_of_que\0"
    "build_map(int,int)\0update_no_of_que_done()\0"
    "update_time()\0on_verticalSlider1_sliderReleased()\0"
    "on_verticalSlider2_sliderReleased()\0"
    "on_verticalSlider3_sliderReleased()\0"
    "on_verticalSlider4_sliderReleased()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
};

void iClassQueWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        iClassQueWindow *_t = static_cast<iClassQueWindow *>(_o);
        switch (_id) {
        case 0: _t->on_subject2Radio_clicked(); break;
        case 1: _t->on_subject3Radio_clicked(); break;
        case 2: _t->on_subject4Radio_clicked(); break;
        case 3: _t->on_subject1Radio_clicked(); break;
        case 4: _t->on_submitExamPushBurtton_clicked(); break;
        case 5: _t->close_thread(); break;
        case 6: _t->build_map((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 7: _t->update_no_of_que_done(); break;
        case 8: _t->update_time(); break;
        case 9: _t->on_verticalSlider1_sliderReleased(); break;
        case 10: _t->on_verticalSlider2_sliderReleased(); break;
        case 11: _t->on_verticalSlider3_sliderReleased(); break;
        case 12: _t->on_verticalSlider4_sliderReleased(); break;
        case 13: _t->on_pushButton_2_clicked(); break;
        case 14: _t->on_pushButton_3_clicked(); break;
        case 15: _t->on_pushButton_clicked(); break;
        case 16: _t->on_pushButton_4_clicked(); break;
        case 17: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData iClassQueWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject iClassQueWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_iClassQueWindow,
      qt_meta_data_iClassQueWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &iClassQueWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *iClassQueWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *iClassQueWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_iClassQueWindow))
        return static_cast<void*>(const_cast< iClassQueWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int iClassQueWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
static const uint qt_meta_data_MarkThread[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_MarkThread[] = {
    "MarkThread\0"
};

void MarkThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MarkThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MarkThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MarkThread,
      qt_meta_data_MarkThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MarkThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MarkThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MarkThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MarkThread))
        return static_cast<void*>(const_cast< MarkThread*>(this));
    return QThread::qt_metacast(_clname);
}

int MarkThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_IclassDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      66,   13,   13,   13, 0x08,
      92,   13,   13,   13, 0x08,
     119,   13,   13,   13, 0x08,
     146,   13,   13,   13, 0x08,
     175,   13,   13,   13, 0x08,
     185,   13,   13,   13, 0x08,
     207,   13,   13,   13, 0x08,
     232,   13,   13,   13, 0x08,
     258,   13,   13,   13, 0x08,
     287,   13,   13,   13, 0x08,
     316,   13,   13,   13, 0x08,
     347,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IclassDialog[] = {
    "IclassDialog\0\0on_examModeRadio_clicked()\0"
    "on_siModeRadio_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_examOneButton_clicked()\0"
    "on_examTwoButton_clicked()\0"
    "on_examThreeButton_clicked()\0checked()\0"
    "initialize_combobox()\0on_NormalRadio_clicked()\0"
    "on_dynamicRadio_clicked()\0"
    "on_examOneButton_2_clicked()\0"
    "on_examTwoButton_2_clicked()\0"
    "on_examThreeButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

void IclassDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IclassDialog *_t = static_cast<IclassDialog *>(_o);
        switch (_id) {
        case 0: _t->on_examModeRadio_clicked(); break;
        case 1: _t->on_siModeRadio_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_examOneButton_clicked(); break;
        case 4: _t->on_examTwoButton_clicked(); break;
        case 5: _t->on_examThreeButton_clicked(); break;
        case 6: _t->checked(); break;
        case 7: _t->initialize_combobox(); break;
        case 8: _t->on_NormalRadio_clicked(); break;
        case 9: _t->on_dynamicRadio_clicked(); break;
        case 10: _t->on_examOneButton_2_clicked(); break;
        case 11: _t->on_examTwoButton_2_clicked(); break;
        case 12: _t->on_examThreeButton_2_clicked(); break;
        case 13: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData IclassDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IclassDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_IclassDialog,
      qt_meta_data_IclassDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IclassDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IclassDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IclassDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IclassDialog))
        return static_cast<void*>(const_cast< IclassDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int IclassDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
