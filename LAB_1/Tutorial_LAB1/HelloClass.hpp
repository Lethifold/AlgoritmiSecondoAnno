#ifndef HELLOCLASS_H
#define HELLOCLASS_H

#include <iostream>

class HelloClass
{
    public:
        HelloClass()
        {
            //_str_name = "Constructor from CLASS";
        }

        ~HelloClass()
        {
            //
        }

        void setName (std::string s)
        {
            _str_name = s;
        }

        std::string getName ()
        {
            return _str_name;
        }

        void print()
        {
            std::cout << "Hello World from CLASS!!! I am "<< _str_name << std::endl;
        }

    private:
        std::string _str_name ;
};

#endif // HELLOCLASS_H


/*

REMEBER: THIS IS NOT THE CORRECT CLASS USAGE
THE BEST WAY IS TO PUT THE FUNCTION CODE IN THE CPP FILE !!!

THIS IS JUST AN INTERMEDIATE EXAMPLE TOWARD THE CORRECT SOLUTION

KEEP CALM AND CARRY ON

*/
