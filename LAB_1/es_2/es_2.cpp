#include <iostream>
#include "Numeri.h"

int main()
{
	Numeri number;

	number.get_number ();
	number.print_nuber ();

	//condizione utilizzata solamente per tenere il terminale aperto.
	while ( true ) getchar ();
    return 0;
}

