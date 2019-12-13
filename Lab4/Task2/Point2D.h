#pragma once
#include <math.h>
#include <string.h>
using namespace std;

class Point2D {

public:
	float x, y;
	Point2D(float nx, float ny) { // Constructor
		x = nx;
		y = ny;
	}

	Point2D(const Point2D &p); // Copy constructor
	Point2D(); // Default
	~Point2D();

	auto calcDistance() {

	}

	auto toString() {

	}


private:

};

/*
Point2D::Point2D(float nx, float ny) { // Constructor

}
*/


Point2D::Point2D(const Point2D &p) { // Copy

}

Point2D::Point2D() { // Default constructor


}

Point2D::~Point2D() { // Destructor


}