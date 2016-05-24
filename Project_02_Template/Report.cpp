#include "Report.h"


Report::Report()
{
	records = NULL;
	totalRecords = 0;
	totalMinutes = 0.0;
	totalAmmount = 0.0;
	fileName=(" ");

}
Report::Report(Data records, int totalRecords, float totalMinutes, float totalAmmount, string fileName)
{
	setTotalRecords(totalRecords);
	setTotalMinutes(totalMinutes);
	setTotalAmmount(totalAmmount);
	setFileName(fileName);
}
void Report::addRecord(const Data & unData)
{
	Data *records;
	records = new Data[this->totalRecords + 1];
	for (int i = 0;i < this->totalRecords;i++)
	{
		records[this->totalRecords] = unData;
		delete[](this->records);
		this->records = records;
		++(this->records);
	}
}
Report::Report(const Report & unReport)
{
	this->records = NULL;
	totalRecords = unReport.totalRecords;
	totalMinutes = unReport.totalMinutes;
	totalAmmount = unReport.totalAmmount;
	fileName = unReport.fileName;
	(*this) = unReport;

}
Report::~Report()
{
	delete[](this->records);
}
void Report::setTotalRecords(int totalRecords)
{
	this->totalRecords = totalRecords;
}
void Report::setTotalAmmount(float totalAmmount)
{
	this->totalAmmount = totalAmmount;
}
void Report::setTotalMinutes(float totalMinutes)
{
	this->totalMinutes = totalMinutes;
}
void Report::setFileName(string fileName)
{
	this->fileName = fileName;
}
const Data & Report::operator[](int indice)const
{
	return((this->records)[indice]);
}
Data Report::getRecords()const
{
	for (int i = 0;i < totalRecords;i++)
	{
		return (records[i]);
	} 
}
int Report::getTotalRecords()const
{
	return this->totalRecords;
}
float Report::getTotalAmmount()const
{
	return this->totalAmmount;
}
float Report::getTotalMinutes()const
{
	return this->totalMinutes;
}
string Report::getFileName()const
{
	return this->fileName;
}
Report & Report::operator =(const Report & unReport)
{
	delete[](this->records);
	if (unReport.totalRecords > 0)
	{
		this->records = new Data[unReport.totalRecords];

		for (int i = 0;i < unReport.totalRecords;i++)
		{
			(this->records[i] = (unReport.records)[i]);
		}
	}
	else
	{
		this->records = NULL;
	}
	this->totalAmmount = unReport.totalAmmount;
	this->totalMinutes = unReport.totalMinutes;
	this->fileName = unReport.fileName;
	return (*this);
}
bool Report::operator ==(const Report & unReport)const
{
	bool record = false;
	for (int i = 0;i < unReport.totalRecords;i++)
	{
		if (records[i] == unReport.records[i])
		{
			record = true;
		}
		return record;

	}
	return (this->totalRecords == unReport.totalRecords && this->totalAmmount == unReport.totalAmmount &&
		this->totalMinutes == unReport.totalMinutes && this->fileName == unReport.fileName);
}

ostream & operator <<(ostream & os, const Report & unReport)
{
	for (int i = 0; i < unReport.totalRecords;i++)
	{
		os << "Record number is:  " << unReport.records[i] << endl;
	}

	return os;
}
istream & operator >>(istream & is, Report & unReport)
{
	cout << "Enter record:" << unReport.records << endl;;
	cout << "Total Records are: ";
	is >> unReport.totalRecords;
	cout << "Total Ammount: ";
	is >> unReport.totalAmmount;
	cout << "Total Minutes:";
	is >> unReport.totalMinutes;
	cout << "File name is: ";
	is >> unReport.fileName;
	return is;
}