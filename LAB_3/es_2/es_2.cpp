#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
#include "FileManager.h"
#define N 20

int main(){
	FileManager file;
	ifstream myFile;
	string fileName;

	//Apro il file
	file.getFileName ();
	//Importo i dati nel file
	file.getFileCont (myFile);
	//Stampo i valori acquisiti
	file.seeCont ();
	//Stampo il valore minore
	cout << "Il valore minimo nel file e': " << file.min () << endl;
	//Stampo il valore maggiore
	cout << "Il valore massimo nel file e': " << file.max () << endl;
	//Stampo la media
	cout << "Il valore medio nel file e': " << file.avg () << endl;
	//Stampo la deviazione standard
	cout << "La deviazione standard dei valori nel file e': " << file.stdev () << endl;

	//cout << values [0] << endl;
	getchar ();
	getchar ();
    return 0;
}

