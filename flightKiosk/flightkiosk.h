#ifndef FLIGHTKIOSK_H
#define FLIGHTKIOSK_H

#include <QMainWindow>

namespace Ui {
class flightKiosk;
}

class flightKiosk : public QMainWindow
{
    Q_OBJECT

public:
    explicit flightKiosk(QWidget *parent = 0);
    ~flightKiosk();

private slots:
    void on_pushBtn1_clicked();

    void on_startBtn_clicked();

    void on_pushBtn2_clicked();

    void on_pushBtn3_clicked();

    void on_pushBtn4_clicked();

    void on_closeBtn_clicked();

private:
    Ui::flightKiosk *ui;
};

#endif // FLIGHTKIOSK_H
