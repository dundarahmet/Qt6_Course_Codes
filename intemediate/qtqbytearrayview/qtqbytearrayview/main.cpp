#include <QCoreApplication>
#include <QByteArray>
#include <QByteArrayView>

void display (QByteArrayView &view) {
    qInfo() << view ;
    qInfo() << "Size" << view.size() ;
    qInfo() << "Data" << view.constData() ;
    qInfo() << "Slice" << view.sliced(2, 4) ;
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QByteArray bytes{"Hello word how are you"} ;
    QByteArrayView view{bytes} ;
    display(view) ;
    return a.exec();
}
