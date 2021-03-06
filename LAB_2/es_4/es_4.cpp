#include <iostream>
#include "Monitor.h"
using namespace std;

int main(){
	int shape;
	Monitor monitor;

	//Starting the game
	cout << "The Monitor Game" << endl;

	//Getting the dimensions of the o-rectangular
	monitor.setRow ();
	monitor.setCol ();

	int n_shapes = monitor.howManyShapes ();

	for ( int i = 0; i < n_shapes-1; i++ ) {

		//Printing the menu on the screen
		shape = monitor.printMenu ();

		//Getting the dimensions of the shape
		monitor.getShapeDim ();
		//Getting the coordinates of the shape
		monitor.getCoordinates ();

		switch ( shape ) {
			case 1:
				monitor.addSquare ();
				break;
			case 2:
				monitor.addTriangle ();
				break;
			case 3:
				monitor.addRhombus ();
				break;
			default:
				exit (1);
		}

	}
	//Printing the menu on the screen
	shape = monitor.printMenu ();
	//Getting the dimensions of the shape
	monitor.getShapeDim ();
	//Getting the coordinates of the shape
	monitor.getCoordinates ();
	switch ( shape ) {
		case 1:
			monitor.addSquare ();
			break;
		case 2:
			monitor.addTriangle ();
			break;
		case 3:
			monitor.addRhombus ();
			break;
		default:
			exit (1);
	}

	monitor.printMatrix ();


	monitor.stay ();
    return 0;
}

