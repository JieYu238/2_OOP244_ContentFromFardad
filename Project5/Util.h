#ifndef SENECA_UTILS_H
#define SENECA_UTILS_H
namespace seneca {
	struct Util
	{
		int getInt();

		void getCstr(char* str, size_t len);
	};
	extern Util ut;	//prototype for the ut declared inside Util.cpp
}

#endif //!SENECA_UTILS_H



