#pragma once
#include <iostream>
#ifndef ODDNUMBERS_H
#define ODDNUMBERS_H
using namespace std;

class OddNumbers
{
private:
	int _oddnumber;

public:
	OddNumbers(); //default constructor
	OddNumbers(int); // constructor with parameter
	OddNumbers(const OddNumbers &); // copy constructor
	~OddNumbers(); //destructor

				   //setters
	void setNumber(int num);

	//getters
	int getNumber() const;

	//print
	void printNumber() const;

};
#endif