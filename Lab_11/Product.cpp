#include "Product.h"



Product::Product()
{
	productName = "Coca Cola";
	productBarCode = "DESTAPA LA FELICIDAD";
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
	return (*this);
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
	print << tempProduct.getName() << " [16.9 oz.] " << endl;
	print << "Serial No. [" << tempProduct.getBarCode() << "]" << endl;
	return print;
}

istream & operator >> (istream & in, Product & tempProduct)
{
	// TODO: insert return statement here
	cout << "Enter the name for the product: ";
	in >> tempProduct.productName;
	cout << "Enter the product bar code: ";
	in >> tempProduct.productBarCode;
	return in;
}
