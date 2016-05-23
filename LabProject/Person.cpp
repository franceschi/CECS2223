//
//  Person.cpp
//  
//
//  Created by Miguel Franceschi on 5/22/16.
//
//

#include "Person.h"


Person::Person(const string & firstName, const string & middleName, const string & lastName, const string & maidenName):firstName(firstName),middleName(middleName),lastName(lastName),maidenName(maidenName){}

Person::Person(const string firstName, const string middleName, const string lastName, const string maidenName):firstName(firstName),middleName(middleName),lastName(lastName),maidenName(maidenName){}

Person::Person(const Person & aPerson):firstName(aPerson.firstName),middleName(aPerson.middleName),lastName(aPerson.lastName),maidenName(aPerson.maidenName){}

Person::~Person(){}

Person & Person::operator=(const Person & aPerson)
{
    this->firstName=aPerson.firstName;
    this->middleName=aPerson.middleName;
    this->lastName=aPerson.lastName;
    this->maidenName=aPerson.maidenName;
    
    return (*this);
}

const string & Person::getfirstName() const
{
    return(this->firstName);
}

const string & Person::getmiddleName() const
{
    return(this->middleName);
}

const string & Person::getlastName() const
{
    return(this->lastName);
}


const string & Person::getmaidenName() const
{
    return(this->maidenName);
}

ostream & operator << (ostream & out, const Person & aPerson)
{
    out << "First Name: "   << aPerson.firstName    << endl;
    out << "Middle Name:"   << aPerson.middleName   << endl;
    out << "Last Name:"     << aPerson.lastName     << endl;
    out << "Maiden Name:"   << aPerson.maidenName   << endl;
    return(out);
}

istream & operator >> (istream & in, Person & aPerson)
{
    cout << "First Name: ";
    in   >> aPerson.firstName;
    cout << "Middle Name: ";
    in   >> aPerson.middleName;
    cout << "Last Name: ";
    in   >> aPerson.lastName;
    cout << "Maiden Name: ";
    in   >> aPerson.maidenName;
    
    return(in);
}
