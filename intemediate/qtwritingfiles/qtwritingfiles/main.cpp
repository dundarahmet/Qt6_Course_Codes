#include <QCoreApplication>
#include <QFile>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt" ;

    QFile file(filename) ;
    if (file.open(QIODevice::WriteOnly)) {
        QString now = QDateTime::currentDateTime().toString() ;

        QByteArray data ;
        data.append(now.toLocal8Bit()) ;
        data.append(" - ") ;
        data.append("Hello world\n") ;

        file.write(data) ;

        file.close() ;
        qInfo() << "Wrote to the file" ;
    } else {
        qInfo() << file.errorString() ;
    }

    QFile new_file(filename) ;
    if (file.open(QFile::Append)) {
        QByteArray data {
            QDateTime::currentDateTime().toString().toLocal8Bit()
        } ;
        data.append(" - ") ;
        data.append("Ahmet Dundar") ;

        file.write(data) ;
        file.close() ;
        qInfo() << "Appended to file" ;
    } else {
        qInfo() << file.errorString() ;
    }

    QFile second_file(filename) ;
    if (file.open(QFile::ReadOnly)) {
        //Small files only!!
        qInfo() << file.readAll() ;

        file.close() ;
    } else {
        qInfo() << file.errorString() ;
    }

    return a.exec();
}
