#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <assert.h>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

/*This class serves the purpose of initializing the database connection*/

class DatabaseConnection
{
public:
    static DatabaseConnection* instance()
    {
        if(!m_Instance) m_Instance = new DatabaseConnection;

        assert(m_Instance != NULL);
            return m_Instance;
    }

private:
    DatabaseConnection()
    {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("ithala_db");
        db.setUserName("root");
        db.setPassword("ayaman");

        if(db.open())
            qDebug() << "Opened" <<endl;
        else
            qDebug() << "Error "<< db.lastError().text();

    }


    static DatabaseConnection* m_Instance;
};

DatabaseConnection* DatabaseConnection::m_Instance = NULL;

#endif // DATABASECONNECTION_H
