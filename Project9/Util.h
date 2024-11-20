#include<iostream>
#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
namespace seneca {
	const size_t MAX_DYNAMIC_READ = 1024;
	struct Util
	{
		size_t strlen(const char* str);
		//cString stuff
		char* strcpy(char* des, const char* src);
		char* strcpy(char* des, const char* src, size_t len);
		char* strcat(char* des, const char* src);

		//DMA stuff
		void aloCopy(char*& des, const char* src);
		void aloCopy(char*& des, const char* src, size_t maxLen);

		//foolproof entries
		int getInt();
		void getCstr(char* str, size_t len);
		/// <summary>
		/// Dynamically reads from cin, str must be deleted before and after usage
		/// </summary>
		/// <param name="str">: points to dynamic value enter from user</param>
		/// <returns>success</returns>
		bool getDynCstr(char*& str, std::istream& istr = std::cin, char delimiter = '\n');
		bool yes(const char* prompt = nullptr);


	};
	extern Util ut;	//prototype for the ut declared inside Util.cpp
}

#endif //!SENECA_UTILS_H



