#include <iostream>
#include "stonewt.h"

void display(const Stonewt &st, int n);

int main() {

	using std::cout;

	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	cout << "Celebryta wa¿y³ ";
	incognito.show_stn();
	cout << "Detektyw wa¿y³ ";
	wolfe.show_stn();
	cout << "Prezydent wa¿y³ ";
	taft.show_lbs();
	
	incognito = 276.8;
	taft = 325;
	cout << "Po obiedzie celebryta wa¿y ";
	incognito.show_stn();
	cout << "Po obiedze prezydent wa¿y ";
	taft.show_lbs();
	display(taft, 2);
	cout << "A zapaœnik wa¿y jeszcze wiêcej.\n";
	display(427, 2);
	cout << "Nie pozosta³ kamieñ na kamieniu\n";

	return 0;
}

void display(const Stonewt &st, int n) {

	for (int i = 0; i < n; i++)
	{
		std::cout << "Oho! ";
		st.show_stn();
	}
}