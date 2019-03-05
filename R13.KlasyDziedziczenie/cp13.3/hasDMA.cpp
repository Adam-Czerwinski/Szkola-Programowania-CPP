#include "hasDMA.h"
#include <cstring>

hasDMA::hasDMA(const char* s, const char* l, int r) :base(l, r) {
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const base& rs) : base(rs) {
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs) : base(hs) {
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
	delete[] style;
}

hasDMA& hasDMA::operator=(const hasDMA& hs) {
	if (this == &hs)
		return *this;
	base::operator=(hs);
	delete[] style;
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& hs) {
	os << (const base&)hs;
	os << "Styl: " << hs.style << std::endl;
	return os;
}

void hasDMA::View() const {
	base::View();
	std::cout << "Styl: " << this->style << std::endl;
}