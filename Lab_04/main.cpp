#include "argMonth.h"
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

int number;
string month;


int main(int argc, const char * argv[]) {

	Month myMonth;


	cout << "Testing Constructors, Setters and Getters" << endl;
	cout << "myMonth.getMonthName() returns:  " << myMonth.getMonthName()
		<< endl;
	cout << "myMonth.getMonthNumber() returns:  " << myMonth.getMonthNumber()
		<< endl;

	if (argc == 0) {
		cerr << "Error: Few arguments. \n";
		exit(0);
	}

	for (int i = 0; i < argc; i++) {
		printf("argv[%d]=%s\n", i, argv[i]);
	}

	number = atoi(argv[1]);

	if (number >= 1 && number <= 12)
		myMonth.setMonthNumber(number);
	else
		myMonth.setMonthName(argv[1]);



	cout << "Number = " << myMonth.getMonthNumber() << endl;
	cout << "Month  = " << myMonth.getMonthName() << endl;

	return 0;
}

