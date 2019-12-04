#pragma once
#include <string>
#include <iostream>

using namespace std;

class Body {
	string color;
	float width, height;
public:
	Body(string color, float width, float height);
	Body();
	~Body();

	// Methods
	void print();
};

