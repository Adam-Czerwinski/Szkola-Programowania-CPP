#include <iostream>
#include <cstring>
#include "Person.h"

Person::Person(const std::string &ln, const char *fn) {
	lname = ln;
	strncpy(fname, fn, LIMIT);
	fname[LIMIT - 1] = '\0';
}
void Person::Show() const {
	std::cout << lname << " " << fname << '\n';
}
void Person::FormalShow() const {
	std::cout << fname << " " << lname << '\n';
}