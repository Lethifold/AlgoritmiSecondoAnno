#pragma once

#include <iostream>
using namespace std;

#define MAXR 50
#define MAXC 50

class Monitor {
public:
	Monitor ();
	~Monitor ();
	int setRow ();
	int setCol ();
	// This function allows you to print in the screen the  shape and the number related
	int printMenu ();
	int getShapeDim ();
	//This function gets the coordinates in which the shape chosen must be
	int getCoordinates ();
	// This function inserts in the 0 rectangular N x M  a trinagular shape in the (x,y) position
	int addTriangle ();
	// This function inserts in the 0 rectangular N x M  a square shape in the (x,y) position
	int addSquare ();
	// This function inserts in the 0 rectangular N x M  a rhombus shape in the (x,y) position
	int addRhombus ();
	int stay ();
	void printMatrix ();

private:
	int row_number;
	int col_number;
	int row_coordinate;
	int col_coordinate;
	int shape_dim;
	int m [MAXR] [MAXC] = {};
	char _theme = '#';
public:
	int howManyShapes ();
};

