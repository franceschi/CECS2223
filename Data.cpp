#include "Data.h"
using namespace std;

Data::Data()//default
{
	setClient(Person(" "," "," "," "));
	setCallDate(" ");//valores asignados por default
	setLongDistance(false);
	setTimeCallBegin(" ");
	setTimeCallEnd(" ");
	setCallNoFrom(" ");
	setCallNoTo(" ");

}
Data::Data (Person client, string callDate, bool longDistance, string timeCallBegin, string timeCallEnd, string callNoFrom, string callNoTo)//parameter constructor
{
	setClient(client);
	setCallDate(callDate);
	setLongDistance(longDistance);
	setTimeCallBegin(timeCallBegin);
	setTimeCallEnd(timeCallEnd);
	setCallNoFrom(callNoFrom);
	setCallNoTo(callNoTo);
}
Data::Data(const Data & unData)//copy constructor
{
	this->client = unData.client;
	this->callDate = unData.callDate;
	this->longDistance = unData.longDistance;
	this->timeCallBegin = unData.timeCallBegin;
	this->timeCallEnd = unData.timeCallEnd;
	this->callNoFrom = unData.callNoFrom;
	this->callNoTo = unData.callNoTo;
}
Data::~Data()//destructor
{

}
void Data::setClient(const Person & client)//setters
{
	this->client = client;
}
void Data::setCallDate(string callDate)
{
	this->callDate = callDate;
}
void Data::setLongDistance(bool longDistance)
{
	if (longDistance == 1)//verificacion del valor para clasificar en true or false
	{
		longDistance = true;
		this->longDistance = longDistance;
	}
	else
	{
		longDistance = false;
		this->longDistance = longDistance;
	}
}
void Data::setTimeCallBegin(string timeCallBegin)
{
	this->timeCallBegin = timeCallBegin;
}
void Data::setTimeCallEnd(string timeCallEnd)
{
	this->timeCallEnd = timeCallEnd;
}
void Data::setCallNoFrom(string callNoFrom)
{
	this->callNoFrom = callNoFrom;
}
void Data::setCallNoTo(string callNoTo)
{
	this->callNoTo = callNoTo;
}
Person Data::getClient()const//getters
{
	return (this->client);
}
string Data::getCallDate()const
{
	return (this->callDate);
}
bool Data::getLongDistance()const
{
	return(this->longDistance);
}
string Data::getTimeCallBegin()const
{
	return (this->timeCallBegin);
}
string Data::getTimeCallEnd()const
{
	return (this->timeCallEnd);
}
string Data::getCallNoFrom()const
{
	return (this->callNoFrom);
}
string Data::getCallNoTo()const
{
	return(this->callNoTo);
}
Data & Data :: operator =(const Data & unData)//asigna los valores
{
	this->client = unData.client;
	this->callDate = unData.callDate;
	this->longDistance = unData.longDistance;
	this->timeCallBegin = unData.timeCallBegin;
	this->timeCallEnd = unData.timeCallEnd;
	this->callNoFrom = unData.callNoFrom;
	this->callNoTo = unData.callNoTo;
	return (*this);
}
bool Data :: operator ==(const Data & unData)const//verificacion de igualdad de todos los valores
{
	return (this->client == unData.client && this->callDate == unData.callDate && this->longDistance == unData.longDistance &&
		this->timeCallBegin == unData.timeCallBegin && this->timeCallEnd == unData.timeCallEnd && this->callNoFrom == unData.callNoFrom &&
		this->callNoTo == unData.callNoTo);
}
ostream & operator <<(ostream & output, const Data & unData)//imprime valores
{
	Person person;
	output << "Providing Client Information:" << endl;
	output << person.getFirstName();
	output << person.getLastName();
	output << person.getMiddleName();
	output << person.getMaidenName();
	output << endl << "Call Date: " << unData.callDate << endl;
	output << "longDistance Charge: " << unData.longDistance ? " Y " : " N ";//Yes or No question
	output << "Time Call Begin: " << unData.timeCallBegin;
	output << "Time Call End: " << unData.timeCallEnd;
	output << "Call # From: " << unData.callNoFrom;
	output << "Call # to: " << unData.callNoTo;
	return output;
}
istream & operator >>(istream & input, Data & unData)//pide valores
{
	cout << "Client Information: " << endl;
	input >> unData.client;
	cout << "Call Date: " << endl;
	input >> unData.callDate;
	cout << " Long Distance: " << endl;
	input >> unData.longDistance;
	cout << " Time Call Begin: " << endl;
	input >> unData.timeCallBegin;
	cout << " Time Call End: " << endl;
	input >> unData.timeCallEnd;
	cout << " Call # From : " << endl;
	input >> unData.callNoFrom;
	cout << " Call # To: " << endl;
	input >> unData.callNoTo;
	return input;
}
