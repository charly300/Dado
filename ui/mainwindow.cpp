#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dado = new Dado;
    controller = new ControllerDado(dado, ui->frame_dado);
}

MainWindow::~MainWindow()
{
    delete dado;
    delete controller;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    controller->shuffle();
}
