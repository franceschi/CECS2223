#pragma once
#ifndef Machine_H
#define Machine_H
#include "Product.h"
#include <iostream>
using namespace std;

class Machine
{
private:
	Product Coca_Cola;
	int Quantity;
	float Price;

public:
	//Constructor & Destructors
	Machine();
	Machine(int Quantity, float Price);
	Machine(const Machine & tempMachine);	
	~Machine();

	//(get & set)
	void setQuantity(int);
	void setPrice(float);
	void setProduct(const Product&);
	Product getProduct() const;
	int getQuantity() const;
	float getPrice() const;

	//Operator Overloading
	//Los operadores +, -, ++ van a modificar solo al atributo cantidad.
	//=, +, -, ++ (en prefijo y sufijo), ==, <<, >>.
	Machine operator + (const Machine &);	// Overloaded +
	Machine operator - (const Machine &);	// Overloaded -
	Machine & operator ++ ();					// Prefix ++
	Machine operator ++ (int);				// Postfix ++
	Machine operator = (const Machine &tempMachine);	// Overloaded =
	bool operator > (const Machine &tempMachine);		// Overloaded >
	bool operator < (const Machine &tempMachine);		// Overloaded <
	bool operator == (const Machine &tempMachine);		// Overloaded ==


	//Friends
	friend ostream &operator << (ostream & print, const Machine & tempMachine);
	friend istream &operator >> (istream & in, Machine &);

};

#endif // !Machine_H