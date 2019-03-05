#include "base.h"
#include <iostream>

base::base(const char* l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}
base::base(const base& rs) {
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;;
}
base::~base() {
	delete[] label;
}
void base::View() const {
	std::cout << "label: " << this->label << std::endl;
	std::cout << "rating: " << this->rating << std::endl;
}
base& base::operator=(const base& rs) {
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const base& rs) {
	os << "label: " << rs.label << std::endl;
	os << "rating: " << rs.rating << std::endl;
	return os;
}

