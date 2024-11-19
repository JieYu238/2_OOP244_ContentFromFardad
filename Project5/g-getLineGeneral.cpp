#include<iostream>
#include "Util.h"
using namespace std;
using namespace seneca;
int main() {
	Util ut;
	char name[81];
	cout << "Please enter name\n>";
	cin.getline(name, 81);
	cout << name << endl;

	cout << "Please enter name\n>";
	cin.getline(name, 81);
	cout << name << endl;
	
	return 0;
}