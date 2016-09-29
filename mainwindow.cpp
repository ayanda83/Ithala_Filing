#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringListModel>
#include <QStringList>
#include <QSize>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QSize size(100, 20);
    //ui->listView_Main->setGridSize(size);


    ui->listView_Main->isWrapping();
    ui->listView_Main->setFlow(QListView::TopToBottom);
    ui->listView_Main->setViewMode(QListView::IconMode);
    ui->listView_Main->setResizeMode(QListView::Adjust);
    ui->listView_Main->setUniformItemSizes(true);

    QStringListModel* model;
    model = new QStringListModel(this);

    QStringList list;

    list    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing and Olwethu"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
            << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                        << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    << "Ayanda" <<"Khanyile" <<"Blessing"<<"Ayanda" <<"Khanyile" <<"Blessing"
                                    <<"lastOne"<<"Olwethu"<<"Olwethu and Baba";

    model->setStringList(list);
    ui->listView_Main->setModel(model);
//    ui->listView_Main->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);


}

MainWindow::~MainWindow()
{
    delete ui;
}
