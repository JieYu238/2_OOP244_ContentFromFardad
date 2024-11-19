#include<iostream>
#include "Util.h"
using namespace std;
namespace seneca {
	Util ut;	//only accessible in Util.cpp

	size_t Util::strlen(const char* str) {
		int len{};
		while (str[len]) {
			len++;
		}
		return len;
	}

	char* Util::strcpy(char* des, const char* src) {
		int i;
		for (i = 0; src[i]; i++) {
			des[i] = src[i];
		}
		des[i] = 0;
		return des;
	}

	char* Util::strcpy(char* des, const char* src, size_t len) {
		int i;
		for (i = 0; src[i] && i < len; i++) {
			des[i] = src[i];
		}
		des[i] = 0;
		return des;
	}

	char* Util::strcat(char* des, const char* src)
	{
		size_t len = ut.strlen(des);
		size_t i = 0;
		while (src[i]) {
			des[i + len] = src[i];
			i++;
		}
		des[i + len] = char(0);
		return des;
	}

	void Util::aloCopy(char*& des, const char* src)
	{
		delete[] des;
		des = nullptr;
		if (src) {
			des = new char[ut.strlen(src) + 1];
			ut.strcpy(des, src);
		}
	}

	void Util::aloCopy(char*& des, const char* src, size_t maxLen)
	{
		delete[] des;
		des = nullptr;
		if (src) {
			size_t len = ut.strlen(src);
			des = new char[(len < maxLen ? len : maxLen) + 1];
			ut.strcpy(des, src, maxLen);
		}
	}

	int Util::getInt()
	{
		int val{};
		cin >> val;
		while (cin.fail()) {
			cout << "Invalid int, retry: ";
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> val;
		}
		//cin.ignore();	//only one character
		cin.ignore(10000, '\n');
		return val;
	}

	void Util::getCstr(char* str, size_t len)
	{
		cin.getline(str, len + 1);//for the null
		while (cin.fail()) {
			cout << "Maximum " << len << " chars! retry:\n>";
			cin.clear();
			cin.ignore(10000, '\n');
			cin.getline(str, len + 1);
		}
	}

	bool Util::getCstr(char*& str)
	{
		str = nullptr;
		char buf[MAX_DYNAMIC_READ];
		cin.getline(buf, MAX_DYNAMIC_READ);
		if (cin) {
			str = new char[this->strlen(buf) + 1];	//this keyword makes that we can use the method in Util
			this->strcpy(str, buf);
		}
		else {
			cin.clear();
			cin.ignore(10000, '\n');
		}

		return bool(str);
	}

	//get and getline, getline hits the delimiter and stop it.

	bool Util::yes(const char* prompt)
	{
		bool done = false;
		char res{};
		char newline{};
		if (prompt) cout << prompt;

		//res = cin.get();
		//cin.get(res);
		do {
			res = cin.get();
			newline = cin.get();
			if (newline != '\n') {
				cin.ignore(10000, '\n');

			}
			else if (res == 'y' || res == 'Y' || res == 'n' || res == 'N') {
				done = true;
			}
		} while (!done && cout << "(Y)es/(N)o only, please retry\n> ");

		return res == 'Y' || res == 'y';
	}


}
