#include "flightinfo.h"
#include "ui_flightinfo.h"
//#include <QWebView>
//#include <QWebEngineView>
//#include <QtWebKitWidgets>
//#include <QtWebEngineWidgets>
//#include <QUrl>


    //   this is a simple application which contains a webview element where we can load a website
    //   change screen sizes, webpage zoom factor and URL's as needed.


flightInfo::flightInfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::flightInfo)
{
    ui->setupUi(this);

    //  using monitor
    //  "set geometry" is used to set the screen size needed for your application,
    //  in this case, the screen size is set to 1366x768
    ui->centralWidget->setGeometry(0,0,1366,768);
    //  this is the zoom factor to use in a web page,
    //  if a web page has a smaller resolution than your monitor, its possible to zoom in to fill the screen with the web page
    ui->webView_2->setZoomFactor(qreal(1.405));

    //  to use touchscreen 10" with resolution 1024x600
    //ui->centralWidget->setGeometry(0,0,1024,600);
    //ui->webView_2->setZoomFactor(qreal(0.75));

    //  there are 2 URL's as an example but any URL can be used

    //  EXAMPLE 1
    //  this is a Flight Information Display System(FIDS) demo screen made by fids3.com,
    //  in their website they have a few other options
    ui->webView_2->load(QUrl("http://217.160.92.85:8080/fids3/public?service=display&dispatcher=public&portal=public.public&operation=refresh&rowcount=10&template=public.displays.dep10-1366x768&fillup=true&ffgroup=FF_DEPARTURE&selection=FTYPE%20EQUAL%20TO%20%27D%27%20AND%20DPPUBLIC=%27YES%27&dpid=856499367.2464426134"));

    //  EXAMPLE 2
    //  this is a really cool demo showing a map like google maps, where we can see the location of airplanes in real time
    //ui->webView_2->load(QUrl("http://www.flightradar24.com/-23.96,-46.46/10"));
}

flightInfo::~flightInfo()
{
    delete ui;
}
