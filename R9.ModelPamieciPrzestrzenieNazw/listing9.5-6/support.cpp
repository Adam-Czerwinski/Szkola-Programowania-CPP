#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt) {
	//extern double warming;	//opcjonalne powt�rzenie dekleracji
	warming += dt;
	cout << "Zwi�kszam parametr ocieplenia do " << warming << " stopni.\n";
}

void local() {
	double warming = 0.8;

	cout << "Lokalne ocieplenie wynosi " << warming << " stopni.\n";
	cout << "Ale globalne ma warto�� " << ::warming << " stopni\n";
}