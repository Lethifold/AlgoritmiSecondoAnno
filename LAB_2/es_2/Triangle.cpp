#include "stdafx.h"
#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle () {
}

Triangle::~Triangle () {
}

int Triangle::getDimension () {
	cout << "Insert a dimension for your triangle! N: " << endl;
	cin >> _dimension;
	cout << "Insert a char for your triangle" << endl;
	cin >> _theme;
	cout << endl;
	return 0;
}

int Triangle::print () {
	int k=1;

	for ( int i = 0; i < _dimension; i++ ) {
		
		for ( int j = 0; j < k; j++ ) {
			cout << _theme;
		}
		cout << endl;
		k++;
	}

	return 0;
}