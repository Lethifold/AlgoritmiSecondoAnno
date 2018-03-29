#pragma once

class Triangle {
private:
	char _theme;
	int _dimension;
public:
	Triangle ();
	~Triangle ();
	// Print a square of dimension*dimension
	int print ();
	// Get the dimensions of a square
	int getDimension ();

};