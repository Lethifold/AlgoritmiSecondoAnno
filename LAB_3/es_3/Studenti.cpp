#include "Studenti.h"



Studenti::Studenti () {
}


Studenti::~Studenti () {
}

int Studenti::getProfile () {
	int i = 0;
	string name;
	int vote;
	int credits;
	bool prenote;

	cout << "Insert the name of the student whose you'd like see/change something";
	cin >> _name;
	cout << "Insert the name of the file where exams are stored";
	cin >> _file;
	_myFile.open( _file);
	if ( _myFile.is_open () ) {
		while ( !_myFile.eof () ) {
			cin >> name >> prenote >> vote >> credits;
			exam[i].getName (name);
			exam[i].getPrenote (prenote);
			exam[i].getVotation (credits);
			exam[i].getCredits (credits);

			cout << exam [i].getName ();
			cout << exam [i].getPrenote ();
			cout << exam [i].getVotation ();
			cout << exam [i].getCredits ();
			i++;
		}
	}
	else {
		cout << "Error opening file" << endl;
	}
	
	return 0;
}

int Studenti::getAvg () {
	// TODO: Add your implementation code here.
	return 0;
}


int Studenti::getWeightedAvg () {
	// TODO: Add your implementation code here.
	return 0;
}


int Studenti::getMaxScore () {
	// TODO: Add your implementation code here.
	return 0;
}


int Studenti::getMinScore () {
	// TODO: Add your implementation code here.
	return 0;
}


