#include <iostream>
#include <string>
#include <iostream>
#ifndef DATA_H
#define DATA_H
#include "Person.h"
using namespace std;
#pragma once
//Trata de establecer coneccion entre la clase data y person, utilizando informacion de la clase person busca informacion de las llamadas hechas por el cliente
//Person(client) con esto saca la informacion de los datos escritos en la clase
class Data
{
private:
	Person client;//atributo de la clase person
	string callDate;//atributos esenciales de la clase Data
	bool longDistance;
	string timeCallBegin;
	string timeCallEnd;
	string callNoFrom;
	string callNoTo;
public:
	Data();//default
	Data(Person client, string callDate, bool longDistance, string timeCallBegin, string timeCallEnd, string callNoFrom, string callNoTo);//parameter constructor
	Data(const Data & unData);//copy constructor
	~Data();//destructor
	void setClient(const Person & client);//setters
	void setCallDate(string callDate);
	void setLongDistance(bool longDistance);
	void setTimeCallBegin(string timeCallBegin);
	void setTimeCallEnd(string timeCallEnd);
	void setCallNoFrom(string callNoFrom);
	void setCallNoTo(string callNoTo);
	Person getClient()const;//getters
	string getCallDate()const;
	bool getLongDistance()const;
	string getTimeCallBegin()const;
	string getTimeCallEnd()const;
	string getCallNoFrom()const;
	string getCallNoTo()const;
	Data & operator = (const Data & unData);//operador de asignar
	bool operator ==(const Data & unData)const;//operador de igualdad
	friend ostream & operator <<(ostream & output, const Data & unData);//friend operador, imprime valores 
	friend istream & operator >>(istream & input, Data & unData);//friend operator, manipula los valores de los atributos

};

#endif // DATA_H
