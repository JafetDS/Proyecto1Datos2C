//
// Created by User on 10/5/2021.
//

#ifndef SERVER_CODEX_H
#define SERVER_CODEX_H
#include <string>
#include <boost/algorithm/string.hpp>
#include <winsock2.h>
#include <vector>
using namespace std;

class Codex {
public:
    Codex();
    vector<string> decodeType(string json);





};


#endif //SERVER_CODEX_H
