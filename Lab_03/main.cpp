
#include "OddNumbers.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	do {

		OddNumbers myObject;
		int num;

		cout << "\nHello, enter a number: " << endl;
		cin >> num;

		//loop for even number
		while (num % 2 == 0) {
			cout << "Error, your number is even, try again... \n";
			cin >> num;
		}

		//if condition is met it will store the number
		cout << "\nNow I will store the number inside the object! \n";
		myObject.setNumber(num);

		//gets the number
		cout << "\nNow I am calling the function... \n\n";
		myObject.getNumber();

		//prints the result
		myObject.printNumber();

	} while (1);

	return 0;
}
