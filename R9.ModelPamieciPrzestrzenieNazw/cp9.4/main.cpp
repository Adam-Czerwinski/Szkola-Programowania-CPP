#include <iostream>
#include "sales.h"

int main() {

	SALES::Sales ob1;
	SALES::Sales ob2;

	SALES::setSales(ob1);

	const double ar[6] = { 25.4,29.5,22.1,18.2,24.4,28.7 };
	SALES::setSales(ob2, ar, 6);

	SALES::showSales(ob1);
	SALES::showSales(ob2);

	return 0;
}