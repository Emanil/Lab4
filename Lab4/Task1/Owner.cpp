#include "Owner.h"

Owner::Owner(string nameForward, string addressForward, bool allowedToDriveForward) {
	this->name = nameForward;
	this->address = addressForward;
	this->allowedToDrive = allowedToDriveForward;
	
}

Owner::Owner() {

}

Owner::~Owner() {

}



void Owner::print() {
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Is allowed to drive?: " << allowedToDrive << endl;
}
	