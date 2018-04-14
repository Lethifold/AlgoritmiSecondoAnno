#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

#define G 20


class Student {
public:
	Student ();
	~Student ();
	void setBasicDate (string dates);
	void setGrades (string grades);
	string getSurname ();
	string getName ();
	float avg ();
	int maxGrade ();
	int minGrade ();
	float stdDed ();
	
private:
	int _grade [G];
	string _surname;
	string _name;
	int _exams;
};

