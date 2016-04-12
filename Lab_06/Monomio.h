#pragma once
#ifndef MONOMIO_H
#define MONOMIO_H
#include <iostream>
using namespace::std;

class Monomio
{
	friend istream & operator >> (istream &, Monomio &);
	friend ostream & operator<< (ostream &, const Monomio &);


private:
	int coeficiente, exponente, monomio, variable;
public:
	Monomio(); //default constructor
	Monomio(int, int); //constructor with parameters
	Monomio(const Monomio &); //copy constructor
	~Monomio();


	//setters
	void setCoeficient(int);
	void setExponent(int);

	//void setVariable(int);


	//getters
	int getCoeficient() const;
	int getExponent() const;

	//operators
	Monomio operator+ (const Monomio & tempMonomio);
	Monomio operator- (const Monomio & tempMonomio);
	Monomio operator* (const Monomio & tempMonomio);
	Monomio & operator= (const Monomio & tempMonomio);

	//print
	//void printMonomio() const;

};

#endif // !MONOMIO_H

