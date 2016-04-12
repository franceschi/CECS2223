#include "OddNumbers.h"
#include <iostream>

using namespace std;

OddNumbers::OddNumbers() {
	cout << "Initializing constructor... \n";

}

OddNumbers::~OddNumbers() {
	cout << "Destroying objects created... \n\n";
}

//set the odd number function
void OddNumbers::setNumber(int num) {

	this->_oddnumber = num;

}


int OddNumbers::getNumber() const {
	return _oddnumber;
}

void OddNumbers::printNumber() const {
	cout << "Sucess! " << getNumber() << " is an odd number! \n\n";

}