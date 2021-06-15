#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <string>
#include <winsock2.h>
using namespace std;
class Server
{
public:

    Server(string &loger);

    WSADATA WSAData;
    SOCKET server;
    SOCKADDR_IN addr;
    char buffer[512];
    string* log;

    string Recibir();
    void Enviar(string mensaje);
    void CerrarSocket();

};

#endif // SERVER_H
