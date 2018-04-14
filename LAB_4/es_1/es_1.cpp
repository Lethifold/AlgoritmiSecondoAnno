#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

#include "Student.h"
#include "Interface.h"
#define S 50


int main () {

	//Oggetti
	Student ingEle [S];
	Interface interfaccia;
	ifstream myFile;
	string file;
	int getIn, c;
	string checkname, checksurname;

	//Inizio del programma

	//Richiedo il filename
	cout << "Inserire il nome del file dove sono contenuti i dati degli studenti" << endl;
	cin >> file;
	myFile.open (file);

	//Inizializzo un contatore per gli studenti
	int stud = 0;

	//Acquisisco i dati da elaborare
	if ( myFile.is_open() ) {
		while ( !myFile.eof () ) {
			string line;
			getline (myFile, line);
			ingEle [stud].setBasicDate (line);
			getline (myFile, line);
			ingEle [stud].setGrades (line);
			stud++; //Incremento il contatore per poter passare allo studente successivo
		}
	}

	//Setting del menu a schermo
	interfaccia.setFirstLine ("Please choose one of the following options : ");
	interfaccia.setMenuPoints (1, "[1] Simple report");
	interfaccia.setMenuPoints (2, "[2] Detailed report");
	interfaccia.setMenuPoints (3, "[3] Check student");
	interfaccia.setMenuPoints (4, "[4] Quit");

	//Stampo menu a schermo
	interfaccia.showMenu ();
	//Prendo la scelta dell'utente
	cin >> getIn;

	//Gestisco la scelta
	switch ( getIn ) {
		case 1:
			//Simple report
			for ( int k = 0; k < stud; k++ ) {
				cout << ingEle [k].getName () << ingEle [k].getSurname () << ingEle [k].avg () << endl;
			}
			break;
		case 2:
			//Detailed report
			cout << "NAME \t" << "SURNAME\t" << "AVERAGE\t" << "MAX GRADE\t" << "MIN GRADE\t" << endl;
			for ( int k = 0; k < stud; k++ ) {
				cout << ingEle [k].getName () <<"\t"<< ingEle [k].getSurname ()<<"\t"<< ingEle [k].avg () <<ingEle[k].maxGrade()<<"\t"<< ingEle [k].minGrade () << endl;
			}
			break;
		case 3:
			//Check student
			cout << "Inserire un nome e cognome dello studente da controllare" << endl;
			cin >> checkname >> checksurname;
			for ( int k = 0; k < stud; k++ ) {
				if ( checkname != ingEle [k].getName () && checksurname != ingEle[k].getSurname()) {
					c = 1;
					cerr << "Nome NON trovato" << endl;
				}

			}
			if ( c != 1 ) cout << "Nome trovato" << endl;
			break;

		default:
			return 0;
			break;
	}


	return 0;
}