#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include <iostream>

class StringBad {
private:
	char *str;
	int len;
	static int num_strings;	//liczba obiekt�w
public:
	StringBad();
	StringBad(const char* s);
	StringBad(const StringBad& sb);
	~StringBad();

	StringBad& operator=(const StringBad &sb);

	friend std::ostream& operator<<(std::ostream &os, const StringBad &st);
};

#endif // !STRNGBAD_H_
