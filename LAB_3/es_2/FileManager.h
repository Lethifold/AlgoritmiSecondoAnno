#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
#define N 20

class FileManager {
private:
	string _file_name;
	int _minumum;
	int _maximum;
	float _average;
	float _std_dev;

public:
	int values [N] {};
	FileManager ();
	~FileManager ();
	string getFileName ();
	int min ();
	int max ();
	float avg ();
	float stdev ();
	int getFileCont (ifstream& myFile);
	int seeCont ();
};

