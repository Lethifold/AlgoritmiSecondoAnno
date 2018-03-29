#include "Square.h"
#include <iostream>
#include <ostream>

using namespace std;

Square::Square () {
	dimension = 0;
	theme = 0;
}


Square::~Square () {
}
//Get dimension of the square
int Square::get_dimension () {
	cout << "Insert a dimension for your square! N: " << endl;
	cin >> dimension;
	cout << "Insert a char for your square" << endl;
	cin >> theme;
	return 0;
}

// Print a square of dimension*dimension
int Square::print () {

	for ( int i = 0; i < dimension; i++ ) {
		for ( int j = 0; j < dimension; j++ ) {
			cout << theme;
		}
		cout << endl;
	}
	return 0;
}


