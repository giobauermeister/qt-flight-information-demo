#include "flightinfo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    flightInfo w;
    w.setWindowState(w.windowState() ^ Qt::WindowFullScreen);
    w.show();

    return a.exec();
}
