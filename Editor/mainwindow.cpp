#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "spliter.h"
#include <boost/algorithm/string.hpp>
#include <Server.h>
#include <cstring>
#include "thread.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sThread = new Thread(this,&logstr,&ramstr,&logmsj);

    connect(sThread,&Thread::vallog,ui->Log,&QTextBrowser::setText);
    connect(sThread,&Thread::valram,ui->Ram,&QTextBrowser::setText);
    connect(sThread,&Thread::valout,ui->Out,&QTextBrowser::setText);

    N = 0;


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Run_clicked()
{

     ui->Log->setText(QString::fromStdString(logstr));
     this->CodeText = ui->Editor->toPlainText().toStdString();
     std::vector <string>fields;

     Vector = fields;
     split( Vector, CodeText, boost::is_any_of(";") );

     for (size_t i = 0; i < Vector.size(); i++){
         cout << Vector[i] << endl;
     }

     top = (int)Vector.size();


//    cout<<Spliter::nameVar( CodeText)<<endl;

//    cout<<Spliter::valVar(CodeText)<<endl;

//    cout<<Spliter::direcVar(CodeText)<<endl;

//    string s = "int <hell = 0;";

//    cout<<boost::algorithm::contains(s, "p")<<endl;
//    vector <string>fields;
//    split( fields, s, boost::is_any_of("=") );

//    for (size_t i = 0; i < fields.size(); i++){
//        cout << fields[i] << endl;
//    }






}


void MainWindow::on_Next_clicked()
{

  //  string codeText = ui->Editor->toPlainText().toStdString();


//    char meseje[512];
//    strcpy(meseje, CodeText.c_str());
    //cout<<Spliter::TypeVar(Vector[N])<<endl;
    if(N<top){

        string cd =Spliter::TypeVar(Vector[N])+ ","+Spliter::nameVar(Vector[N]) + "," +Spliter::valVar(Vector[N])+","+Spliter::dir(Vector[N]) ;
        cout<<cd<<endl;
        sThread->sendmsj(cd);

        logstr = logstr + (string)"\n" + logmsj;
        ui->Log->setText(QString::fromStdString(logstr));
        sThread->start();
        N = N+1;
    }

   //Servidor->CerrarSocket();


}


void MainWindow::on_Stop_clicked()
{
      //  sThread->start();


}

