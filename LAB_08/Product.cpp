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

string Product::getBarCode() const
{
	return string();
}

string Product::getName() const
{
	return string(productName);
	return this->productName;
}
