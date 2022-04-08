#include <QCoreApplication>
#include <QFile>
#include <QTextStream>

void write (QFile &file) {
    if (!file.isWritable()) {
        qInfo() << "Unable to write to file" ;
        return ;
    }

    QTextStream stream{&file} ;
    stream.setEncoding(QStringConverter::LastEncoding) ;

    stream.seek(file.size()) ;

    for (int i = 0; i < 5; i++) {
        stream << QString::number(i) << "-Item\n" ;
    }
    stream.flush() ;
    qInfo() << "File written" ;
}

void read (QFile &file) {
    if (!file.isReadable()) {
        qInfo() << "Unable to read to file" ;
        return ;
    }

    QTextStream stream{&file} ;
    stream.seek(0) ;
    while (!stream.atEnd()) {
        qInfo() << stream.read(25) ;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "text.txt" ;
    QFile file { filename } ;

    if (file.open(file.ReadWrite)) {
        QTextStream stream(&file) ;
        qInfo() << "Encoding:" << stream.encoding() ;
        write(file) ;
        read(file) ;
        file.close() ;
    } else {
        qInfo() << file.errorString() ;
    }


    return a.exec();
}
