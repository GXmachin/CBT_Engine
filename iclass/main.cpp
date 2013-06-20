#include <QtGui/QApplication>
#include "iclassquewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    iClassQueWindow w;
    w.show();

    return a.exec();
}
