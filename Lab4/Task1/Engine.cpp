#include "Engine.h"

Engine::Engine(float sizeInlitersForward, int numberOfCylindersForward) {
	this->sizeInliters = sizeInlitersForward;
	this->numberOfCylinders = numberOfCylindersForward;
}

Engine::Engine() {

}


Engine::~Engine() {

}

void Engine::print() {
	cout << "Number of liters: " << sizeInliters << endl;
	cout << "Number of cylinders: " << numberOfCylinders << endl;
}