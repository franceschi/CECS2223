#include "Person.h"
using namespace std;

Person::Person()//default cnstructor
{
	firstName = (" ");//valores por default
	lastName =(" ");
	middleName =(" ");
	maidenName = (" ");
}
Person::Person(string firstName, string lastName, string middleName, string maidenName)//parameter
{
	setFirstName(firstName);//nombrando las variables
	setLastName(lastName);
	setMiddleName(middleName);
	setMaidenName(maidenName);
}
Person::Person(const Person & unPerson)//copy
{
	firstName = unPerson.firstName;//asignando variables
	lastName = unPerson.lastName;
	middleName = unPerson.middleName;
	maidenName = unPerson.maidenName;
}
Person::~Person()//destructor
{

}
void Person::setFirstName(string firstName)//setters
{
	this->firstName = firstName;
}
void Person::setLastName(string lastName)
{
	this->lastName = lastName;
}
void Person::setMiddleName(string middleName)
{
	this->middleName = middleName;
}
void Person::setMaidenName(string maidenName)
{
	this->maidenName = maidenName;
}
string Person::getFirstName()const//getters
{
	return (this->firstName);
}
string Person::getLastName()const
{
	return (this->lastName);
}
string Person::getMiddleName()const
{
	return (this->middleName);
}
string Person::getMaidenName()const
{
	return (this->maidenName);
}
Person & Person:: operator =(const Person & unPerson)//operador que asigna valores
{
	this->firstName = unPerson.firstName;
	this->lastName = unPerson.lastName;
	this->middleName = unPerson.middleName;
	this->maidenName = unPerson.maidenName;
	return (*this);//retorna todos los valores guardados
}
bool Person:: operator == (const Person & unPerson)const//operador de igualdad y comparacion de valores, verifica que sean iguales
{
	return (this->firstName == unPerson.firstName && this->lastName == unPerson.lastName &&
		this->middleName == unPerson.middleName && this->maidenName == unPerson.maidenName);

}
ostream & operator <<(ostream & output, const Person & unPerson)//imprime valores
{
	output << " First Name: \n" << unPerson.firstName;
	output << " LastName: \n" << unPerson.lastName;
	output << "MiddleName:\n" << unPerson.middleName;
	output << " Maiden Name:\n" << unPerson.maidenName;
	return output;
}
istream  & operator >>(istream & input, Person & unPerson)//cambia o pide valores
{
	cout << " Please Enter First Name \t Middle Name \t Last Name \t Maiden Name " << endl;
	input >> unPerson.firstName;
	input >> unPerson.middleName;
	input >> unPerson.lastName;
	input >> unPerson.maidenName;
	return input;
}