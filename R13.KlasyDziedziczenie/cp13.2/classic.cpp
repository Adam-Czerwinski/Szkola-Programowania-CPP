#include <cstring>
#include <iostream>
#include "classic.h"
#include "cd.h"

Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x) : Cd(s2, s3, n, x) {
	int length = std::strlen(s1);
	mainSong = new char[length + 1];
	std::strcpy(mainSong, s1);
}
Classic& Classic::operator=(const Classic& d) {
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete[] mainSong;
	int length = std::strlen(d.mainSong);
	mainSong = new char[length + 1];
	std::strcpy(mainSong, d.mainSong);

	return *this;
}
Classic::Classic() : Cd() {
	const char* def = "Brak";
	int length = std::strlen(def);
	mainSong = new char[length + 1];
	std::strcpy(mainSong, def);
}
Classic::~Classic() {
	delete[] mainSong;
}
void Classic::Raport() const {
	Cd::Raport();
	std::cout << "Main song: " << mainSong << std::endl;
}