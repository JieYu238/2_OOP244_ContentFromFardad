#include<iostream>
#include "Util.h"
using namespace std;
using namespace seneca;
int main() {
	
	char name[81];
	cout << "Please enter name\n>";
	ut.getCstr(name, 5);
	cout << name << endl;

	cout << "Please enter name\n>";
	ut.getCstr(name, 80);
	cout << name << endl;
	
	return 0;
}