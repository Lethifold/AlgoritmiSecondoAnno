#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Esami {
private:
	string _ex_name;
	int _votation;
	int _credits;
	bool _prenote;
public:
	Esami ();
	~Esami ();
	string getName (string name);
	int getVotation (int vote);
	int getCredits (int credits);
	bool getPrenote (bool prenote);
	bool getPrenote ();
};

