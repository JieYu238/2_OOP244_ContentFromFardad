#define _CRT_SECURE_NO_WARNINGS	
#include<iostream> //C++ library-> C library -> user-defined library
#include<cstring>
#include "Name.h"
using namespace std;
namespace seneca {
	int counter = 0;
	void Name::set(const char* name, const char* surname) {
		deallocate();
		m_givenName = new char[strlen(name) + 1];
		m_surname = new char[strlen(surname) + 1];
		if (m_givenName && m_surname) {	// the condition checks three things, not nullptr, valid memory address
			strcpy(m_givenName, name);
			strcpy(m_surname, surname);
		}
		else {
			deallocate();
		}
	}

	void Name::deallocate() {
		delete[] m_givenName;
		delete[] m_surname;
		m_givenName = nullptr;
		m_surname = nullptr;
	}

	void Name::print() const {
		if (m_givenName && m_surname && m_givenName[0] && m_surname[0]) {
			cout << m_givenName << " " << m_surname << endl;
		}
		else {
			cout << "No name!" << endl;
		}
		//m_givenName = nullptr;	can not because print is const
	}

	void Name::read() {
		char name[41]{};
		char surname[81]{};
		cout << "Name:\n>";
		cin >> name;
		cout << "Surname:\n>";
		cin >> surname;
		set(name, surname);
	}

	size_t Name::length() const
	{
		size_t len{};
		if (m_givenName && m_surname && m_givenName[0] && m_surname[0]) {
			len = strlen(m_givenName) + strlen(m_surname) + 1;
		}
		return len;
	}
	Name::Name()
	{
		m_givenName = m_surname = nullptr;
		cout << "Name " << ++counter << " is created!" << endl;
	}

	Name::~Name() {
		deallocate();
		cout << "Name" << --counter << " is deleted!" << endl;
	}
}