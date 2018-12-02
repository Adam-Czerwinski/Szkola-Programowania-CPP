#include <iostream>

using namespace std;

struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

void wyswietl(const pudlo struktura1) {
	cout << "Producent: " << struktura1.producent << endl;
	cout << "wysokosc: " << struktura1.wysokosc << endl;
	cout << "szerokosc: " << struktura1.szerokosc << endl;
	cout << "dlugosc: " << struktura1.dlugosc << endl;
	cout << "objetosc: " << struktura1.objetosc << endl;
}

void ustawWartosc(pudlo *struktura1) {
	struktura1->objetosc = (struktura1->wysokosc)*(struktura1->szerokosc)*(struktura1->dlugosc);
}

int main()
{
	pudlo struktura1{ "Producent1", 10.5, 20.2, 13.4, 82.2 };
	wyswietl(struktura1);
	cout << "Objetosc przed wywolaniem funkcji: " << struktura1.objetosc << endl;
	ustawWartosc(&struktura1);
	cout << "Objetosc po wywolaniu funkcji: " << struktura1.objetosc << endl;
	return 0;
}