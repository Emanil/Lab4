#pragma once
#include <string>
#include <iostream>
using namespace std;

class Body {

public:
	string color;
	float width, height;

	Body(string colorForward, float widthForward, float heightForward);
	Body();
	~Body();

	// Methods
	void print();
};

