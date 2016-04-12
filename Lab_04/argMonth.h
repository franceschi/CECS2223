#pragma once
#include <iostream>
#include <string>

#ifndef argMonth_h
#define argMonth_h

using namespace std;


//GLOBAL ATTRIBUTE
const string MONTHS[13] = { "N/A", "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY",
"JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER" };

//CLASS MONTH
class Month
{
private:
	string monthName;
	int monthNumber;
public:
	//CONSTRUCTOR
	Month();
	Month(string);
	Month(int);

	//destructor
	~Month();

	//setters
	void setMonthName(string);
	void setMonthNumber(int);

	//getters
	string getMonthName() const;
	int getMonthNumber() const;

	void print() const;

};

#endif