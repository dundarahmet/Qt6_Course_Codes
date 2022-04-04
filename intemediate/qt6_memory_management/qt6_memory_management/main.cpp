#include <QCoreApplication>
#include "test.h"

Test * makeTree (void) {
    Test * root = new Test(nullptr, "root") ;

    for (int p = 0; p < 5; p++) {
        Test * pobj = new Test(root, "Parent-" + QString::number(p)) ;

        for (int c = 0; c < 5; c++) {
            Test * cobj = new Test(pobj, "Child-" + QString::number(p) + '-' + QString::number(c)) ;

            for (int d = 0; d < 5; d++) {
                Test * dobj = new Test(cobj, "Subobject-" + QString::number(p) + '-' + QString::number(c) + '-' + QString::number(d)) ;
                Q_UNUSED(dobj) ;
            }
        }
    }
    return root ;
}


void printTree (Test * root, int level=0) {
    if (root->children().length() == 0) {
        return ;
    }
    QString lead = "-" ;
    lead.fill('-', level * 5) ;
    foreach(QObject * obj, root->children()) {
        Test * child = qobject_cast<Test *>(obj) ;
        if (!child) {
            return ;
        }

        qInfo() << lead << child ;

        printTree(child, level + 1) ;
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    Test * root = makeTree() ;
//    printTree(root, 1) ;
//    delete root ;

    QObject parent ;
    parent.setObjectName("Parent") ;

    QObject child ;
    child.setObjectName("Child") ;

    child.setParent(&parent) ;

    qInfo() << child.parent() ;
    qInfo() << parent.children() ;

    return a.exec();
}
