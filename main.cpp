#include "console.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Console* console = new Console();
    console->execute();

    return a.exec();
}
