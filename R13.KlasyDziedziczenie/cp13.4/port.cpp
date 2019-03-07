#include <cstring>
#include "port.h"

using std::cout;
using std::ostream;
using std::endl;

Port::Port(const char* br, const char* st, int b) {
	int length = strlen(br);
	brand = new char[length + 1];
	strcpy(brand, br);

	length = strlen(st);
	if (length > (int)SIZE::style) {
		const char* def = "brak";
		cout << "Styl moze skladac sie tylko z maksymalnie "<<(int)SIZE::style<<" znakow.\n"
			<< "Ustawianie napisu na \""<<def<<"\"";
		length = strlen(def);
		strcpy(style, def);
		style[length] = '\0';
	}
	else
		strcpy(style, st);

	bottles = b;
}

Port::Port(const Port& p) {
	int length = strlen(p.brand);
	brand = new char[length + 1];
	strcpy(brand, p.brand);

	length = strlen(p.style);
	strcpy(style, p.style);

	bottles = p.bottles;
}

Port& Port::operator=(const Port& p) {
	if (this == &p)
		return *this;

	delete[] brand;
	int length = strlen(p.brand);
	brand = new char[length + 1];
	strcpy(brand, p.brand);
	brand[length] = '\0';

	length = strlen(p.style);
	strcpy(style, p.style);

	bottles = p.bottles;

	return *this;
}

Port& Port::operator+=(int b) {

	bottles += b;

	return *this;
}

Port& Port::operator-=(int b) {
	if (bottles - b >= 0)
		bottles -= b;
	else
	{
		cout << "Zmniejszenie butelek niemozliwe!\n"
			<< "Ilosc butelek bylaby mniejsza niz 0!\n";
	}

	return *this;
}

void Port::Show() const {
	cout << "Marka: " << brand << endl;
	cout << "Rodzaj: " << style << endl;
	cout << "Butelek: " << bottles << endl;
}

ostream& operator<<(ostream &os, const Port& p) {
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

