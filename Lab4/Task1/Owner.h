#pragma once
#include <string>
#include <iostream>
using namespace std;

class Owner {
	string name, address;
	bool allowedToDrive;

public:
	Owner(string nameInp, string addressInp, bool allowedToDriveInp);
	Owner();
	~Owner();

	// Methods
	void print();
};


