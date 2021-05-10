#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "spliter.h"
#include <boost/algorithm/string.hpp>
#include <Server.h>
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

    string s = "int <hell = 0;";

    cout<<boost::algorithm::contains(s, "p")<<endl;
    vector <string>fields;
    split( fields, s, boost::is_any_of("=") );

    for (size_t i = 0; i < fields.size(); i++){
        cout << fields[i] << endl;
    }






}

