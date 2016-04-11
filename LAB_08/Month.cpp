#include "Month.h"

using namespace std;

Month::Month()
{
	setMonthNumber(1);
}

Month::Month(int monthNumber) {
	setMonthNumber(monthNumber);
}

Month::Month(string name) {
	setName(name);
}

Month::~Month()
{
}

void Month::setName(string name) {
	int i;
	for (i = 1; i < 13; i++) {
		if (MONTHS[i] == name) {
			this->name = name;
			this->monthNumber = i;
			break;
		}
	}
	if (i == 13) {
		cerr << "Wrong month!!!\n";
		exit(1);
	}
}

void Month::setMonthNumber(int monthNumber) {
	if (monthNumber >= 1 && monthNumber <= 12) {
		this->name = MONTHS[monthNumber];
		this->monthNumber = monthNumber;
	}
	else {
		cerr << "Wrong month number!!!\n";
		exit(1);
	}
}

string Month::getName() const {
	return this->name;
}

int Month::getMonthNumber() const {
	return this->monthNumber;

}

ostream & operator << (ostream & out, const Month & aMonth) {
	out << aMonth.name << "(" << aMonth.monthNumber << "}";
	return out;
}

istream & operator >> (istream & in, Month & aMonth) {
	int month;
	cout << "Enter month number [1 - 12]: ";
	in >> month;
	aMonth.setMonthNumber(month);
	return in;
}