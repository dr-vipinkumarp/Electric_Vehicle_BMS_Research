#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_2_clicked()
{
    QString qt = ui -> lineEdit -> text();
    QString qn = ui -> lineEdit_3 -> text();
    QString SoC = ui -> lineEdit_2 ->text();
    SoC = qn;


}

