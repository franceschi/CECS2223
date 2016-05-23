//
//  Person.h
//  
//
//  Created by Miguel Franceschi on 5/22/16.
//
//

#ifndef ____Person__
#define ____Person__


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Person
{
private:
    string firstName;
    string middleName;
    string lastName;
    string maidenName;

public:

    Person(const string & firstName = "Miguel", const string & middleName = "A.", const string & lastName = "Franceschi", const string & maidenName = "Santiago" );
    Person(const string firstName, string middleName, string lastName, string maidenName);
    Person(const Person & aPerson);
    ~Person();


    Person & operator = (const Person & aPerson);
    
    bool operator == (const Person & aPerson) const;
    bool operator != (const Person & aPerson) const;
    bool operator > (const Person & aPerson) const;
    bool operator < (const Person & aPerson) const;
    
    const string & getfirstName()const;
    const string & getmiddleName()const;
    const string & getlastName()const;
    const string & getmaidenName()const;
    
    
    friend ostream & operator << (ostream & out, const Person & aPerson);
    friend istream & operator >> (istream & in, Person & aPerson);
    
};


#endif /* defined(____Person__) */
