#include "Motorvehicle.h"
#include <iostream>
using namespace std;

int main() {
	string inp;
	Engine engine;
	Body body;
	Owner owner;
	Motorvehicle motorvehicle;
	cout << "Enter details for the owner:" << endl;
	cout << "Name? ";
	cin >> owner.name;
	cout << "Adress? ";
	cin >> owner.address;
	cout << "Allowed to drive (1/0)? ";
	cin >> owner.allowedToDrive;
	owner.print();
	for(int i = 1; i <= 3; i++) { // 3 = number of vehicles
		cout << "Enter details for vehicle number: " << i << endl;
		cout << "Color? ";
		cin >> body.color;
		cout << "Width? ";
		cin >> body.width;
		cout << "Height? ";
		cin >> body.height;
		cout << "Cylindes? ";
		cin >> engine.numberOfCylinders;
		cout << "Size in lites? ";
		cin >> engine.sizeInliters;
		cout << "Model? ";
		cin >> motorvehicle.model;
		cout << "Number of tires? ";
		cin >> motorvehicle.numberOfTires;
		for (int i = 0; i < motorvehicle.numberOfTires; i++) {
			cout << "Tire diameters? "; // This runs numberOfTires times
			cin >> motorvehicle.tireDiameters;
		}

		cout << "-----------------------------" << endl;
		body.print();
		engine.print();
		motorvehicle.print();
		cout << "-----------------------------" << endl;

	}

	cin >> inp; // Pauses code 
	
}