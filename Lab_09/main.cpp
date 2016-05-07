#include "Machine.h"
#include "Product.h"

using namespace std;

int main() {
	Product Coca_Cola;
	Machine Machine_01, Machine_02, Machine_03;

	//First Object
	cin >> Machine_01;
	cout << Machine_01;
	
	//Second Object
	cin >> Machine_02;
	cout << Machine_02;

	
	++Machine_01;
	cout << Machine_01;

	Machine_02++;
	cout << Machine_02;

	//Third Object
	Machine_03 = Machine_01 + Machine_02;

	cout << "Printing a sum of Machine #1 & Machine #2: " << endl;
	cout << Machine_03;

	return 0;
}