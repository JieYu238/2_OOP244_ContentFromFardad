
#include<iostream>
#include"Str.h"
#include"Utils.h"

using namespace std;
using namespace seneca;

int main() {
	char space[] = " ";
	Str name = "Homer ";
	Str surname = "Simpson";

	Str fullname;
	fullname = name + surname;
	
	cout << fullname << endl;

	return 0;
}