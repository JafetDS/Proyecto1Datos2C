//
// Created by User on 10/5/2021.
//

#ifndef SERVER_MEMORY_H
#define SERVER_MEMORY_H
#include <iostream>
using namespace  std;
class Memory {
public:
    Memory();
    int N
    double Vdoble= malloc(sizeof(double));
    int Vint= malloc(sizeof(int));
    char Vchar= malloc(sizeof(char));
    float Vfloat= malloc(sizeof(int));
    double Vdouble= malloc(sizeof(double));

    void clean();

    void insert(String data);




};


#endif //SERVER_MEMORY_H
