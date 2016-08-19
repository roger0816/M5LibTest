#ifndef M5LIB_H
#define M5LIB_H
#include <QObject>
#include <QDebug>
#include <QSqlDatabase>
#include <QVariantList>
#include "Network.h"
#include "DataBase.h"

#define M5Lib M5Library::Instance




using namespace _db;

class M5Library :public QObject
{
Q_OBJECT
public:
    M5Library();
    QString LibTest();

    Network *network();

    DataBase *database();

    /**
     * @brief Instance singleton design pattern
     * @return
     */
    static M5Library& Instance()
    {
        if(m_pInstance==0)
            m_pInstance=new M5Library();
        return *m_pInstance;
    }



//    //TCP Server==========================================================

//    void runTcpServer(QString sPort);

//    void recallClient(QByteArray arr);

//    //SQL================================================================
//    /**
//     * @brief dbOpen
//     * @param sDbName
//     * @param sIp
//     * @param sPort
//     * @param sUser
//     * @param sPassword
//     * @return
//     */
//    bool openDb(QString sDbName, QString sUser, QString sPassword,QString sIp, QString sPort="3306",_db_type type=_mysql);

//    void closeDb();

//    /**
//     * @brief getCurrentDb
//     * @return
//     */
//    QSqlDatabase& getCurrentDb();

//    QList<QVariantList> getTable(QString sTableName);




private:
    static M5Library* m_pInstance;

    Network *m_network;

    DataBase *m_database;

signals:
    void signalLog(QString st);


   // void signalTcpServerReadAll(QByteArray arr);



};

#endif // M5LIB_H
