#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <string>
#include <winsock2.h>
using namespace std;
class Server
{
public:

    Server();

    WSADATA WSAData;
    SOCKET server, client;
    SOCKADDR_IN serverAddr, clientAddr;
    char buffer[512];

    string Recibir();
    void Enviar(char mensaje);
    void CerrarSocket();

};

#endif // SERVER_H
