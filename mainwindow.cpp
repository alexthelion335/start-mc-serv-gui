#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

QString memory;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->lineEdit->text();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    memory = arg1;
}


void MainWindow::on_pushButton_clicked()
{
    system(("java -Xmx"+memory+"M -Xms"+memory+"M -jar server.jar").toStdString().c_str());
}



