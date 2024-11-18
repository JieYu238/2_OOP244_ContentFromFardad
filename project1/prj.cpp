#define _CRT_SECURE_NO_WARNINGS
#include<iostream>//literally copy and paste the content from IO stream
//input and output stream
#include<cstring>
using namespace std;

struct Teacher {
private:
	char m_subject[7]{};//initialize subject to default 0
	char m_name[41]{};
	int m_rating{};
	int m_grading{};//m underline at the beginning of every variable is required if the variable is an attribute
public:
	void set(const char* subject, const char* name, int rating, int grading) {
		strcpy(m_name, name);
		strcpy(m_subject, subject);
		m_rating = rating;
		m_grading = grading;
	}

	void set(const char* subject) {
		strcpy(m_subject, subject);
	}

	void set() {
		char name[41]{}, subject[7]{};
		int rating{}, grading{};
		cout << "Name:\n> ";
		cin >> name;
		cout << "Subject:\n> ";
		cin >> subject;
		cout << "Rating:\n> ";
		cin >> rating;
		cout << "Grading:\n> ";
		cin >> grading;
		set(subject, name, rating, grading);
	}

	void print() {
		cout << m_name << ": subject (" << m_subject << ")" << endl
			<< "Rating: " << m_rating << endl
			<< "Grading: " << m_grading << endl;
	}
};





int main() {
	Teacher T, U;
	T.set("OOP244", "Fred Soley", 4, 10);
	
	U.set("IPC144", "Fardeed Soley", 8, 4);

	T.print();
	U.print();

	T.set("OOP345");
	T.print();

	U.set();
	U.print();
	cout << "Hello OOP244" << endl;
	return 0;
} 