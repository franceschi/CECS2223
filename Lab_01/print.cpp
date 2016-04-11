
#include <iostream>
#include <cmath>
using namespace std;
//Comment

//Declaring variables to be used by the functions
int number;
int x;
double y;


//First ecuation function
double ecuation1(int number)
{
	double getResult = (2 * (pow(number, 3)) - 5 * number + 16);
	return getResult;
}

//Second ecuation function
void ecuation2(int number)
{
	int getResult2 = ((4 * number) / 16) + 2;
	cout << "The resulting number is " << getResult2 << endl;

}

int main()
{

	do {


		//Ask the user for a number
		cout << endl << "Ok!, let's start off by typing a number: " << endl;
		cin >> number;
		cout << "\nVery well, then I will print the message [" <<
			number << "] times!" << endl;

		int x = 0;
		//Lets create a loop for the message
		while (x != number)
		{
			cout << "Welcome to CECS2223 C++ Programming Lab Course... " << endl;
			x++;
		}

		//Lets create a for loop to print from 0.30 jumping by 2 values.
		cout << "\nNow I will print a for loop starting at 0.30 and jump every 2 values \n";
		cout << "just because I'm crazy!!! \n";
		for (y = 0.30; y <= number; y++) {

			cout << "Value of Y are: " << y << endl;
			y++;

		}

		//Function to return a double and receives as a parameter the number asked by value
		//solve ecuation.

		cout << "\nNow calling a double function  to solve the following ecuation \n";
		cout << "2x^3 - 5x + 16 using the number [" << number << "] you entered: \n";
		cout << ecuation1(number) << endl;

		cout << "\nNow calling a void function that recives the result from previous ecuation, \n";
		cout << "the ridiculous number [" << ecuation1(number) << "] and solves the following 4x / 16 + 2: \n";

		//(call by reference) to solve ecuation:
		ecuation2(ecuation1(number));

		cout << "\nThis has been fun... lets try it again! \n\n\n\n";

	} while (1);

}