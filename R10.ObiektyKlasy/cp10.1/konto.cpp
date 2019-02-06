#include <iostream>
#include <cstring>
#include "konto.h"

KontoBankowe::KontoBankowe(const char *nazwisko, const char* nr_konta, double saldo)
{
	strcpy(this->nazwisko, nazwisko);
	strcpy(this->nr_konta, nr_konta);
	this->saldo = saldo;
}

const char* KontoBankowe::getNazwisko() const					// Zwyk�e u�ycie metody funkcji
{
	return nazwisko;
}

const char* KontoBankowe::getNrKonta() const					// Zwyk�e u�ycie metody funkcji
{
	return nr_konta;
}

void KontoBankowe::show() const
{
	std::cout << "Nazwisko: " << nazwisko << ", "
		<< "nr konta: " << nr_konta << ", "
		<< "saldo: " << saldo << "z�.\n";
}

void KontoBankowe::buy(double kwota)
{
	if (saldo >= kwota)
	{
		saldo -= kwota;
		std::cout << "Aktualne saldo wynosi: " << saldo << "z�.\n";
	}
	else
		std::cout << "Operacja nie powiod�a si�. Brak wystarczaj�cych �rodk�w na koncie.\n";
}
void KontoBankowe::deponuj(double kwota)
{
	saldo += kwota;
	std::cout << "Saldo wzros�o o " << kwota << "z�. "
		<< "Aktualne saldo wynosi: " << saldo << "z�.\n";
}