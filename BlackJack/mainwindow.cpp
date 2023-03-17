#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QPixmap>
#include "secondwindow.h"

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/background/Picture/table.jpg");

    ui->label->setPixmap(pix.scaled(800,600,Qt::KeepAspectRatioByExpanding));
    window = new SecondWindow();
    connect(window,SecondWindow::window,this,&MainWindow::show);
}


MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{

    window->show();
    this->close();
}

