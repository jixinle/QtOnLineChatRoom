#include "mainwindowcr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainWindowCR w;
    w.show();

    return a.exec();
}
