#include<iostream>
#include "Mystr.h"
using namespace std;
using namespace seneca;

int main() {
	/*	pointers and references explained
	int a;
	int& ref = a;
	int* p;
	p = &a;


	*p is the same as ref and same as a
	B
	int* q;
	q = &a;
	q = &ref;
	q = &*p;
	
	*/



	MyStr S = "Hello There!!!";
	MyStr T("Hello There!!!", 5);
	S.print() << endl;
	S.set("A new string now!").print() << endl;	//cascating effect
	S.print() << endl;
	T.print() << endl;

	T.cat(", How are you today?").print() << endl;
	return 0;
}