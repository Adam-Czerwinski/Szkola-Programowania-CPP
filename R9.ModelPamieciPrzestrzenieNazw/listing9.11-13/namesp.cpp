#include <iostream>
#include "namesp.h"

namespace pers {

	using std::cout;
	using std::cin;

	void getPerson(Person &rp) {
		cout << "Podaj imiê: ";
		cin >> rp.fname;
		cout << "Podaj nazwisko: ";
		cin >> rp.lname;
	}

	void showPerson(const Person& rp) {
		std::cout << rp.lname<< ", " << rp.fname;
	}
}

namespace debts {
	void getDebt(Debt &rd) {
		getPerson(rd.name);
		std::cout << "Podaj kwotê: ";
		std::cin >> rd.amount;
	}

	void showDebt(const Debt &rd) {
		showPerson(rd.name);
		std::cout << ": " << rd.amount << " z³" << std::endl;
	}

	double sumDebts(const Debt ar[], int n) {
		double total = 0.0;
		for (int i = 0; i < n; i++)
			total += ar[i].amount;
		return total;
	}
}