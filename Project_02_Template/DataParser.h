#pragma once
#include <string>
#include <istream>
#include "Data.h"
using namespace std;
class DataParser
{
private:
	Data record;
	int fecha;

public:
	DataParser();
	DataParser(string line);
	DataParser(const DataParser & unDataPaser);
	~DataParser();
	void setRecord(string line);
	void setFecha(int fecha);
	int getFecha()const;
	Data getRecord()const;
	Data parseLine(string line);
	string date(string date);
//	friend ostream & operator <<(ostream & os, const DataParser & unDataParser);
//	friend istream & operator >> (istream & is, DataParser & unDataParser);
};

