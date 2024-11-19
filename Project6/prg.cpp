#include<iostream>
#include "Mystr.h"
using namespace std;
using namespace seneca;

int main() {
	
	MyStr S="Hello There!!!";
	MyStr T("Hello There!!!", 5);
	S.print() << endl;
	S.set("A new string now!").print()<< endl;	//cascating effect
	S.print()<< endl;
	T.print()<< endl;
	return 0;
}