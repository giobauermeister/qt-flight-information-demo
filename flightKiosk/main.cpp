#include "flightkiosk.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    flightKiosk w;
    w.show();

    return a.exec();
}
