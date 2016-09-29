#include "login_window.h"
#include <QApplication>
#include "databaseconnection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login_Window w;
    DatabaseConnection::instance();
    w.show();

    return a.exec();
}
