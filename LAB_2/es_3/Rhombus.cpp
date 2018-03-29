#include "stdafx.h"
#include "Rhombus.h"


Rhombus::Rhombus () {
	 
	_dimension = 0;
	//  _ = 0;
	_theme = 0;
}


Rhombus::~Rhombus () {
}


int Rhombus::getDimension () {
	cout << "Insert a dimension for your rhombus! N: " << endl;
	cin >> _dimension;
	cout << "Insert a char for your rhombus" << endl;
	cin >> _theme;
	cout << endl;
	return 0;
}


int Rhombus::print () {
	int k = 1, l = 1;
	int N = ((_dimension * 2) - 1) / 2;

	for ( int i = 0; i <N ; i++ ) { //Scende le righe fino a metà
		for ( int j = k; j < N+1; j++ ) { //Stampo gli spazi
			cout << " ";
		}
		for ( int m = 0; m < l; m++ ) { //Stampo il theme
			cout << _theme;

		}
		k++;
		l+=2;
		cout << endl;

	}

	//k=N l=N
	for ( int i = 0; i < N+1; i++ ) { //Scende le righe dalla metà fino alla fine
		for ( int j = k; j <N+1; j++ ) { //Stampo gli spazi
			cout << " ";
		}
		for ( int m = 0; m <l; m++ ) { //Stampo il theme
			cout << _theme;

		}
		k--;
		l -= 2;
		cout << endl;
	}
	return 0;
}
