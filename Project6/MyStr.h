#ifndef SENECA_MYSTR_H
#define SENECA_MYSTR_H
#include<iostream>//in header file, not allow using namespace std!!!
namespace seneca {
	class MyStr
	{
		char* m_data;
	public:
		MyStr();
		MyStr(const char* cString);
		MyStr(const char* cString, size_t maxLen);
		~MyStr();
		MyStr& set(const char* cString);
		std::ostream& print()const;
	};
}

#endif//!SENECA_MYSTR_H

