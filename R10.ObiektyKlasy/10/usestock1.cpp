#include <iostream>
#include "stocks10.h"

int main() {

	{
		using std::cout;
		using std::ios_base;

		cout << "Tworzenie nowych obiekt�w przy u�yciu konstruktor�w\n";
		Stock stock1 = Stock("NanoSmart", 20, 12.50);
		stock1.show();

		Stock stock2("BurakPOL", 2, 2.0);
		stock2.show();

		cout << "Przypisanie stock1 do stock2:\n";
		stock2 = stock1;
		cout << "Wypis ze stock1 i stock2:\n";
		stock1.show();
		stock2.show();

		cout << "Wyzerowanie obiektu konstruktorem:\n";
		stock1 = Stock("FutroPOL", 10, 50.0);		//obiekt tymczasowy
		cout << "Nowa wersja stock1:\n";
		stock1.show();

		cout << "Gotowe!\n";
	}

	return 0;
}