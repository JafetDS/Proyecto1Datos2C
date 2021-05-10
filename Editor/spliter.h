#ifndef SPLITER_H
#define SPLITER_H
#include <string>

using namespace std;

class Spliter
{
public:
    Spliter();
    static string nameVar(string Line);
    static string valVar(string Line);
    static string direcVar(string Line);
};

#endif // SPLITER_H
