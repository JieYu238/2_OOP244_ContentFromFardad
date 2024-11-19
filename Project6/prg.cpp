#include<iostream>
#include "Mystr.h"
using namespace std;
using namespace seneca;

int main() {
	
	MyStr S="Hello There!!!";
	MyStr T("Hello There!!!", 5);
	S.print();
	cout << endl;
	T.print();
	return 0;
}