#include "monomio.h"
using namespace::std;

Monomio::Monomio() {

	setCoeficient(1);
	setExponent(2);

}

Monomio::Monomio(int tempCoeficient, int tempExponent) {

	setCoeficient(tempCoeficient);
	setExponent(tempExponent);

}

Monomio::Monomio(const Monomio & tempMonomio) {
	this->coeficiente = tempMonomio.coeficiente;
	this->exponente = tempMonomio.exponente;
}

Monomio::~Monomio() {
	//cout << "Destroying objects created... \n";
}

void Monomio::setCoeficient(int a) {
	this->coeficiente = a;
}

void Monomio::setExponent(int n) {

	this->exponente = n;
}


int Monomio::getCoeficient() const
{
	return this->coeficiente;
}

int Monomio::getExponent() const
{
	return this->exponente;
}

Monomio Monomio::operator+(const Monomio & tempMonomio) {
	if (this->exponente == tempMonomio.getExponent()) {
		Monomio monomio;
		monomio.setCoeficient(this->coeficiente + tempMonomio.getCoeficient());
		monomio.setExponent(this->exponente);
		return monomio;
	}
	else
	{
		cerr << "Error, exponent must be the same!!!" << endl;
	exit(1);
	}
}

Monomio Monomio::operator-(const Monomio & tempMonomio) {
	if (this->exponente == tempMonomio.getExponent()) {
		Monomio monomio;
		monomio.setCoeficient(this->coeficiente - tempMonomio.getCoeficient());
		monomio.setExponent(this->exponente);

		return monomio;
	}
	else
		cerr << "Error, exponent must be the same!!!" << endl;
	exit(1);
}

Monomio Monomio::operator*(const Monomio & tempMonomio) {
	Monomio monomio;
	monomio.setCoeficient(this->coeficiente * tempMonomio.getCoeficient());
	monomio.setExponent(this->exponente + tempMonomio.getExponent());

	return monomio;
}

Monomio & Monomio::operator=(const Monomio & tempMonomio) {

	this->coeficiente = tempMonomio.getCoeficient();
	this->exponente = tempMonomio.getExponent();

	return (*this);
}

//istream & ostream...
ostream & operator <<(ostream & out, const Monomio & tempMonomio) {
	out << tempMonomio.getCoeficient() << "x^" << tempMonomio.getExponent();
	return out;
}
istream & operator >> (istream & in, Monomio & tempMonomio) {
	cout << "Enter the value for the coeficient (a): ";
	in >> tempMonomio.coeficiente;
	cout << "Enter the value for the exponent (b): ";
	in >> tempMonomio.exponente;
	return in;
}