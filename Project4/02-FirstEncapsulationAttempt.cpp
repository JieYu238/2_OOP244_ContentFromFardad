#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

struct Name {

	char* m_givenName{};
	char* m_surname{};

	void set(const char* name, const char* surname);
	void deallocate();
	void print()const;	//print is a member function that does not change the member
	void read();
};



int main() {
	Name* names = nullptr;
	size_t num{};
	cout << "how many names/.\n> ";
	cin >> num;
	names = new Name[num];
	names[0].print();
	for (size_t i = 0; i < num; i++) {
		names[i].read();
	}

	for (size_t i = 0; i < num; i++) {
		names[i].print();
	}


	for (size_t i = 0; i < num; i++) {
		names[i].deallocate();
	}

	delete[] names;
	return 0;
}

void Name::set(const char* name, const char* surname) {
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

void Name:: deallocate() {
	delete[] m_givenName;
	delete[] m_surname;
	m_givenName = nullptr;
	m_surname = nullptr;
}

void Name::print() const{
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