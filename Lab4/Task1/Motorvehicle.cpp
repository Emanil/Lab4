#include "Motorvehicle.h"
#include <iostream>
using namespace std;


Motorvehicle::Motorvehicle(Engine engineForward, Body bodyForward, Owner ownerForward, float tireDiametersForward, int numberOfTiresForward, string modelForward) : engine(engineForward), body(bodyForward), owner(ownerForward) {
	this->owner = ownerForward;
}


Motorvehicle::~Motorvehicle() {
	delete tireDiameters;
}

void Motorvehicle::print() {
	
}

