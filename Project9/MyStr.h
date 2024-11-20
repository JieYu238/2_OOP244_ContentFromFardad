#ifndef SENECA_MYSTR_H
#define SENECA_MYSTR_H
#include<iostream>
//in header file, not allow using namespace std!!!
namespace seneca {
	class MyStr
	{
		char* m_data;
	public:
		MyStr(const MyStr& toCopy);
		MyStr();
		MyStr(const char* cString);
		MyStr(const char* cString, size_t maxLen);
		~MyStr();
		MyStr& operator=(const char* cString);
		MyStr& operator+=(const char* cString);
		MyStr& operator=(const MyStr& mstr);
		MyStr& operator+=(const MyStr& mstr);

		MyStr operator+(const MyStr& rightOperand)const;


		MyStr& operator--();
		MyStr& operator--(int);//post fix

		//overload do what is supposed to do!
		operator const char* ()const;
		operator size_t()const;
		
		char& operator[](size_t index);

		std::ostream& print(std::ostream& ostr = std::cout)const;
		std::istream& read(char delimiter = '\n', std::istream& istr = std::cin);
	};
	std::ostream& operator<<(std::ostream& ostr, const MyStr& str);
	MyStr operator+(const char* cstr, const MyStr& rightOperand);
}

#endif//!SENECA_MYSTR_H

