#include "Body.h"

Body::Body(string colorForward, float widthForward, float heightForward) {
	this->color = colorForward;
	this->width = widthForward;
	this->height = heightForward;
}

Body::Body() {

}

Body::~Body() {

}

void Body::print() {
	cout << "Color: " << color << endl;
	cout << "Width: " << width << endl;
	cout << "Height: " << height << endl;
}