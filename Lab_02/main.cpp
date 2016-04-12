#include <iostream>
#include <string>
#include <cstdlib>
#include "Label.h"


int main()
{
	Label myLabel;
	string text;
	string toolTipText;
	//bool enabled;
	int locationX;
	int locationY;

	cout << "Enter label name: \n";
	cin >> text;
	myLabel.setText(text);
	cout << "Enter label tool tip name: \n";
	cin >> toolTipText;
	myLabel.setToolTipText(toolTipText);
	cout << "Settings enabled... \n";
	//cin>>enabled;
	//myLabel.setEnabled(enabled);
	cout << "Enter the first coordinate for the label's location: \n";
	cin >> locationX;
	//cout<<"Enter the second coordinate for the label's location: \n";
	cin >> locationY;
	myLabel.setLocation(locationX, locationY);
	myLabel.printLabel();
	return 0;
}
