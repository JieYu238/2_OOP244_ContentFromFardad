#include<iostream>
#include "Util.h"
using namespace std;
using namespace seneca;
/*
cout, clog, cerr
*/
int main() {

	char name[81];
	clog << "Please enter name\n>";
	ut.getCstr(name, 5);
	clog << name << endl;

	clog << "Please enter name\n>";
	ut.getCstr(name, 80);
	clog << name << endl;

	return 0;
}