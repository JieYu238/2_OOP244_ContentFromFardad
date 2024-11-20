#include <iostream>
#include"Util.h"
#include "MyStr.h"
using namespace std;
namespace seneca {
	/*
	follow rule of Three if you have a class with resource
	copy constructor
	copy assignment operator
	destructor
	
	*/

	MyStr::MyStr(const MyStr& toCopy):m_data(nullptr)//copy constructor
	{
		if (toCopy.m_data) {
			m_data = new char[ut.strlen(toCopy.m_data) + 1];
			ut.strcpy(m_data, toCopy.m_data);
		}
	}
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
	MyStr& MyStr::operator=(const char* cstr)
	{
		ut.aloCopy(m_data, cstr);
		return *this;
	}
	MyStr& MyStr::operator+=(const char* data)
	{
		//memory resizing
		if (data) {
			char* temp = new char[(m_data ? ut.strlen(m_data) : 0u) + ut.strlen(data) + 1];
			ut.strcpy(temp, m_data);
			delete[] m_data;
			m_data = temp;
			ut.strcat(m_data, data);
		}
		return *this;
	}
	MyStr& MyStr::operator+=(const MyStr& mstr)
	{
		return operator+=(mstr.m_data);
	}
	MyStr MyStr::operator+(const MyStr& rightOperand) const
	{
		MyStr result = *this;
		result += rightOperand;
		return result;
	}
	MyStr& MyStr::operator--()
	{
		if (m_data && m_data[0]) {
			MyStr temp = &m_data[1];
			*this = temp;
		}
		return *this;
	}
	MyStr& MyStr::operator--(int)
	{
		if (m_data && m_data[0]) {

			MyStr temp(m_data, ut.strlen(m_data) - 1);
			operator = (temp);//same as line 46 
		}
		return *this;
	}
	MyStr::operator const char* () const
	{
		return m_data;
	}
	MyStr::operator size_t() const
	{
		return m_data ? ut.strlen(m_data) : size_t(0);
	}
	char& MyStr::operator[](size_t index)
	{
		return m_data[index % size_t(*this)];
	}
	MyStr& MyStr::operator=(const MyStr& mstr)//copy assignment operator
	{
		if (this != &mstr) {
			operator=(mstr.m_data);
		}
		return *this;
	}

	ostream& MyStr::print(ostream& ostr) const
	{

		return ostr << (m_data ? m_data : "");

	}
	std::istream& MyStr::read(char delimiter, std::istream& istr)
	{
		ut.getDynCstr(m_data, istr, delimiter);
		return istr;
	}
	std::ostream& operator<<(std::ostream& ostr, const MyStr& str)
	{

		return str.print(ostr);
	}
	MyStr operator+(const char* cstr, const MyStr& rightOperand)
	{
		MyStr result = cstr;
		result += rightOperand;
		return result;
	}
}
