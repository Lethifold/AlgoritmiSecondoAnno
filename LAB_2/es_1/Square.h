#pragma once

class Square {
private:
	char _theme;
	int _dimension;
public:
	Square ();
	~Square ();
	// Print a square of dimension*dimension
	int print ();
	// Get the dimensions of a square
	int getDimension ();

};

