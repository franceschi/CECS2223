#include "Machine.h"


Machine::Machine()
{
	cout << "Initializing Machine...\n";
}

Machine::Machine(int Quantity, float Price)
{
	setQuantity(Quantity);
	setPrice(Price);
}

Machine::Machine(const Machine & tempMachine)
{
	setQuantity(tempMachine.getQuantity());
	setPrice(tempMachine.getPrice());
}


Machine::~Machine()
{
}

void Machine::setQuantity(int tempQuantity)
{
	if (tempQuantity > 0)
		this->Quantity = tempQuantity;
	else
		cerr << "Error invalid entry!";
}

void Machine::setPrice(float tempPrice)
{
	if (tempPrice > 0)
		this->Price = tempPrice;
	else
		cerr << "Error invalid entry!";
}

void Machine::setProduct(const Product & tempCoca_Cola)
{
	this->Coca_Cola = tempCoca_Cola;
}

Product Machine::getProduct() const
{
	return this->Coca_Cola;
}

int Machine::getQuantity() const
{
	return this->Quantity;
}

float Machine::getPrice() const
{
	return this->Price;
}

Machine Machine::operator+(const Machine &tempMachine)
{
	Machine temp_sum;

	temp_sum.Quantity = Quantity + tempMachine.Quantity;
	temp_sum.Price = Price + tempMachine.Price;

	return temp_sum;

}

Machine Machine::operator-(const Machine &tempMachine)
{
	Machine temp_substract;

	temp_substract.Quantity = Quantity - tempMachine.Quantity;
	temp_substract.Price = Price - tempMachine.Price;

	return temp_substract;
}

Machine & Machine::operator++()
{
	setQuantity(++(this->Quantity));
	return *this;
}

Machine Machine::operator++(int)
{
	Machine tempMachine(*this);

	setQuantity(++(this->Quantity));
	return tempMachine;

}

Machine Machine::operator=(const Machine & tempMachine)
{
	this->Quantity = tempMachine.getQuantity();
	this->Price = tempMachine.getPrice();
	return (*this);
}

bool Machine::operator>(const Machine &tempMachine)
{
	return(this->Quantity > tempMachine.getQuantity());
}

bool Machine::operator<(const Machine &tempMachine)
{
	return(this->Quantity < tempMachine.getQuantity());
}

bool Machine::operator==(const Machine &tempMachine)
{
	return(this->Quantity == tempMachine.getQuantity() && this->Price == tempMachine.getPrice());
}
//
//void Machine::saveProducts()
//{
//	char filename[30];
//
//	ofstream file;
//	cout << "Enter file name: ";
//	cin >> filename;
//
//	file.open(filename, ios::out);
//	cout << "Now writing data to file: ";
//
//}

ostream & operator<<(ostream & print, const Machine & tempMachine)
{
	print << tempMachine.Coca_Cola;
	print << "Quantity " << tempMachine.getQuantity() << endl;
	print << "Vending items for: $" << tempMachine.getPrice() << endl;
	return print;
}

istream & operator >> (istream & in, Machine & tempMachine)
{
	in >> tempMachine.Coca_Cola;
	cout << "Enter the Quantity: ";
	in >> tempMachine.Quantity;
	cout << "Enter the price: ";
	in >> tempMachine.Price;
	return in;
}


