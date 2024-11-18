#include<iostream>
using namespace std;//avoid conflict

/*
	types: two main categories, integral, real numbers.
	ints:
	char
	short
	int
	long
	long long
	
	Real://relative precision, do not compare between two real numbers
	float
	double 
	long double

*/

struct Car {
	int m_speed{};
	char m_model[51]{};
};
int main() {
	bool ok{};//default the value as false with empty curly brace, same as bool ok = false;
	if (ok) {
		cout << "this will no happen!" << endl;
	}
	ok = true;
	if (ok) {
		cout << "this will happen!" << endl;
	}

	ok = 234;
	cout << ok << endl;

	Car parking[200];

	return 0;
}