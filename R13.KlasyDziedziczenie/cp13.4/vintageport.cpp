#include <iostream>
#include <cstring>
#include "vintageport.h"

using std::cout;
using std::endl;
using std::ostream;

const char* style = "najlepszy rocznik";

VintagePort::VintagePort() : Port("Brak",::style)	//:: operator zasiêgu dla style zdefiniowanej powyzej
{
	const char* def = "Brak";
	int length = strlen(def);
	nickname = new char[length + 1];
	strcpy(nickname, def);

	year = 0;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, ::style, b)
{
	int length = strlen(nn);
	nickname = new char[length + 1];
	strcpy(nickname, nn);

	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	int length = strlen(vp.nickname);
	nickname = new char[length + 1];
	strcpy(nickname, vp.nickname);

	year = vp.year;
}

void VintagePort::Show() const {
	Port::Show();
	cout << "Nazwa: " << nickname << endl;
	cout << "Rok: " << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp) {
	os << (Port)vp;
	os << ", " << vp.nickname << ", " << vp.year;

	return os;
}