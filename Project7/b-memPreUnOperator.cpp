#include<iostream>
#include "Mystr.h"
using namespace std;
using namespace seneca;

int main() {
	MyStr s = "Fred";
	--s;
	//s.operator--();
	s.print() << endl;

	--s;
	s.print() << endl;

	--s;
	s.print() << endl;

	--s;
	s.print() << endl;

	--s;
	s.print() << endl;
	return 0;
}