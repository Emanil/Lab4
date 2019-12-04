#pragma once
#include <string>
#include <iostream>
using namespace std;

class Body {
	string color;
	float width, height;

public:
	Body(string colorForward, float widthForward, float heightForward);
	Body();
	~Body();

	// Methods
	void print();
};

