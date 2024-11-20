#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"Str.h"

using namespace std;
using namespace seneca;

void show(Str s) {
	cout << s << endl;
}

int main() {
	Str name = "Homer";
	Str fullname;
	show(name);	// show (Str s = name);
	fullname = name;	//potaatos
	fullname.operator=(name);	//potatos

	
	return 0;
}