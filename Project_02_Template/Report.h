#pragma once
#include"Data.h"
#include <iostream>
#include <string>
using namespace std;
class Report
{
private:
	Data *records;
	int totalRecords;
	float totalMinutes;
	float totalAmmount;
	string fileName;

public:
	Report();
	Report(Data records,int totalRecords, float totalMinutes, float totalAmmount, string fileName);
	Report(const Report & unReport);
	~Report();
	void addRecord(const Data & unData);
	void setTotalRecords(int totalRecords);
	void setTotalMinutes(float totalMinutes);
	void setTotalAmmount(float totalAmmount);
	void setFileName(string fileName);
	const Data & operator[](int indice)const;
	Data getRecords()const;
	int getTotalRecords()const;
	float getTotalMinutes()const;
	float getTotalAmmount()const;
	string getFileName()const;
	Report & operator = (const Report & unReport);
	bool operator ==(const Report & unReport)const;
	friend ostream & operator<<(ostream & os, const Report & unReport);
	friend istream & operator>>(istream & is, Report & unReport);
	
};

