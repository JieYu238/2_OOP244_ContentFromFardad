#ifndef SENECA_NAME_H
#define SENECA_NAME_H
//never include header file
namespace seneca {
	class Name {//difference between struct and class, class is private by default while struct is public by default
		char* m_givenName;
		char* m_surname;
		void set(const char* name, const char* surname);// !!!do not use the same name of argument and attribute.
		void deallocate();
		
	public:
		Name();	//construction
		~Name();	//destruction
		
		void print()const;	//print is a member function that does not change the member
		void read();
		size_t length()const;
	};
}


#endif SENECA_NAME_H