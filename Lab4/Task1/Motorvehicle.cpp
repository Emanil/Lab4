#include "Motorvehicle.h"
#include <iostream>
using namespace std;


Motorvehicle::Motorvehicle(float tireDiametersForward, int numberOfTiresForward, string modelForward) {
	//this->engine = engineForward;
	//this->owner = ownerForward;
	numberOfTires = numberOfTiresForward;
	this->tireDiameters = *new float[numberOfTiresForward];
	this->model = modelForward;
}

Motorvehicle::Motorvehicle() {

}

Motorvehicle::~Motorvehicle() {
	delete[] &tireDiameters;
}

void Motorvehicle::print() {
	cout << "Model: " << model << endl;
	cout << "Number of tires: " << numberOfTires << endl;
	cout << "Diamater: " << this->tireDiameters[0] << endl; //Prints numberOfTires times in a for
	
}

