// es_3.cpp: definisce il punto di ingresso dell'applicazione console.
//

#include "stdafx.h"
#include <iostream>
#include "Rhombus.h"


int main()
{
	Rhombus rhombus;

	rhombus.getDimension ();
	rhombus.print ();
	getchar ();
	getchar ();

    return 0;
}

