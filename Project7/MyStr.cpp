#include <iostream>
#include"Util.h"
#include "MyStr.h"
using namespace std;
namespace seneca {
	MyStr::MyStr() : m_data(nullptr) {}

	MyStr::MyStr(const char* cstr) : m_data{ nullptr }//initialization area
	{
		ut.aloCopy(m_data, cstr);
	}
	MyStr::MyStr(const char* cstr, size_t maxLen) : m_data(nullptr)//initialization area
	{
		ut.aloCopy(m_data, cstr, maxLen);
	}

	MyStr::~MyStr()
	{
		delete[] m_data;
	}
	MyStr& MyStr::set(const char* cstr)
	{
		ut.aloCopy(m_data, cstr);
		return *this;
	}
	MyStr& MyStr::cat(const char* data)
	{
		//memory resizing
		if (data) {
			char* temp = new char[(m_data ? ut.strlen(m_data): 0u) + ut.strlen(data) + 1];
			ut.strcpy(temp, m_data);
			delete[] m_data;
			m_data = temp;
			ut.strcat(m_data, data);
		}
		return *this;
	}
	ostream& MyStr::print() const
	{

		return cout << (m_data ? m_data : "");

	}
}
