#include "flightkiosk.h"
#include "ui_flightkiosk.h"

flightKiosk::flightKiosk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::flightKiosk)
{
    ui->setupUi(this);

    QPixmap clouds("/usr/bin/resources/clouds-gray.jpg");
    QPixmap baggage("/usr/bin/resources/baggage.png");
    QPixmap btnRed("/usr/bin/resources/btn-red.png");
    QPixmap credit("/usr/bin/resources/credit.png");
    QPixmap deltaLogo("/usr/bin/resources/delta-logo.png");
    QPixmap deltaWhite("/usr/bin/resources/delta-logo-white.png");
    QPixmap flightInfo("/usr/bin/resources/flight-info.png");
    QPixmap scan("/usr/bin/resources/scan.png");
    QPixmap search("/usr/bin/resources/search-box.png");
    QPixmap seats("/usr/bin/resources/seats-plane.png");
    QPixmap topBar("/usr/bin/resources/top-bar.png");
    QPixmap topLabel("/usr/bin/resources/top-label.png");
    QPixmap welcome("/usr/bin/resources/welcome-screen.png");
    QPixmap whiteBar("/usr/bin/resources/white-bar.png");
    //QPixmap number4("/usr/bin/resources/.png");

    ui->backgroundLb->setPixmap(clouds);
    ui->deltaLogo->setPixmap(deltaWhite);
    ui->label_2->setPixmap(topLabel);
    ui->topBar->setPixmap(topBar);
    ui->whiteLabel->setPixmap(whiteBar);
    ui->label_3->setPixmap(search);
    ui->label_4->setPixmap(scan);
    ui->label_5->setPixmap(credit);
    ui->label_7->setPixmap(seats);
    ui->label_8->setPixmap(baggage);
    ui->label_9->setPixmap(flightInfo);
    ui->label_6->setPixmap(welcome);
    ui->startBtn->setIcon(btnRed);

    ui->widgetStart->show();
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");

}

flightKiosk::~flightKiosk()
{
    delete ui;
}

void flightKiosk::on_pushBtn1_clicked()
{
    ui->widget1->show();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_startBtn_clicked()
{
    ui->widget1->show();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();
    ui->widgetStart->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_pushBtn2_clicked()
{
    ui->widget1->hide();
    ui->widget2->show();
    ui->widget3->hide();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_pushBtn3_clicked()
{
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->show();
    ui->widget4->hide();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
}

void flightKiosk::on_pushBtn4_clicked()
{
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->show();

    ui->pushBtn1->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn2->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn3->setStyleSheet("color: white;"
                                "background-color: rgb(119, 152, 203); "
                                "border: none;");
    ui->pushBtn4->setStyleSheet("color: white;"
                                "background-color: rgb(205, 25, 52); "
                                "border: none;");
}

void flightKiosk::on_closeBtn_clicked()
{
    ui->widgetStart->show();
    ui->widget1->hide();
    ui->widget2->hide();
    ui->widget3->hide();
    ui->widget4->hide();
}
