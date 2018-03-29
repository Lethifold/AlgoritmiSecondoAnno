#include "Logger.h"



Logger::Logger () {
}


Logger::~Logger () {
}


int Logger::getUsername () {
	cout << "Insert your username" << endl;
	cin >> username;
	return 0;
}



int Logger::print (string message) {

	cout << '['<< username << ']' << message << endl;
	
	return 0;
}


