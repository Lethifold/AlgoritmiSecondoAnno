#ifndef HELLOCLASSMEMBFUNCT_H
#define HELLOCLASSMEMBFUNCT_H

#include <iostream>

class HelloClassMembFunct
{
    public:

        HelloClassMembFunct();
        ~HelloClassMembFunct();

        void setName (std::string s);
        std::string getName ();
        void print();

    private:
        std::string _str_name;
};

#endif // HELLOCLASSMEMBFUNCT_H


/*
THIS IS THE CORRECT HPP CLASS DEFINITION
*/
