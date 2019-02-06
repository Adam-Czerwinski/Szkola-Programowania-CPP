#include <iostream>
#include "stonewt.h"



int main() {

	using std::cout;

	Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);

	//mode = MODE::STONES;
	cout << "Celebryta wa¿y³ ";
	cout << incognito;
	cout << "Detektyw wa¿y³ ";
	cout << wolfe;
	cout << "Prezydent wa¿y³ ";
	cout << taft;

	cout << '\n';

	incognito.modePoundsWithoutRest();
	wolfe.modePoundsWithoutRest();
	taft.modePoundsWithoutRest();

	//mode = MODE::POUNDS_WITHOUT_REST;
	cout << "Celebryta wa¿y³ ";
	cout << incognito;
	cout << "Detektyw wa¿y³ ";
	cout << wolfe;
	cout << "Prezydent wa¿y³ ";
	cout << taft;
	
	cout << '\n';

	incognito.modePoundsWithRest();
	wolfe.modePoundsWithRest();
	taft.modePoundsWithRest();

	//mode = MODE::POUNDS_WITH_REST;
	cout << "Celebryta wa¿y³ ";
	cout << incognito;
	cout << "Detektyw wa¿y³ ";
	cout << wolfe;
	cout << "Prezydent wa¿y³ ";
	cout << taft;
	
	cout << '\n';

	incognito = 276.8;
	taft = 325;
	cout << "Po obiedzie celebryta wa¿y ";
	cout << incognito;
	cout << "Po obiedze prezydent wa¿y ";
	cout << taft;

	Stonewt incWolf;
	incWolf = incognito + wolfe;
	cout << "incognito + wolfe = " << incWolf;

	incWolf = incognito - wolfe;
	cout << "incognito - wolfe = " << incWolf;
	incWolf = incognito * wolfe;
	cout << "incognito * wolfe = " << incWolf;
	

	return 0;
}

