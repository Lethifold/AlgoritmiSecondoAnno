#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

#define M 4

class Interface {
private:
	string _firstLine;
	string _menuPoint [M];
public:
	Interface ();
	~Interface ();
	void setFirstLine (string line);
	void setMenuPoints (int p, string line); //Permette di settare i punti del menu
	void showMenu (); //Permette di stampare a video il menu
};

