//
// Created by User on 10/5/2021.
//

#include "Codex.h"


Codex::Codex() {

}

vector<string> Codex::decodeType(string json) {
    vector <string>fields;
    split( fields, s, boost::is_any_of(",") );
    split( fields[0], s, boost::is_any_of("{") );
    split( fields[1], s, boost::is_any_of("}") );

    return fields;

}