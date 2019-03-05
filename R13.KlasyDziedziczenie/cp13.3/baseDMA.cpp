#include <cstring>
#include "baseDMA.h"

//--------------BASEDMA
baseDMA::baseDMA(const char* l, int r) : base(l,r){}

baseDMA::baseDMA(const baseDMA& rs) : base(rs) {}

baseDMA::~baseDMA() {}

baseDMA& baseDMA::operator=(const baseDMA& rs) {
	base::operator=(rs);
	return *this;
}

void baseDMA::View() const {
	base::View();
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs) {
	return os<<(const base&)rs;
}
