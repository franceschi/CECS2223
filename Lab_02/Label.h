#pragma once
#include<iostream>
#include<string>
#ifndef LABEL_H
#define LABEL_H
using namespace std;

class Label
{
private:
	string text;
	string toolTipText;
	//bool enabled; 
	int locationX;
	int locationY;
public:
	Label(); //empty constructor
	Label(string, string, bool, int, int); //constructor with parameters
	Label(const Label &); //copy constructor
	~Label();

	//setters
	void setText(string aText);
	void setToolTipText(string bText);
	void setEnabled(bool);
	void setLocation(int LocationX, int LocationY);
	void setLocationX(int x);
	void setLocationY(int y);

	//getters
	string getText() const;
	string getToolTipText() const;
	bool getEnabled() const;
	int getLocationX() const;
	int getLocationY() const;

	void askLabel() const;
	void printLabel() const;
};
#endif
