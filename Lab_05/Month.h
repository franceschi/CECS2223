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
	friend ostream & operator << (ostream & out, const Month & aMonth);
	friend istream & operator >> (istream & in, Month & aMonth);

private:
	string monthName;
	int monthNumber;
public:
	Month();
	Month(string);
	Month(int);
	Month(const Month & aMonth);
	~Month();

	//setters
	void setMonthName(string);
	void setMonthNumber(int);

	//getters
	string getMonthName() const;
	int getMonthNumber() const;

	//operators overloading
	Month & operator=	(const Month &);

	bool operator	==	(const Month & aMonth) const;
	Month & operator=	(const Month & aMonth);
	bool operator	>	(const Month &) const;
	bool operator	<	(const Month &) const;

	//prefix
	//Month & operator ++();
	//Month & operator --();

	//postfix
	//Month operator-- (int);
	//Month operator++ (int);

	//print the result
	void print() const;
};

#endif