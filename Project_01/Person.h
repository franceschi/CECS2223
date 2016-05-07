#pragma once
#include<string>
#include<iostream>
using namespace std;


class Person

{
	friend ostream & operator << (ostream & out, const Person & aPerson);
	friend istream & operator >> (istream & in, Person & aPerson);

public:
	string  firstName;
	string  lastName;
	string  dob;
	string  ssn;

	//Person(string firstName, string lastName, string dob, string ssn);
	//Person(const Person & aPerson);
	//Person();
	//~Person();

	//void setFirstName(string firstName);
	//void setLastName(string lastName);
	//void setDOB(string dob);
	//void setSSN(string ssn);

	//string getFirstName() const;
	//string getLastName() const;
	//string getDOB() const;
	//string getSSN() const;

	//void askFirstName();
	//void askLastName();
	//void askDOB();
	//void askSSN();
	//void askPerson();

	//void printFirstName() const;
	//void printLastName() const;
	//void printDOB() const;
	//void printSSN() const;
	//void printPerson() const;

	//bool operator==(const Person & aPerson) const;
	//bool operator!=(const Person & aPerson) const;
	//bool operator >(const Person & aPerson) const;
	//bool operator <(const Person & aPerson) const;


	inline Person::Person(string firstName, string lastName, string dob, string ssn)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->dob = dob;
		this->ssn = ssn;
	}

	inline Person::Person(const Person & aPerson)
	{
		this->firstName = aPerson.firstName;
		this->lastName = aPerson.lastName;
		this->dob = aPerson.dob;
		this->ssn = aPerson.ssn;
	}

	inline Person::Person()
	{
		this->firstName = "John";
		this->lastName = "Doe";
		this->dob = "01/01/2000";
		this->ssn = "123-45-6789";
	}

	inline Person::~Person()
	{
		cout << "Exit Person Object" << endl;
	}

	inline void Person::setFirstName(string firstName)
	{ this->firstName = firstName;}

	inline void Person::setLastName(string lastName)
	{ this->firstName = firstName; }

	inline void Person::setDOB(string dob)
	{ this->dob = dob; }

	inline void Person::setSSN(string ssn)
	{ this->ssn = ssn; }

	inline string Person::getFirstName() const
	{ return string(); }

	inline string Person::getLastName() const
	{ return string(); }

	inline string Person::getDOB() const
	{ return string(); }

	inline string Person::getSSN() const
	{ return string(); }

	inline void Person::askFirstName()
	{
		cout << "Enter your first name: ";
		cin >> firstName;
	}

	inline void Person::askLastName()
	{
		cout << "Enter your last name: ";
		cin >> lastName;
	}

	inline void Person::askDOB()
	{
		cout << "Enter your date of birth (MM/DD/YYYY): ";
		cin >> dob;
	}

	inline void Person::askSSN()
	{
		cout << "Enter your social security number (###-##-####): ";
		cin >> ssn;
	}

	inline void Person::askPerson()
	{
		this->askFirstName();
		this->askLastName();
		this->askDOB();
		this->askSSN();
	}

	inline void Person::printFirstName() const
	{
		cout << this->firstName;
	}

	inline void Person::printLastName() const
	{
		cout << this->lastName;
	}

	inline void Person::printDOB() const
	{
		cout << this->dob;
	}

	inline void Person::printSSN() const
	{
		cout << this->ssn;
	}

	inline void Person::printPerson() const
	{
		cout <<"First name: " << this->firstName << endl;
		cout <<"Last name: " << this->lastName << endl;
		cout <<"Date of birth: " << this->dob << endl;
		cout <<"Social Security Number: " << this->ssn << endl;
	}

	friend ostream & operator << (ostream & out, const Person & aPerson)
	{
		// TODO: insert return statement here
		aPerson.printPerson();
		return(out);
	}

	friend istream & operator >> (istream & in, Person & aPerson)
	{
		// TODO: insert return statement here
		aPerson.askPerson();
		return(in);
	}


};

