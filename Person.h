#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
	string firstName;
	string lastName;
	string middleName;
	string maidenName;
public:
	Person();
	Person(string firstName, string lastName, string middleName, string maidenName);
	Person(const Person & unPerson);//copy constructor
	~Person();//destructor
	void setFirstName(string firsName);//setters
	void setLastName(string lastName);
	void setMiddleName(string middleName);
	void setMaidenName(string maidenName);
	string getFirstName()const;//getters
	string getLastName()const;
	string getMiddleName()const;
	string getMaidenName()const;
	Person & operator = (const Person & unPerson);//operador de asignar valores
	bool operator ==(const Person & unPerson)const;//operador de igualdad
	friend ostream & operator <<(ostream & output, const Person & unPerson);//friend operador que imprime
	friend istream & operator >>(istream & input, Person & unPerson);//friend operador que pide  cambia valores

};

