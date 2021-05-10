#include "Server.h"

Server::Server() {
    WSAStartup(MAKEWORD(2,0), &WSAData);
    server = socket(AF_INET, SOCK_STREAM, 0);

    serverAddr.sin_addr.s_addr = inet_addr("10.0.0.10");
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(5555);

    connect(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
    cout << "Connected to server!" << endl;
}

string Server::Recibir() {
    recv(client, buffer, sizeof(buffer), 0);
    cout << "El cliente dice: " << buffer << endl;
    string buf=buffer;
    memset(buffer, 0, sizeof(buffer));
    return buf;
}

void Server::Enviar(char mensaje) {
    this->buffer[0] = mensaje;
    send(client, buffer, sizeof(buffer), 0);
    memset(buffer, 0, sizeof(buffer));
    cout << "Mensaje enviado!" << endl;
}

void Server::CerrarSocket() {
    closesocket(client);
    cout << "Socket cerrado, cliente desconectado." << endl;
}
