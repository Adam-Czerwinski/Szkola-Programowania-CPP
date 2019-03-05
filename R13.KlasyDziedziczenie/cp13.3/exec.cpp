#include <iostream>
#include <string>
#include <cstring>
#include "base.h"
#include "baseDMA.h"
#include "lacksDMA.h"
#include "hasDMA.h"

const int SIZE = 4;

int main() {
	using std::cout;
	using std::endl;
	using std::cin;

	base *p_dma[SIZE];

	std::string tempLabel;
	long tempRating;
	std::string tempDer;
	char kind;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Podaj label: ";
		getline(cin, tempLabel);
		cout << "Podaj rating: ";
		cin >> tempRating;
		cout << "Wpisz 1 dla baseDMA, 2 dla hasDMA, 3 dla lacksDMA: ";
		while (cin >> kind && (kind != '1' && kind != '2' && kind!='3'))
			cout << "Wpisz 1, 2 lub 3: ";
		if (kind == '1')
		{
			p_dma[i] = new baseDMA(tempLabel.c_str(),tempRating);
			while (cin.get() != '\n')
				continue;
		}
		else if(kind=='2'){
			cin.get();
			cout << "Podaj style: ";
			getline(cin, tempDer);
			p_dma[i] = new hasDMA(tempDer.c_str(),tempLabel.c_str(), tempRating);
		}else if (kind == '3') {
			cin.get();
			cout << "Podaj color: ";
			getline(cin, tempDer);
			p_dma[i] = new lacksDMA(tempDer.c_str(), tempLabel.c_str(), tempRating);
		}
	}

	cout << endl;
	for (int i = 0; i < SIZE; i++)
	{
		p_dma[i]->View();
		cout << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		delete p_dma[i];
	}
	cout << "Gotowe.\n";

	return 0;
}