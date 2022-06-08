#include "conversor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    conversor w;
    w.show();
    return a.exec();
}
