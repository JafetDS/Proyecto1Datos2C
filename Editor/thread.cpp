#include "thread.h"
#include <QtCore>
#include <QDebug>
#include <iostream>
#include<stdlib.h>




using namespace std;
Thread::Thread(QObject *parent, string* lstr, string* rstr, string* ostr): QThread(parent),
    logstr(lstr),
    ramstr(rstr),
    outstr(ostr)


{
        Servidor = new Server(*lstr);
}

void Thread::sendmsj(string codeText){
    Servidor->Enviar(codeText);
}

void Thread::run(){



        //emit numero(i);
        string messeje;
        messeje = Servidor->Recibir();

        if (-1!=messeje.find(">")){
            *outstr = *outstr + (string)"\n" + messeje;
            emit valout(QString::fromStdString(*outstr));
        }else{

            *ramstr = *ramstr + (string)"\n" + messeje;

            emit valram(QString::fromStdString(*ramstr));

        }



     //   *logstr = *logstr + (string)"\n" + "mensaje recibido";
      //  emit vallog(QString::fromStdString(*logstr));
        msleep(100);
        //Servidor->CerrarSocket();


}
