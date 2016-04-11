#pragma once
#include <iostream>
#include <string>
using namespace std;

const string MONTHS[13] = {"N/A", "January", "February", "March", "April", "May", "June",
							"July", "August", "September", "October", "November", "December"}
class Month
{
private:
	int monthNumber;
	string name;
public:
	Month();
	Month(int monthNumber);
	Month(String name);
	virtual ~Month();

	void setMonthNumber()
};

