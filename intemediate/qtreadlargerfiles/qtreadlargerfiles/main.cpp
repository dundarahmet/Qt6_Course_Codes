#include <QCoreApplication>
#include <QFile>

void readLines (QFile &file) {
    if(!file.isReadable()) {
        return ;
    }

    file.seek(0) ;
    while (!file.atEnd()) {
        qInfo() << file.readLine() ;
    }
}
void readChunks (QFile &file) {
    if(!file.isReadable()) {
        return ;
    }

    file.seek(0) ;

    while(!file.atEnd()) {
        qInfo() << file.read(25) ;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt" ;

    QFile file(filename) ;
    if (file.open(QFile::ReadOnly)) {
        readLines(file) ;

        qInfo() << "------------------" ;
        readChunks(file) ;
        file.close() ;
    } else {
        qInfo() << file.errorString() ;
    }

    return a.exec();
}
