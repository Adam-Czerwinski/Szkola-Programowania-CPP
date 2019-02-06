#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include <iostream>

class StringBad {
private:
	char *str;
	int len;
	static int num_strings;	//liczba obiektów
public:
	StringBad();
	StringBad(const char* s);
	~StringBad();

	friend std::ostream& operator<<(std::ostream &os, const StringBad &st);
};

#endif // !STRNGBAD_H_
