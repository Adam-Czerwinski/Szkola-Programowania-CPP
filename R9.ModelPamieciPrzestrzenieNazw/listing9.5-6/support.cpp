#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt) {
	//extern double warming;	//opcjonalne powtórzenie dekleracji
	warming += dt;
	cout << "Zwiêkszam parametr ocieplenia do " << warming << " stopni.\n";
}

void local() {
	double warming = 0.8;

	cout << "Lokalne ocieplenie wynosi " << warming << " stopni.\n";
	cout << "Ale globalne ma wartoœæ " << ::warming << " stopni\n";
}