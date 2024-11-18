#include<iostream>
//#include"pointers.h" make sure user-defined comes after the system library
using namespace std;

int main() {
	int a = 234;
	int& r = a; //& comes after type, we call that r is an allias for a in C++
	cout << r << endl;
	r = 432;
	cout << a << endl;

	return 0;
}


