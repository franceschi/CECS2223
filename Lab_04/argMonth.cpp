#include "argMonth.h"

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

void Month::print() const {
	cout << getMonthName() << "(" << getMonthNumber() << ")" << endl;
}