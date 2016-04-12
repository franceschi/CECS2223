#include "Month.h"
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main() {

	Month myMonth;
	Month orMonth;

	cin >> myMonth;
	cout << myMonth;

	cout << myMonth << "==" << orMonth << "?" << (myMonth == orMonth ? "true" : "false") << endl;

	return 0;
}

