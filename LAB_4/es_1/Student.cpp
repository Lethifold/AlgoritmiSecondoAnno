#include "Student.h"



Student::Student () {
	_grade [G] = { 0 };
	_exams = 0;
}

Student::~Student () {
}

void Student::setBasicDate (string dates) {
	stringstream date;

	date << dates; //Trasformo la mia stringa in uno stream
	date >> _name >> _surname >> _exams;

}



void Student::setGrades (string grades) {

	stringstream grade;

	grade << grades; //Trasformo la mia stringa in uno stream
	if ( _exams == 0 ) cerr << "Errore nella memoria: lo studente non ha sostenuto esami";
	for ( int i = 0; i < _exams; i++ ) {
		grade >> _grade [i]; //Acquisisco i vari interi dallo stream della stringa
	}
}

string Student::getSurname () {
	return _surname;
}


float Student::avg () {
	float sum = 0;

	for ( int i = 0; i < _exams; i++ ) {
		sum += _grade [i];
	}

	return sum / _exams;
}


int Student::maxGrade () {
	int top=0;
	for ( int i = 0; i < _exams; i++ ) {
		if ( top < _grade [i] ) top = _grade [i];
	}
	return top;
}

int Student::minGrade () {
	int top = 0;
	for ( int i = 0; i < _exams; i++ ) {
		if ( top > _grade [i] ) top = _grade [i];
	}
	return top;
}

float Student::stdDed () {

	return 0.0f;
}

string Student::getName () {

	return _name;
}




