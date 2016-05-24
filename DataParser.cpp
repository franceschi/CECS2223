#include "DataParser.h"
#include<string>
#include"Person.h"
#include"Report.h"

DataParser::DataParser()
{
	record;
}

DataParser::DataParser(string line)
{
	parseLine(line);
}
DataParser::DataParser(const DataParser & unDataParser)
{
	this->record = unDataParser.record;
	this->fecha = unDataParser.fecha;
}
DataParser::~DataParser()
{

}
Data  DataParser::parseLine(string line)
{
	Person client;//atributos de clase Person y Data
	string callDate;
	bool longDistance;
	string timeCallBegin;
	string timeCallEnd;
	string callNoFrom;
	string callNoTo;
	string firstName;
	string lastName;
	string middleName;
	string maidenName;
	//substr demostrara en que linea 
	firstName = line.substr(0, 25);
	middleName = line.substr(25, 25);
	lastName = line.substr(50, 50);
	maidenName = line.substr(100, 50);
	callDate = line.substr(150, 8);
	if (line.substr(158, 1) == "Y")//yes or no
		longDistance = true;
	else
		longDistance = false;
	timeCallBegin = line.substr(159, 6);
	timeCallEnd = line.substr(165, 6);
	callNoFrom = line.substr(171, 10);
	callNoTo = line.substr(181, 10);


	record.setClient(Person(firstName, middleName, lastName, maidenName));
	record.setCallDate(callDate);
	record.setLongDistance(longDistance);
	record.setTimeCallBegin(timeCallBegin);
	record.setTimeCallEnd(timeCallEnd);
	record.setCallNoFrom(callNoFrom);
	record.setCallNoTo(callNoTo);	
	return record;
}
void DataParser::setRecord(string line)
{
	parseLine(line);
}
Data DataParser::getRecord() const
{
	return (this->record);
}
string DataParser::date(string date)
{
	string fecha;
	fecha = date.substr(191, 2) + "/" + date.substr(193, 2) + "/" + date.substr(195, 4);
	return fecha;
}
void DataParser::setFecha(int fecha)
{
	this->fecha = fecha;
}
int DataParser::getFecha()const
{
	return(this->fecha);
}
/*
ostream & operator <<(ostream & os, const DataParser & unDataParser)
{
	Person person;
	os << "Information: " << endl;
	os << "Client info: " << unDataParser.record.getClient();
	os << "Call Date: " << unDataParser.record.getCallDate() << endl;
	os << "Is the Call Long Distance :" << unDataParser.record.getLongDistance() << endl;
	os << "Time the Called begun: " << unDataParser.record.getTimeCallBegin() << endl;
	os << "Time the Call ended: " << unDataParser.record.getTimeCallEnd() << endl;
	os << "Number from the Caller: " << unDataParser.record.getCallNoFrom() << endl;
	os << "Number from the call Reciever: " << unDataParser.getRecord.getCallNoTo() << endl;
	os << "Date Checked: " << unDataParser.fecha << endl;
	return os;
}
istream & operator >>(istream & is, DataParser & unDataParser)
{
	cout << "Enter information Required: " << endl;
	is >> unDataParser.record.setClient << endl;
	cout << "Enter the Call Date" << endl;
	is >> unDataParser.record.setCallDate << endl;
	cout << "Enter if it is Long Distance: " << endl;
	is >> unDataParser.record.setLongDistance << endl;
	cout << "Enter when the called begin" << endl;
	is >> unDataParser.record.setTimeCallBegin << endl;
	cout << "Enter when the called" << endl;
	is >> unDataParser.record.setTimeCallEnd << endl;
	cout << "Enter number of Caller" << endl;
	is >> unDataParser.record.setCallNoFrom << endl;
	cout << "Enter number of Recever" << endl;
	is >> unDataParser.record.setCallNoTo << endl;
	cout << "Enter Date Checked: " << endl;
	is >> unDataParser.fecha;
	return is;
}
*/