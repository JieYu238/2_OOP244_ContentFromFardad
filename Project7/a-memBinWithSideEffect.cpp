#include<iostream>
#include "Mystr.h"
using namespace std;
using namespace seneca;

int main() {
	MyStr S = "something to overwrite";
	MyStr T;

	cout << "Name:\n> ";
	S.read();
	//T.operator=("Hello");
	T = "Hello";
	//T.operator+=(" ").operator+=(S).operator+=(", how are you?").print(clog) << endl;
	//T.operator+=(" ");
	T += " ";
	//T.operator+=(S);
	T += S;
	//T.operator+=(", how are you?");
	T += ", how are you?";
	T.print(clog) << endl;

	return 0;
}