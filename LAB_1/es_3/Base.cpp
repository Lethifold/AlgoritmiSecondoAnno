#include "Base.h"
#include <iostream>

void Base::read (int k) {
	int i, val = 1;

	link = 1; //Valore di controllo per verificare che la funzione read sia usata prima della funzione print
	counter+=k; //Aggiorno il contatore di valori immessi mediante la funzione read
	std::cout << "Insert " << k << "integer with a space between them" << std::endl;


	for ( i=0; i<k; i++ ) {

		std::cin>>num; //L'utente inserisce un numero
		
		if ( num < val ) {
			std::cout<<"Error! number must be greater than 1. Retry! "<<std::endl;
			i--;
		}
		else {
			sum += num; //Calcolo la somma di tutti i valori immessi mediante la funzione read
		}
	}
}

void Base::read () {
	int val = 1;
	std::cout << "Insert an integer grater than 1" << std::endl;
	std::cin>>num;
	
	if ( num < val ) {
		std::cout<<"Error! number must be greater than 1! "<<std::endl;
	}
	else {
		link = 1; //Valore di controllo per verificare che la funzione read sia usata prima della funzione print
		counter += 1; //Aggiorno il contatore di valori immessi mediante la funzione read
		sum += num; //Calcolo la somma di tutti i valori immessi mediante la funzione read
	}
}
void Base::print () {
	if ( link==0 ) {
		std::cout<<"Error, no number has been read yet!"<<std::endl;
		//Chiedere come ritardare la chiusura l'avviamento della funzione exit
	}
	else {
		average = (sum/counter); //Calcolo la media dei valori

		std::cout << "The number of innteger inserted is: " << counter << std::endl;
		std::cout<<"The sum of all values inserted is: "<<sum<<std::endl;
		std::cout<<"The average of all vaues inserted is: "<<average<<std::endl;
		std::cout << std::endl;

	}
	
}
