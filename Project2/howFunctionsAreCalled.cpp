#include<iostream>
//#include"pointers.h" make sure user-defined comes after the system library
using namespace std;

void foo(int a) {
	cout << a << endl;
}

int main() {
	int x{ 35 };
	foo(40);	//foo(int a = 40);
	foo(x);		//foo(int a = x);

	return 0;
}


