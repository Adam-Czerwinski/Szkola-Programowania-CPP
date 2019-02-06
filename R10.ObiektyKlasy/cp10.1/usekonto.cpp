#include <iostream>
#include "konto.h"

int main() {

	using std::cout;
	using std::cin;
	using std::endl;

	KontoBankowe kb = KontoBankowe("Czerwiñski", "123456789000123", 220.13);

	kb.show();

	kb.buy(20.13);

	kb.show();

	kb.deponuj(20.13);

	kb.show();

	kb.buy(220.14);

	kb.show();

	cout << "Teraz wyœwietlenie osobno:\n";

	cout << "Nazwisko: " << kb.getNazwisko() << ", "
		<< "nr konta: " << kb.getNrKonta() << ", "
		<< "saldo: " << kb.getSaldo() << "z³.\n";

	return 0;
}