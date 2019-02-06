#include <iostream>
#include "stonewt1.h"


int main() {

	using std::cout;
	
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "Konwersja na typ double => ";
	cout << "Poppins: " << p_wt << " funtów.\n";
	cout << "Konwersja na typ int => ";
	cout << "Poppins: " << int(poppins) << " funtów.\n";
	
	return 0;
}

