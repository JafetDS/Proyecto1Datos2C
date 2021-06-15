#include "mainwindow.h"
#include <QApplication>
#include "Server.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <thread.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.show();




    return a.exec();// loop aplication




 }
