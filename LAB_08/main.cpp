#include <istream>
#include <cstdlib>
#include "Month.h"

using namespace std;

int main(int argc, char *argv[]) {
	int month;
	Month myMonth;

	if (argc == 1) {
		cerr << "Error: Few arguments!\n";
		exit(1);

	}
	month = atoi(argv[1]);
	if(month == 0){//meaning arv[1] its a string
		myMonth.setName(argv[1]);
	
	} 
	else {
		myMonth.setMonthNumber(month);
	}
	cout << "Month: " << myMonth << endl;
	return 0;
}