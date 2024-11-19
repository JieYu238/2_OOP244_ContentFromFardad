#include <iostream>
#include"Util.h"
#include "MyStr.h"
using namespace std;
namespace seneca {
	MyStr::MyStr() : m_data(nullptr){}

	MyStr::MyStr(const char* cstr) : m_data{nullptr}//initialization area
	{
		if (cstr) {
			m_data = new char[ut.strlen(cstr) + 1];
			ut.strcpy(m_data, cstr);
		}
	}
	MyStr::MyStr(const char* cstr, size_t maxLen): m_data(nullptr)//initialization area
	{
		if (cstr) {
			size_t len = ut.strlen(cstr);
			m_data = new char[(len<maxLen?len:maxLen)+1];
			ut.strcpy(m_data, cstr, maxLen);

			//if (ut.strlen(cstr) < maxLen) {
			//	//*MyStr(cstr); Can not call constructor, it is not a function!!!!
			//}
		}
	}
	MyStr::~MyStr()
	{
		delete[] m_data;
	}
	MyStr& MyStr::set(const char* cstr)
	{
		delete[] m_data;
		m_data = nullptr;
		if (cstr) {
			m_data = new char[ut.strlen(cstr) + 1];
			ut.strcpy(m_data, cstr);
		}
		return *this;
	}
	ostream& MyStr::print() const
	{
		
		return cout << (m_data?m_data:"");
		
	}
}
