#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_NumberUpButton_clicked() {
    counter++;
    ui->countLabel->setText(QString::number(counter));

    if(counter == 100) {
        counter = 0;
    }
    
}

void MainWindow::on_NumberDownButton_clicked() {
    
    if(counter <= 0) {
        counter = 0;
    }
    else {
        counter--;
        ui->countLabel->setText(QString::number(counter));
    }
    
}

void MainWindow::on_ResetButton_clicked() {
    counter = 0;
    ui->countLabel->setText(QString::number(counter));
}

MainWindow::~MainWindow()
{
    delete ui;
}
