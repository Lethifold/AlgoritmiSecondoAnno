#pragma once
#include <iostream>
#include <ostream>
using namespace std;

class Rhombus {
public:
	Rhombus ();
	~Rhombus ();
private:
	int _dimension;
public:
//	char _;
private:
	char _theme;
public:
	int getDimension ();
	int print ();
};

