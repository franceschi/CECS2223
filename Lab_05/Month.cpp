#include "Month.h"

Month::Month() {
	cout << "Initializing constructor... \n";
	setMonthNumber(1);
	setMonthName("JANUARY");
}
Month::Month(string tempMonth) {
	setMonthName(tempMonth);
}
Month::Month(int tempMonthNum) {
	setMonthNumber(tempMonthNum);
}
//Copy Constructor
Month::Month(const Month & aMonth) {
	setMonthName(aMonth.getMonthName());
	setMonthNumber(aMonth.getMonthNumber());
}
Month::~Month() {
	cout << "Destroying Objects... \n\n";
}
void Month::setMonthNumber(int number) {
	if (number >= 1 && number <= 12) {
		this->monthNumber = number;
		this->monthName = MONTHS[number];
	}
	else {
		cerr << "Wrong month number!\n";
		exit(0);
	}
}
void Month::setMonthName(string name) {
	{
		if (name == "January")       setMonthNumber(1);
		else if (name == "February") setMonthNumber(2);
		else if (name == "March")	 setMonthNumber(3);
		else if (name == "April")	 setMonthNumber(4);
		else if (name == "May")      setMonthNumber(5);
		else if (name == "June")     setMonthNumber(6);
		else if (name == "July")     setMonthNumber(7);
		else if (name == "August")   setMonthNumber(8);
		else if (name == "September")setMonthNumber(9);
		else if (name == "October")  setMonthNumber(10);
		else if (name == "November") setMonthNumber(11);
		else if (name == "December") setMonthNumber(12);
		else setMonthNumber(1);
	}
}
string Month::getMonthName() const {
	return monthName;
}
int Month::getMonthNumber() const {
	return monthNumber;
}
//Assign Function
bool Month::operator==(const Month & aMonth) const {
	return(this->monthName == aMonth.getMonthName &&  this->monthNumber == aMonth.getMonthNumber);
};
Month & Month::operator=(const Month & aMonth) {
	this->monthNumber = aMonth.getMonthNumber;
	this->monthName = aMonth.getMonthName;
	return (*this);
};
bool Month::operator<(const Month & aMonth) const {
	return(this->monthNumber < aMonth.getMonthNumber);
};
bool Month::operator>(const Month & aMonth) const {
	return(this->monthNumber > aMonth.getMonthNumber);
};
ostream & operator <<(ostream & out, const Month & aMonth) {
	out << aMonth.getMonthName << " is " << aMonth.getMonthNumber;
	return out;
}
istream & operator >> (istream & in, Month & aMonth) {
	cout << "Enter the name of the month: ";
	in >> aMonth.getMonthName;
	cout << "Enter the imaginary part: ";
	in >> aMonth.getMonthName;
	return in;
}
void Month::print() const {
	cout << getMonthName() << "(" << getMonthNumber() << ")" << endl;
}

