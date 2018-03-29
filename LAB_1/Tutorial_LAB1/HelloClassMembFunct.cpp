#include "HelloClassMembFunct.hpp"

HelloClassMembFunct::HelloClassMembFunct()
{
    _str_name = "Constructor from MEMBER FUNCTION";
}

HelloClassMembFunct::~HelloClassMembFunct()
{
    //dtor
}

void HelloClassMembFunct::setName (std::string s)
{
   _str_name = s;
}

std::string HelloClassMembFunct::getName ()
{
    return _str_name;
}

void HelloClassMembFunct::print()
{
    std::cout << "Hello World from MEMBER FUNCTION!!! I am "<< _str_name << std::endl;
}


/*
THIS IS THE CORRECT CPP CLASS DEFINITION
*/
