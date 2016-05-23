#pragma once
#include "Person.h"

class Account
{
	friend ostream & operator << (ostream & out, const Account & anAccount);
	friend istream & operator >> (istream & in, Account & anAccount);

public:

	Person client;
	string accountNo;
	string accountType; //Checks, Savings
	double balance;

	inline Account::Account(Person client, string accountNo, string accountType, double balance)
	{
		//this->Person = client;
		this->accountNo = accountNo;
		this->accountType = accountType;
		this->balance = balance;
	}

	inline Account::Account(const Account & anAccount)
	{
		//this->Person = aPerson.person;
		this->accountNo = anAccount.accountNo;
		this->accountType = anAccount.accountType;
		this->balance = anAccount.balance;
	}

	inline Account::Account()
	{
		//this->Person= "Person" //To-Do
		this->accountNo = "033-329-575";
		this->accountType = "Savings";
		this->balance = 12587.00;
	}

	~Account()
	{
	}
};

