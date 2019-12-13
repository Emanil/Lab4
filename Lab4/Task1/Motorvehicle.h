#pragma once
#include "Owner.h"
#include "Body.h"
#include "Engine.h"
#include <string>

class Motorvehicle {

public:
	float tireDiameters;
	int numberOfTires;
	string model;

	Motorvehicle(float tireDiametersForward, int numberOfTiresForward, string modelForward);
	Motorvehicle();
	~Motorvehicle();

	// Method
	void print();

private:
	Engine engine;
	Body body;
	Owner owner;
};

