#include "flightinfo.h"
#include "ui_flightinfo.h"
#include <QWebView>
#include <QtWebKitWidgets>
#include <QUrl>


flightInfo::flightInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::flightInfo)
{
    ui->setupUi(this);

    //using monitor
    ui->centralWidget->setGeometry(0,0,1366,768);
    ui->webView_2->setZoomFactor(qreal(1.405));

    //using touchscreen 10"
    //ui->centralWidget->setGeometry(0,0,1024,600);
    //ui->webView_2->setZoomFactor(qreal(0.75));

    //flight info page
    ui->webView_2->load(QUrl("http://217.160.92.85:8080/fids3/public?service=display&dispatcher=public&portal=public.public&operation=refresh&rowcount=10&template=public.displays.dep10-en-1366x768&fillup=true&ffgroup=FF_DEPARTURE&selection=FTYPE%20EQUAL%20TO%20%27D%27%20AND%20DPPUBLIC=%27YES%27&dpid=738674404.3291817673"));

    //flight map page
    //ui->webView_2->load(QUrl("http://www.flightradar24.com/-23.96,-46.46/10"));
}

flightInfo::~flightInfo()
{
    delete ui;
}
