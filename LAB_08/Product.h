#pragma once
#ifndef Product_H
#define Product_H
#include <string>
#include <iostream>

using namespace std;

class Product

{

friend istream & operator >> (istream & in, Product &);
friend ostream & operator << (ostream &, const Product &);

private:
	string productName;
	string productBarCode;

public:
	Product();
	Product(string productName, string productBarCode);
	Product(const Product & tempProduct);
	~Product();
	
	//(“get” y “set”)
	void setBarCode(string);
	void setName(string);
	string getBarCode() const;
	string getName() const;


	//(operator overloading) =, ==
	Product & operator= (const Product & tempProduct);
	Product & operator== (const Product & tempProduct);

	//El operador == solo va a comparar contra el atributo productBarCode.

};
#endif // !Product_H
