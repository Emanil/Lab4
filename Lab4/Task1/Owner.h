#pragma once
#include <string>
#include <iostream>
using namespace std;

class Owner {

public:
	string name, address;
	bool allowedToDrive;

	Owner(string nameForward, string addressForward, bool allowedToDriveForward);
	Owner();
	~Owner();

	// Methods
	void print();
};


