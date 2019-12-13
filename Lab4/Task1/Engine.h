#pragma once
#include <string>
#include <iostream>
using namespace std;

class Engine {

public:
	float sizeInliters;
	int numberOfCylinders;

	Engine(float sizeInlitersForward, int numberOfCylindersForward);
	Engine();
	~Engine();

	// Methods
	void print();
};

