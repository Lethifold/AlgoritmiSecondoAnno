#include "Numeri.h"
#include <iostream>



// Riceve un numero da stdin e lo innserisce in un oggetto
int Numeri::get_number () {
	std::cin >> num;
	return 0;
}


int Numeri::print_nuber () {
	int i;

	for ( i = 0; i < num; i++ ) {
		std::cout << i << std::endl;
	}
	
	return 0;
}
