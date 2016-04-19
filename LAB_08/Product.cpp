#include "Product.h"



Product::Product()
{
	productName = "Coca Cola";
	productBarCode = "DESTAPALAFELICIDAD";
}

Product::Product(string productName, string productBarCode)
{
	this->productName = productName;
	this->productBarCode = productBarCode;
}

Product::Product(const Product & tempProduct)
{
	this->productName = tempProduct.productName;
	this->productBarCode = tempProduct.productBarCode;
}


Product::~Product()
{
	cout << "[Destroying objects created]";
}

void Product::setBarCode(string code)
{
	this->productBarCode = code;
}

void Product::setName(string name)
{
	this->productName = name;
}

string Product::getName() const
{
	return this->productName;
}

Product & Product::operator=(const Product & tempProduct)
{
	// TODO: insert return statement here
	this->productName = tempProduct.getName();
	this->productBarCode = tempProduct.getBarCode();
}

bool Product::operator==(const Product &tempProduct)
{
	bool flag;
	  if (productName == tempProduct.productName && productBarCode == tempProduct.productBarCode)
		flag = true;
		else
		flag = false;
	  return flag;
}

string Product::getBarCode() const
{
	return this->productBarCode;
}

ostream & operator<<(ostream &print, const Product &tempProduct)
{
	print << tempProduct.getName() << " [16.9 oz.] " << tempProduct.getBarCode() << " [Serial No.]";
	return print;
}

istream & operator >> (istream &, Product &)
{
	// TODO: insert return statement here
}
