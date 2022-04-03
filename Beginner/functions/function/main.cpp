#include <QCoreApplication>
#include <QDebug>

void test (void) {
    qInfo("This is just test") ;
}
void test (QString str) {
    qInfo() << "String is: " << str ;
}
void test (int age) {
    qInfo() << "Age is: " << age ;
}
void test (bool value) {
    qInfo() << "Boolean Value is: " << value ;
}

// This will not work because after returning the object, the obeject
// is out of scope so it has to delete or a program has to call its destructor.
// So the copied object's destructor is called and the object must be deleted.
//QObject get_object (QString str) {
//    QObject o ;
//    o.setObjectName(str) ;
//    return o ;
//}

// This will also not work because of the same problem.
//QObject &get_ref1 (QString str) {
//    QObject o ;
//    o.setObjectName(str) ;
//    return o ;
//}

class My_Q_Object : public QObject {
    public:
    ~My_Q_Object (void) {
        qInfo() << "Deleted: " << this->objectName() ;
    }
};

QObject &get_ref (QString str) {
    QObject *o = new QObject() ;
    o->setObjectName(str) ;
    return *o ;
}

QObject *get_pointer (QString str) {
    QObject *o = new QObject() ;
    o->setObjectName(str) ;
    return o ;
}

My_Q_Object &my_get_ref (QString str) {
    My_Q_Object *o = new My_Q_Object() ;
    o->setObjectName(str) ;
    return *o ;
}

My_Q_Object *my_get_pointer (QString str) {
    My_Q_Object *o = new My_Q_Object() ;
    o->setObjectName(str) ;
    return o ;
}


int main (int argc, char *argv[]) {
    QCoreApplication a(argc, argv) ;

    test() ;
    test("This is not working a way what you suggest") ;
    test(QString("This is working what you sgugest")) ;
    test(55) ;
    test(true) ;
    //========================================================
    qInfo() << "\n\n" ;
    QObject *o1 = get_pointer("Ahmet Dundar");
    qInfo() << "o1-its pointer- is: " << o1->objectName() ;
    qInfo() << o1 ;
    delete o1 ;
    qInfo("\n") ;

    QObject &o2 = get_ref("Ahmet Dundar") ;
    qInfo() << "o2-its reference- is: " << o2.objectName() ;

    //========================================================
    qInfo() << "\n\n" ;
    My_Q_Object *o3 = my_get_pointer("my_o3_Ahmet Dundar");
    qInfo() << "o3-its pointer- is: " << o3->objectName() ;
    qInfo() << o3 ;
    delete o3 ;

    qInfo("\n") ;

    My_Q_Object &o4 = my_get_ref("my_o4_Ahmet Dundar") ;
    qInfo() << "o4-its reference- is: " << o4.objectName() ;
    qFatal("Bye") ;

    return a.exec() ;
}
