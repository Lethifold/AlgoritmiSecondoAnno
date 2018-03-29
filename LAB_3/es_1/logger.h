#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

class Logger {
private:
	string username;
public:
	Logger ();
	~Logger ();
	int getUsername ();
	int print (string message);
};

