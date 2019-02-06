#include "strngbad.h"
#include <cstring>

using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad() {
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" - obiekt domy�lny utworzony.\n";
}

StringBad::StringBad(const char* s) {
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str
		<< "\" - obiekt utworzony.\n";
}
StringBad::~StringBad() {
	cout << "\"" << str << "\" - obiekt usuni�ty, ";
	--num_strings;
	cout << "s� jeszcze " << num_strings << ".\n";
	delete[]str;
}

std::ostream& operator<<(std::ostream &os, const StringBad &st) {
	os << st.str;
	return os;
}