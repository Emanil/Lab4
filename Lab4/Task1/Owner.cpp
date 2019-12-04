#include "Owner.h"

Owner::Owner(string nameInp, string addressInp, bool allowedToDriveInp) {
	this->name = nameInp;
	this->address = addressInp;
	this->allowedToDrive = allowedToDriveInp;
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
	