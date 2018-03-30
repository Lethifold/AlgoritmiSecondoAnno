#include "Esami.h"



Esami::Esami () {
	_votation = 0;
	_credits = 0;
}


Esami::~Esami () {
}

string Esami::getName ( string name = "z" ) {
	if ( name == "z" ) {
		return _ex_name;
	}
	else {
		_ex_name = name;
		return _ex_name;
	}
}


int Esami::getVotation ( int vote = -1 ) {
	if ( vote == -1 ) {
		return _votation;
	}
	else {
		_votation = vote;
		return _votation;
	}
}


int Esami::getCredits ( int credits = -1 ) {
	if ( credits == -1 ) {
		return _credits;
	}
	else {
		_credits = credits;
		return _credits;
	}
}


bool Esami::getPrenote (bool prenote) {
	_prenote = prenote;
	return _prenote;
}

bool Esami::getPrenote () {
	return _prenote;
}