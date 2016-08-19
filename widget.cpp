#include "widget.h"
#include "ui_widget.h"
#include "M5Library.h"



#define IS_TCP_CLIENT 0

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // show lib log
    connect(&M5Lib(),SIGNAL(signalLog(QString)),this,SLOT(slotLog(QString)));
    //test lib link
    qDebug()<<M5Lib().LibTest();
#if 1
    //====================DB
    //open db
    bool bDbOpen=M5Lib().database()->openDb("M5","root","111111","192.168.0.113","3306");

    if(bDbOpen)
    {
        //get table data
        QList<QVariantList>dList= M5Lib().database()->getTable("OrdersOld");

        for(int i=0;i<dList.length();i++)
        {
            for(int j=0;j<dList[i].length();j++)
                qDebug()<<dList[i][j];
        }

        //close db
        M5Lib().database()->closeDb();
    }
#endif
    //====================TCP IP

#if IS_TCP_CLIENT

    QByteArray arrInput;
    arr.append("AAAA");
    QByteArray arrOutput;
    M5Lib().connectHost("192.168.0.113","60000",arrInput,arrOutput);


#else
    //start listen

    M5Lib().network()->runTcpServer("60000");

    //get read all
    connect(M5Lib().network(),SIGNAL(signalReadAll(QByteArray)),this,SLOT(slotServerReadAll(QByteArray)));

    QByteArray arrRe;

    arrRe.append("get data");
    //retrun client
    //  M5Lib().recallClient(arrRe);


#endif


    //=========================

}

Widget::~Widget()
{
    delete ui;
}

void Widget::slotLog(QString st)
{
    qDebug()<<" M5Lib Log ::  "<<st;
}

void Widget::slotServerReadAll(QByteArray arr)
{

    QString sIn=arr;

    QByteArray arrReturn;

    arrReturn.append("OK get:: ABC");

    sIn=sIn.replace("\n","");
    sIn=sIn.replace("\r","");

    if(sIn=="ABC")
        M5Lib().network()->recallClient(arrReturn);

}
