#include <iostream>
#include "stocks20.h"

const int STKS = 4;

int main() {

	Stock stocks[STKS] = {
		Stock("NanoSmart",12,20.0),
		Stock("BurakPOL",200,2.0),
		Stock("GruzPOL",130,3.25),
		Stock("FutroPOL",60,6.5),
	};

	std::cout << "Portfel inwestycyjny:\n";
	int st;
	for (st = 0; st < STKS; st++)
	{
		std::cout << stocks[st];
	}

	const Stock *top = &stocks[0];

	for (st = 0; st < STKS; st++)
	{
		top = &(top->topval(stocks[st]));		//metoda zwraca REFERENCJE. Do wskaznika przypisujemy adres, wiêc &
	}

	std::cout << "\nNajbardziej wartoœciowy pakiet:\n";
	std::cout << *top;
	

	return 0;
}