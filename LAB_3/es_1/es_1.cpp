#include <iostream>
#include <fstream>
#include <sstream>
#include "logger.h"
#include <ctime>
using namespace std;

int main(){

	ofstream myFileO ("txtt.txt");
	ifstream myFileI ("txt1.txt");
	string linea;
	Logger logger;
	string file;
	
	file = "text1.txt";
	myFileI.open (file);
	
	myFileI >> linea;

	myFileI.close ();

	logger.getUsername ();

	file = "txtt.txt";
	myFileO.open (file);

	myFileO << linea;
	
	myFileO.close ();

	logger.print (linea);

	getchar ();
	getchar ();


    return 0;
}

