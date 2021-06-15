#include "spliter.h"

Spliter::Spliter()
{

}


string Spliter::nameVar(string Line){
    std::vector <string>fields;
    split( fields, Line, boost::is_any_of("="));
    std::vector <string>fields2;
    split( fields2, fields[0], boost::is_any_of(" "));
    return  fields2[1];
}

string Spliter::valVar(string Line){
    std::vector <string>fields;
    split( fields, Line, boost::is_any_of("="));
    return fields[1];

}

string Spliter::TypeVar(string Line){
    if (-1!=Line.find("print")){
        return "print";
    }
    if (-1!=Line.find("int")){
        return "int";
    }

    if (-1!=Line.find("float")){
        return "float";
    }

    if (-1!=Line.find("char")){
        return "char";
    }

    if (-1!=Line.find("double")){
        return "double";
    }



    return " ";


}

string Spliter::dir(string Line){
    if (-1!=Line.find("<")){
        return "point";
    }else{
        return "val";
    }
}

void erasesubstr(std::string & mainStr, const std::string & toErase)
{
    // Search for the substring in string
    size_t pos = mainStr.find(toErase);
    if (pos != std::string::npos)
    {
        // If found then erase it from string
        mainStr.erase(pos, toErase.length());
    }
}
