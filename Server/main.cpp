#include <iostream>
#include "Server.h"
#include "Codex.h"
#include "Memory.h"

#include <string>
#include <windows.h>
int main() {
    std::cout << "Hello, World!" << std::endl;

    Server *Servidor = new Server();


    char msj;
    string Rmsj;
    while (true) {
        cout << "Esperando mensaje" << endl;
        Rmsj = Servidor->Recibir();
        Memory *memoria = new Memory;
        memoria.insert(Rmsj);

        cout << Rmsj << endl;
        cout << "Inserta mensaje ";
        Codex *cod = new Codex();

        msj = cod->decodeType(Rmsj);

        Servidor->Enviar(msj);
        Sleep(2000);
    }
        return 0;
}
