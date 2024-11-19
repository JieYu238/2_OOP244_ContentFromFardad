#ifndef SENECA_NAME_H
#define SENECA_NAME_H
//never include header file
namespace seneca {
	struct Name {
	private:
		char* m_givenName;
		char* m_surname;
		void set(const char* name, const char* surname);
		void deallocate();
		void init();
	public:
		Name();	//construction
		~Name();	//destruction
		
		void print()const;	//print is a member function that does not change the member
		void read();
		size_t length()const;
	};
}


#endif SENECA_NAME_H