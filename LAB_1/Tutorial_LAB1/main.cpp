#include <stdio.h> // C
//#include <iostream> // C++
//#include "hello.hpp" // LIB
//#include "HelloClass.hpp" // CLASS
//#include "HelloClassMembFunct.hpp"// CLASS + MEMB.FUNC. STYLE

//void printHelloFunction (std::string str_name);
//using namespace std;

int main()
{
    /// C STYLE
    printf ("Hello World! - C Style\n");

    /// C++ STYLE
    //std::cout << "Hello World! - C++ Style" << std::endl;
    //cout << "Hello World! - C++ Style with namespace" << endl;

    /// FUNCTION STYLE
    //printHelloFunction("prof. Prinetto");

    /// LIB STYLE
    //printHelloLib("prof. Savino");


    //std::cout << std::endl << " - - - - - LET'S PLAY WITH CLASS - - - - -"<< std::endl;

    /// CLASS STYLE

    HelloClass helloObject;

    helloObject.print();
    cout << helloObject.getName() << endl;

    helloObject.setName("Francesco");
    helloObject.print();
    cout << helloObject.getName() << endl;
    

    //std::cout << std::endl << " - - - - - LET'S PLAY WITH CLASS: THE CORRECT WAY - - - - -"<< std::endl;

    /// CLASS + MEMB. FUNC. STYLE
    HelloClassMembFunct helloObjectMembFunct;

    helloObjectMembFunct.print();
    std::cout << helloObjectMembFunct.getName() << std::endl;

    helloObjectMembFunct.setName("COSÌ PASSO L'ESAME");
    helloObjectMembFunct.print();
    std::cout << helloObjectMembFunct.getName() << std::endl;


    return 0;
}


/*void printHelloFunction (std::string str_name)
{
    cout << "Hello World from function! I am "<< str_name << endl;
}
*/
