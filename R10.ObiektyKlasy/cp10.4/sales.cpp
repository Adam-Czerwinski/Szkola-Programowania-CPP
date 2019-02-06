#include <iostream>
#include "sales.h"

using std::cout;
using std::endl;
using std::cin;

namespace SALES
{
	Sales::Sales() {
		for (int i = 0; i < QUARTERS; i++)
		{
			sales[i] = 0;
		}
		average = 0;
		min = 0;
		max = 0;
	}

	Sales::Sales(const double ar[], int n)
	{
		double total = 0.0;

		for (int i = 0; (i < n && i<QUARTERS); i++)
		{
			sales[i] = ar[i];
			total += sales[i];
		}

		double min = sales[0];
		double max = sales[0];
		for (int i = 1; i<QUARTERS; i++)
		{
			min = sales[i] < min ? sales[i] : min;
			max = sales[i] > max ? sales[i] : max;
		}

		this->min = min;
		this->max = max;
		average = total / QUARTERS;
	}

	void Sales::setSales()
	{
		double ar[QUARTERS];

		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Podaj sprzeda¿ za kwarta³ " << (i + 1) << ": ";
			cin >> ar[i];
		}

		*this = Sales(ar, QUARTERS);
	}

	void Sales::showSales() {

		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sprzeda¿ za kwarta³: " << (i + 1) << ": " << sales[i] << endl;
		}
		cout << "max: " << max << endl;
		cout << "min: " << min << endl;
		cout << "avg: " << average << endl;
	}
}


