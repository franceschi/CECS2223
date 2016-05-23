#include "Machine.h"
#include "Product.h"

using namespace std;

int main() {

	fstream dataFile;
	Product Coca_Cola;
	Machine Machine_01,Machine_02;

	

	cout << "Opening file...\n";
	dataFile.open("demofile.txt", ios::out);	// Open for output
	cout << "Now writing data to the file.\n";
	dataFile << Machine_01;
	dataFile >> Machine_02.setPrice << endl;
	dataFile >> Machine_02.setProduct << endl;
	dataFile >> Machine_02.setQuantity << endl;
	dataFile << Coca_Cola;
	

	dataFile.close();							// Close the file
	cout << "Done.\n";
	return 0;

}
