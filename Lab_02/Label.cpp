#include "Label.h"
#include <iostream>
using namespace::std;


Label::Label() {

}

Label::Label(const string aText, string bText, bool Enabled, int LocationX, int LocationY)
{
	this->text = aText;
	this->text = bText;
	this->enabled = Enabled;
	this->locationX = LocationX;
	this->locationY = LocationY;
	cout << "Initializing constructor... \n";
}

Label::~Label() {
	cout << "Destroying objects created... \n";
}

void Label::setText(string text) {
	this->text = text;
}

void Label::setToolTipText(string text) {
	this->toolTipText = text;
}

void Label::setEnabled(bool x) {

	this->enabled = true;

}

void Label::setLocation(int LocationX, int LocationY)
{
	this->locationX = LocationX;
	this->locationY = LocationY;
}

int Label::getLocationX() const
{
	return (locationX);
}

int Label::getLocationY() const
{
	return (locationY);
}

string Label::getToolTipText() const
{
	return toolTipText;
}

string Label::getText() const
{
	return text;
}

void Label::printLabel() const
{
	cout << "\nThe text entered was: " << getText() << endl;
	cout << "The tool tip text will be: " << getToolTipText() << endl;
	cout << "The coordinates entered were: " << getLocationX() << " and " <<
		getLocationY() << endl;

}