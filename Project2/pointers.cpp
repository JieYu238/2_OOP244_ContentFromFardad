#include<iostream>
using namespace std;



int main() {
	int a = 25;
	int* p = &a; // int pointer p = addressOf a;
	//if * comes after a type, it means "type pointer"
	*p = 12345;//targetOf p = 12345;
	//if * * comes in front of a variable as a unary operator, it means "target of"
	cout << a << endl;

	return 0;
}


