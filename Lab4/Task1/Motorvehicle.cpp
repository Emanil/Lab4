#include "Motorvehicle.h"
#include <iostream>
using namespace std;


Motorvehicle::Motorvehicle(Engine engineForward, Body bodyForward, Owner ownerForward, float tireDiametersForward, int numberOfTiresForward, string modelForward) : engine(engineForward), body(bodyForward), owner(ownerForward) {
	
	this->tireDiameters = *new float[numberOfTires];
	this->numberOfTires = numberOfTiresForward;
	this->model = modelForward;
}

Motorvehicle::Motorvehicle() {

}

Motorvehicle::~Motorvehicle() {
	delete this->tireDiameters;
}

void Motorvehicle::print() {
	cout << "Model: " << model << endl;
	cout << "Diamater: " << tireDiameters << endl;
	cout << "Number of tires: " << numberOfTires << endl;
	
}

