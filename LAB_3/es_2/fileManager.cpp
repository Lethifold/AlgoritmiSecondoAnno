#include "FileManager.h"


FileManager::FileManager () {
	_minumum = 0;
	_maximum = 0;
	_average = 0.0f;
	_std_dev = 0.0f;
}


FileManager::~FileManager () {
}


string FileManager::getFileName () {
	cout << "Inserire il nome del file da dove prelevare i valori" << endl;
	cin >> _file_name;
	return _file_name;
}


int FileManager::min () {
	int min = values [0];
	for ( int i = 1; i < N; i++ ) {
		if ( min > values [i] ) {
			min = values [i];
		}
	}
	return min;
}


int FileManager::max () {
	int max = values [0];
	for ( int i = 1; i < N; i++ ) {
		if ( max < values [i] ) {
			max = values [i];
		}
	}
	return max;
}


float FileManager::avg () {
	//Per evitare di sprecare spazio ho usato una variabile sola
	int avg = 0;
	for ( int i = 0; i < N; i++ ) {
		avg += values [i];
	}
	avg = avg / N;
	return avg;
}


float FileManager::stdev () {
	float avgsq = 0;
	for ( int i = 0; i < N; i++ ) {
		avgsq += pow ((5 - values [i]), 2);
	}
	avgsq = (sqrt (avgsq)/N);
	return avgsq;
}


int FileManager::getFileCont (ifstream& myFile) {
	myFile.open (_file_name);
	if ( myFile.is_open () ) {
		for ( int i = 0; i < N; i++ ) {
			myFile >> values [i];
		}
	}
	else {
		cout << "Errore, il file non e' stato aperto correttamente" << endl;
		getchar ();
		return 1;
	}
	return 0;
}


int FileManager::seeCont () {
	int i;

	for ( i = 0; i < N; i++ ) {
		cout << "\t"<< values [i];
	}
	cout << endl;
	return i;
}
