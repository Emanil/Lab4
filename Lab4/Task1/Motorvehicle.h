#pragma once
#include "Owner.h"
#include "Body.h"
#include "Engine.h"
#include <string>
using namespace std;


class Motorvehicle {

	Engine engine;
	Body body;
	Owner owner;
	float tireDiameters;
	int numberOfTires;
	string model;
	
	public:
	
		Motorvehicle(Engine engineForward, Body bodyForward, Owner ownerForward, float tireDiametersForward, int numberOfTiresForward, string modelForward);
		Motorvehicle();
		~Motorvehicle();

		// Method
		void print();
};

