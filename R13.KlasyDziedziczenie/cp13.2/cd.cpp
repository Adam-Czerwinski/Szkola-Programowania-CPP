#include <cstring>
#include <iostream>
#include "cd.h"

Cd::Cd(const char* s1, const char* s2, int n, double x) {
	int length = std::strlen(s1);
	performers = new char[length + 1];
	std::strcpy(performers, s1);

	length = std::strlen(s2);
	label = new char[length + 1];
	std::strcpy(label, s2);

	selections = n;
	playtime = x;
}
Cd::Cd(const Cd& d) {
	int length = std::strlen(d.performers);
	performers = new char[length + 1];
	std::strcpy(performers, d.performers);

	length = std::strlen(d.label);
	label = new char[length + 1];
	std::strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd() {
	const char* def = "Brak";
	int length = std::strlen(def);

	performers = new char[length + 1];
	std::strcpy(performers, def);

	label = new char[length + 1];
	std::strcpy(label, def);
	
	selections = 0;
	playtime = 0;
}
Cd::~Cd(){
	delete[] performers;
	delete[] label;
}
void Cd::Raport() const {
	std::cout << "Performers: " << performers << std::endl;
	std::cout << "label: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "playtime: " << playtime << std::endl;
}
Cd& Cd::operator=(const Cd& d) { 
	if (this == &d)
		return *this;
	delete[] performers;
	int length = std::strlen(d.performers);
	performers = new char[length + 1];
	std::strcpy(performers, d.performers);

	delete[] label;
	length = std::strlen(d.label);
	label = new char[length + 1];
	std::strcpy(label, d.label);

	selections = d.selections;
	playtime = d.playtime;

	return *this;
}
