#pragma once
#include <iostream>
#include <string>
#include "MyLib.h"

using namespace::std;

#ifndef MENU_H
#define MENU_H

enum Choice { numeric, alpha };
enum Lang { eng, spa };

class Menu {
private:
	string * items;
	string title;
	int totalItems;
	Lang lang;
	Choice choice;
	int option;
	flag validate;
	flag subMenu;

public:
	Menu()
	{
		init();
	}
	Menu(const char * title)
	{
		init();

		this->title = title;
	}
	Menu(const Menu & aMenu)
	{
		init();

		this->title = aMenu.title;

		if (!aMenu.isEmpty()) {
			for (int i = 0; i < aMenu.totalItems; ++i) {
				addItem(aMenu.items[i]);
			}

			this->choice = aMenu.choice;
			this->validate = aMenu.validate;
			this->subMenu = aMenu.subMenu;
			this->title = aMenu.title;
		}
	}
	void init() {
		this->items = NULL;
		this->totalItems = 0;
		this->lang = eng;
		this->choice = numeric;
		this->validate = false;
		this->subMenu = false;
		this->title = "Menu";
	}
	~Menu()
	{
		delete[] this->items;
	}
	bool isEmpty() const
	{
		return this->totalItems == 0;
	}
	void addItem(string item)
	{
		int idx = this->totalItems;
		string * tmp;
		int i;

		if (isEmpty()) {
			this->items = new string[1];
		}
		else {
			tmp = new string[this->totalItems];

			for (i = 0; i < this->totalItems; i++) {
				tmp[i] = this->items[i];
			}

			delete[] this->items;

			this->items = new string[this->totalItems + 1];

			for (i = 0; i < this->totalItems; i++) {
				this->items[i] = tmp[i];
			}

			delete[] tmp;
		}

		this->items[idx] = item;
		this->totalItems++;
	}

	bool check()
	{
		if (this->choice == alpha) {
			this->validate = between(char(option), 'A', char('A' + this->totalItems));
		}
		else {
			this->validate = between(option, 1, this->totalItems + 1);
		}

		return this->validate;
	}
	void setChoice(Choice choice)
	{
		this->choice = choice;
	}
	void setOption(int option)
	{
		this->option = upper(option); check();
	}
	void setLang(Lang lang)
	{
		this->lang = lang;
	}
	void setTitle(string title)
	{
		this->title = title;
	}
	void setSubMenu(flag subMenu)
	{
		subMenu = subMenu;
	}
	Lang getLanguage() const
	{
		return this->lang;
	}
	int getOption() const
	{
		return this->option;
	}
	int getLast() const
	{
		if (this->choice == alpha) {
			return char('A' + this->totalItems);
		}
		else {
			return this->totalItems + 1;
		}
	}
	friend ostream & operator <<(ostream & os, Menu & unMenu)
	{
		int i;
		char ch = 'a';

		cls();

		os << unMenu.title << endl << endl;

		for (i = 0; i < unMenu.totalItems; i++) {
			os << "\t";
			if (unMenu.choice == alpha) os << char(ch + i); else os << i + 1;
			os << ".) " << unMenu.items[i] << endl;
		}

		os << "\t";
		if (unMenu.choice == alpha) os << char(ch + i); else os << i + 1;
		os << ".) ";

		if (unMenu.lang == eng) {
			if (unMenu.subMenu)
				os << "Return";
			else
				os << "Exit";

			os << "\n\nChoose: ";
		}
		else {
			if (unMenu.subMenu)
				os << "Regresar";
			else
				os << "Salir";

			os << "\nOpcion: ";
		}

		return os;
	}
	friend istream & operator >>(istream & in, Menu & unMenu)
	{
		do {
			char opt;

			in >> opt;

			unMenu.setOption((unMenu.choice == alpha ? opt : opt - '0'));

			if (!unMenu.check()) {
				cerr << "\nError: Wrong choice!!!\n\n";
				pause();

				cout << unMenu;
			}
		} while (!unMenu.check());

		return in;
	}

		
};

#endif // MENU_H