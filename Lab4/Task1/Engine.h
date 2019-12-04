#pragma once
#include <string>
#include <iostream>
using namespace std;

class Engine {
	float sizeInliters;
	int numberOfCylinders;

public:
	Engine(float sizeInlitersForward, int numberOfCylindersForward);
	Engine();
	~Engine();

	// Methods
	void print();
};

