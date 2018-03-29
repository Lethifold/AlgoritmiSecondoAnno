#include "Monitor.h"

Monitor::Monitor () {
	m [MAXR] [MAXC] = {};
	row_number = 0;
	col_number = 0;
	row_coordinate = 0;
	col_coordinate = 0;
	shape_dim = 0;
}

Monitor::~Monitor () {
}

int Monitor::setRow () {
	cout << "Insert how many row you'd like to play with (MAX 50): ";
	cin >> row_number;

	while ( row_number > MAXR ) {
		cout << "The number you've inserted is incompatible. Try again!" << endl;
		cout << "Rows: ";
		cin >> row_number;
	}
	return 0;
}

int Monitor::setCol () {
	cout << "Insert how many columns you'd like to play with (MAX 50): ";
	cin >> col_number;

	while ( col_number > MAXC ) {
		cout << "The number you've inserted is incompatible. Try again!" << endl;
		cout << "Columns: ";
		cin >> row_number;
	}
	return 0;
}

int Monitor::howManyShapes () {
	int many_shapes;

	cout << "Insert how many shapes you'd like to insert in your monitor: ";
	cin >> many_shapes;

	return many_shapes;
}

// This function allows you to print in the screen the  shape and the number related
int Monitor::printMenu () {
	int menuresponso;
	cout << "MENU" << endl;

	cout << "If you'd like to insert a square shape type 1" << endl;
	cout << "If you'd like to insert a triangular shape type 2" << endl;
	cout << "If you'd like to insert a rhombus shape type 3" << endl << endl;

	cin >> menuresponso;

	while ( menuresponso != 1 && menuresponso != 2 && menuresponso != 3 ) {
		cout << "The number you've inserted is incompatible. Try again!";
		cin >> menuresponso;
	}
	return menuresponso;
}

// This function gets the dimension of the shape to put in te 0-rectangular 
int Monitor::getShapeDim () {
	cout << "Insert the dimension of the shape: ";
	cin >> shape_dim;
	return shape_dim;
}

// // This function gets the coordinates of the left top of shape
int Monitor::getCoordinates () {
	cout << "Insert in which row you'd like your shape is placed: ";
	cin >> row_coordinate;

	while ( row_number-row_coordinate < 0) {
		cout << "The number you've inserted is incompatible. Try again!";
		cin >> row_coordinate;
	}

	cout << "Insert in which column you'd like your shape is placed: ";
	cin >> col_coordinate;

	while ( col_number - col_coordinate < 0 ) {
		cout << "The number you've inserted is incompatible. Try again!";
		cin >> col_coordinate;
	}

	return 0;
}

// This function inserts in the 0 rectangular N x M  a trinagular shape in the (x,y) position
int Monitor::addTriangle () {
	int k = 1, b = 0;

	for ( int r = row_coordinate; r < (row_coordinate + shape_dim); r++ ) {
		for ( int c = col_coordinate- b; c < (col_coordinate + k); c++ ) {
			m [r] [c] += 1;
		}
		k++;
		b++;
	}
	return 0;
}

// This function inserts in the 0 rectangular N x M  a square shape in the (x,y) position
int Monitor::addSquare () {
	for ( int r = row_coordinate; r < (row_coordinate + shape_dim); r++ ) {
		for ( int c = col_coordinate; c < (col_coordinate + shape_dim); c++ ) {
			m [r] [c] += 1;
		}
	}
	return 0;
}

// This function inserts in the 0 rectangular N x M  a rhombus shape in the (x,y) position
int Monitor::addRhombus () {
	int r, k = 1, b = 0;

	for ( r = row_coordinate; r < (row_coordinate + shape_dim); r++ ) {
		for ( int c = col_coordinate - b; c < (col_coordinate + k); c++ ) {
			m [r] [c] += 1;
		}
		k++;
		b++;
	}

	int mid = r;

	for ( r ; r < (mid*2)+1; r++ ) {
		for ( int c = col_coordinate - b; c < (col_coordinate + k); c++ ) {
			m [r] [c] += 1;
		}
		k--;
		b--;
	}
	return 0;
}

void Monitor::printMatrix () {
	for ( int i = 0; i < row_number; i++ ) {
		for ( int j = 0; j < col_number; j++ ) {
			cout << m [i] [j] << " ";
		}
		cout << endl;
	}
}

int Monitor::stay () {
	getchar ();
	getchar ();
	return 0;
}


