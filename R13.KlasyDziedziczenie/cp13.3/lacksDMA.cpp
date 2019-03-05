#include "lacksDMA.h"
#include <cstring>

lacksDMA::lacksDMA(const char* c, const char* l, int r) : base(l, r) {
	std::strncpy(color, c, CONST::COL_LEN - 1);
	color[CONST::COL_LEN - 1] = '\0';
}

lacksDMA::lacksDMA(const char* c, const base& rs) : base(rs) {
	std::strncpy(color, c, CONST::COL_LEN - 1);
	color[CONST::COL_LEN - 1] = '\0';
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls) {
	os << (const base&)ls;
	os << "Kolor: " << ls.color << std::endl;
	return os;
}

void lacksDMA::View() const {
	base::View();
	std::cout << "Kolor: " << this->color << std::endl;
}