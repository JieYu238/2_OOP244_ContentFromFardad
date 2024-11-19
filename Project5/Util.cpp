#include<iostream>
#include "Util.h"
using namespace std;
namespace seneca {
	Util ut;	//only accessible in Util.cpp

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
		cin.getline(str,len+1);//for the null
		while (cin.fail()) {
			cout << "Maximum "<<len <<" chars! retry:\n>";
			cin.clear();
			cin.ignore(10000, '\n');
			cin.getline(str, len+1);
		}
	}


}
