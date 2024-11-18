#include<iostream>
//#include"pointers.h" make sure user-defined comes after the system library
using namespace std;

void foo(int& a) {
	cout << a << endl;
	a = 12345;
}

int main() {
	int x = 34;
	foo(x);	//foo(int& a = x);
	cout << x << endl;//change single thing with references
	return 0;
}


