#include<iostream>

using namespace std;

int main() {
	cout << "Welcome to OOP244 Nov18" << endl;
	
	//int* p = new int{ 20 };//curly brace means that one integer was set to 20

	int* p = new int;	//single dma
	cout << "int: ";
	cin >> *p;
	cout << "int was: " << *p;
	delete p;	//delete one thing, how you create how you delete


	return 0;
}