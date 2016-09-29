#include "login_window.h"
#include "ui_login_window.h"

Login_Window::Login_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login_Window)
{
    ui->setupUi(this);
}

Login_Window::~Login_Window()
{
    delete ui;
}

void Login_Window::on_btnLogin_clicked()
{
    QString username, password;

    username = ui->leUsername->text();
    password = ui->lePassword->text();

    if(ui->leUsername->text() == "" && ui->lePassword->text() == "")
        ui->lblLoginFailure->setText("Please enter username and password");
    else
    {

        QString sqlStatement = QString("SELECT Email FROM user WHERE Email = '%1' AND Password = '%2'").arg(username).arg(password);
        QSqlQuery query;
        query.prepare(sqlStatement);
        query.exec();
        query.next();

        if(query.isValid())
        {
            window = new MainWindow();
            window->show();
            this->close();
        }
        else
            ui->lblLoginFailure->setText("Incorrect username and password");

    }
}


