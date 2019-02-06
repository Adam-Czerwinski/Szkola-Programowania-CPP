#include <iostream>
#include "namesp.h"

void other(void);
void another();

int main(void) {

	using debts::Debt;
	using debts::showDebt;

	Debt golf = { {"Jacek","K³opotek"},120.0 };
	showDebt(golf);
	other();
	another();

	return 0;
}

void other(void) {
	using std::cout;
	using std::endl;
	using namespace debts;
	
	Person dg = { "Daria","Graczyk" };
	showPerson(dg);
	cout << endl;

	Debt zippy[3];
	int i;
	
	for (i = 0; i < 3; i++) {
		getDebt(zippy[i]);
	}
	for (i = 0; i < 3; i++) {
		showDebt(zippy[i]);
	}

	cout << "Kwota ³¹czna: " << sumDebts(zippy, 3) << " z³" << endl;
}
void another() {

	using pers::Person;

	Person collector = { "Zibi","Windykator" };
	pers::showPerson(collector);
	std::cout << std::endl;
}
