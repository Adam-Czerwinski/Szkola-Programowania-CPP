#include <iostream>
#include "sales.h"

int main() {

	SALES::Sales ob1;
	SALES::Sales ob2;

	ob1.setSales();

	const double ar[6] = { 25.4,29.5,22.1,18.2,24.4,28.7 };
	ob2 = SALES::Sales(ar, 6);

	ob1.showSales();
	ob2.showSales();

	return 0;
}