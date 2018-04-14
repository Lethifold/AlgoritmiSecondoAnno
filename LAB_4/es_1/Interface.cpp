#include "Interface.h"



Interface::Interface () {
}


Interface::~Interface () {
}

void Interface::setFirstLine (string line) {
	_firstLine = line;
}

void Interface::setMenuPoints (int p, string line) {
	_menuPoint [p - 1] = line;
}

void Interface::showMenu () {
	cout << _firstLine << endl;

	for ( int i = 0; i < M; i++) {
		cout << _menuPoint [i] << endl;
	}
}
