#include <iostream>
#include "Server.h"
#include <string>
#include <stdlib.h>
#include <windows.h>
int main() {
    std::cout << "Hello, World!" << std::endl;

    Server *Servidor = new Server();


    char msj;
    string Rmsj;
    while (true) {
        cout << "Esperando mensaje" << endl;
        Rmsj = Servidor->Recibir();


        cout << Rmsj << endl;
        cout << "Inserta mensaje ";
        cin >> msj;

        Servidor->Enviar(msj);
        Sleep(2000);
    }
        return 0;
}
