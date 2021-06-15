#ifndef SPLITER_H
#define SPLITER_H
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

class Spliter
{
public:
    Spliter();
    static string former;
    static string nameVar(string Line);
    static string valVar(string Line);
    static string TypeVar(string Line);
    static string dir(string Line);
    static void erasesubstr(std::string & mainStr, const std::string & toErase);

};

#endif // SPLITER_H
