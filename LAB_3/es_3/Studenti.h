#pragma once
#include <fstream>
#include "Esami.h"
#define N 20

class Studenti {
private:
	string _name;
	string _file;
	ifstream _myFile;
	Esami exam [N];
public:
	Studenti ();
	~Studenti ();
	int getAvg ();
	int getWeightedAvg ();
	int getMaxScore ();
	int getMinScore ();
	int getProfile ();
};

