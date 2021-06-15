#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPrinter>
#include <string>
#include<iostream>
#include<stdlib.h>
#include <vector>
#include "Server.h"
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Thread;

class MainWindow : public QMainWindow
{
    Q_OBJECT // Very imortant

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Run_clicked();

    void on_Next_clicked();

    void on_Stop_clicked();

private:
    Ui::MainWindow *ui;
    string CodeText;
    Server *Servidor;
    Thread *sThread;
    string logstr;
    string logmsj;
    string ramstr;
    string rammsj;
    string outstr;
    string outmsj;
    vector<string> Vector;
    int N;
    int top;


};
#endif // MAINWINDOW_H
