#include<iostream>
#include<fstream>
#include "Mystr.h"
using namespace std;
using namespace seneca;

int main() {
	ofstream file("name.txt");
	MyStr s = "Fred";
	MyStr name = "Jack";
	name = --s;
	cout << name<< endl;

	name = s--;
	//s.operator--(int); post fix!!!!!!!!!
	cout << name << endl;

	file << "Here is the value of the MyStr object: " << name << endl;
	
	return 0;
}