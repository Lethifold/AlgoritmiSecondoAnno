#include <iostream>
#include "Base.h"

int main()
{
	Base base;

	//shedule of the program
	//base.print ();
	base.read ();
	base.print ();
	base.read (4);
	base.print ();
	getchar (stdin); getchar (stdin);
    return 0;
}

