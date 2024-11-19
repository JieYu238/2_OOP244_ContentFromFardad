#include<iostream>
#include"Util.h"
using namespace std;
using namespace seneca;
int main() {
	Util ut;
	int num = 10;
	cout << "Enter an int\n>";
	num = ut.getInt();
	cout << "You entered " << num << endl;
	
	cout << "Enter an int\n>";
	num = ut.getInt();
	cout << "You entered " << num << endl;

	return 0;
}