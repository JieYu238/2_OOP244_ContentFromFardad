#include<iostream>
//#include"pointers.h" make sure user-defined comes after the system library
using namespace std;

void foo(int a) {
	cout << a << endl;
}

int main() {
	int x;
	x = 34; // int x = 34; initialization and setting to(x has garbage value in it before being setting)
	int y(34);
	int z{ 34 };
	cout << x << " " << y << " " << z << endl;

	return 0;
}


