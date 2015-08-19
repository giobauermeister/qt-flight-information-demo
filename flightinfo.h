#ifndef FLIGHTINFO_H
#define FLIGHTINFO_H

#include <QMainWindow>

namespace Ui {
class flightInfo;
}

class flightInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit flightInfo(QWidget *parent = 0);
    ~flightInfo();

private slots:

private:
    Ui::flightInfo *ui;
};

#endif // FLIGHTINFO_H
