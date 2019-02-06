#include <iostream>
#include <cstring>
#include "konto.h"

KontoBankowe::KontoBankowe(const char *nazwisko, const char* nr_konta, double saldo)
{
	strcpy(this->nazwisko, nazwisko);
	strcpy(this->nr_konta, nr_konta);
	this->saldo = saldo;
}

const char* KontoBankowe::getNazwisko() const					// Zwyk³e u¿ycie metody funkcji
{
	return nazwisko;
}

const char* KontoBankowe::getNrKonta() const					// Zwyk³e u¿ycie metody funkcji
{
	return nr_konta;
}

void KontoBankowe::show() const
{
	std::cout << "Nazwisko: " << nazwisko << ", "
		<< "nr konta: " << nr_konta << ", "
		<< "saldo: " << saldo << "z³.\n";
}

void KontoBankowe::buy(double kwota)
{
	if (saldo >= kwota)
	{
		saldo -= kwota;
		std::cout << "Aktualne saldo wynosi: " << saldo << "z³.\n";
	}
	else
		std::cout << "Operacja nie powiod³a siê. Brak wystarczaj¹cych œrodków na koncie.\n";
}
void KontoBankowe::deponuj(double kwota)
{
	saldo += kwota;
	std::cout << "Saldo wzros³o o " << kwota << "z³. "
		<< "Aktualne saldo wynosi: " << saldo << "z³.\n";
}