#include <iostream>
#include "sales.h"

using std::cout;
using std::endl;
using std::cin;

namespace SALES
{
	void setSales(Sales &s, const double ar[], int n)
	{
		
		double total = 0.0;

		for (int i = 0; (i < n && i<4); i++)
		{
			s.sales[i] = ar[i];
			total += s.sales[i];
		}

		double min = s.sales[0];
		double max = s.sales[0];
		for (int i = 1; i<QUARTERS; i++)
		{
			min = s.sales[i] < min ? s.sales[i] : min;
			max = s.sales[i] > max ? s.sales[i] : max;
		}

		s.min = min;
		s.max = max;
		s.average = total / QUARTERS;
	}

	void setSales(Sales &s)
	{
		double total = 0.0;

		for (int i = 0; i < QUARTERS; i++)
		{
			cout << "Podaj sprzeda¿ za kwarta³ " << (i + 1) << ": ";
			cin >> s.sales[i];
			total += s.sales[i];
		}

		double min = s.sales[0];
		double max = s.sales[0];

		for (int i = 1; i < QUARTERS; i++)
		{
			min = s.sales[i] < min ? s.sales[i] : min;
			max = s.sales[i] > max ? s.sales[i] : max;
		}
		
		s.min = min;
		s.max = max;
		s.average = total / QUARTERS;
	}

	void showSales(const Sales &s) {

		for (int i = 0; i < QUARTERS; i++) {
			cout << "Sprzeda¿ za kwarta³: " << (i + 1) << ": " << s.sales[i] << endl;
		}
		cout << "max: " << s.max << endl;
		cout << "min: " << s.min << endl;
		cout << "avg: " << s.average << endl;
	}
}


