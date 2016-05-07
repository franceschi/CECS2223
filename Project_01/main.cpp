#include "Person.h"

int main()
{
	Person client_00;

	cout << "New Account Opening Example: " << endl;
	cout << client_00 << endl << endl;

	cout << "Enter New Customer Information: " << endl;
	cin>> client_00;
	
	cout << "\nNew Customer Information: " <<endl;
	client_00.printPerson();

	return(0);
}