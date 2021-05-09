#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "spliter.h"

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


void MainWindow::on_Run_clicked()
{
    this->CodeText = ui->Editor->toPlainText().toStdString();

    cout<<Spliter::nameVar( CodeText)<<endl;

    cout<<Spliter::valVar(CodeText)<<endl;

    cout<<Spliter::direcVar(CodeText)<<endl;




}

