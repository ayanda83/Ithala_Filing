#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <QWidget>
#include <QString>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlTableModel>
#include "mainwindow.h"

namespace Ui {
class Login_Window;
}

class Login_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Login_Window(QWidget *parent = 0);
    ~Login_Window();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::Login_Window *ui;
    MainWindow* window;
};

#endif // LOGIN_WINDOW_H
