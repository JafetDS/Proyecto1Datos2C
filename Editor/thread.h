#ifndef THREAD_H
#define THREAD_H
#include <QThread>
#include <QObject>
#include <string>
#include "Server.h"

using namespace std;

class Thread : public QThread
{
    Q_OBJECT
public:
     Thread(QObject *parent = nullptr,string* lstr = nullptr,string* rstr = nullptr,string* ostr = nullptr);
     void sendmsj(string);
     string* logstr;
     string* ramstr;
     string* outstr;
     Server *Servidor;

protected:
     void run() override;
signals:
     void vallog(QString);
     void valram(QString);
     void valout(QString);


};

#endif // THREAD_H
