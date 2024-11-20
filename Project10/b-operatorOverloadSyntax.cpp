/*
TypeA A;
TypeB b;
TypeC C;

A = B @ C;

TypeA TypeB::operator(TypeC rhs);

//gun to the head
TypeA operator(TypeB lhs, TypeC rhs);

A = @B; //prefix
TypeA TypeB::operator();

A = B@; //postfix
TypeA TypeB::operator(int);

//gun to the head
TypeA operator(TypeB oper);

TypeA operator(TypeB oper, int);

*/

#include<iostream>
#include"Str.h"

using namespace std;
using namespace seneca;


int main() {
	Str name = "Homer";
	Str fname;

	fname = name += " Simpson";

	/*fname.operator=(name.operator+=("Simpson"));*/



	return 0;
}