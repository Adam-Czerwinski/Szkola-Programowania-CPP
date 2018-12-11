#include <iostream>
#include <windows.h>

using namespace std;

const int SIZEC = 100;

struct Batonik {
	char marka[SIZEC];
	double waga;
	int liczbaKalorii;
}batonik;

void setBatonik(Batonik &baton, const char *marka = "Millennium Munch", const double waga = 2.85, const int kalorie = 350);
void showBatonik(const Batonik &baton);
int main() {
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char marka[SIZEC];
	double waga;
	int kalorie;
	cout << "Podaj markê: ";
	cin.getline(marka, SIZEC);

	cout << "Podaj wagê: ";
	(cin >> waga).get();

	cout << "Podaj kalorie: ";
	(cin >> kalorie).get();

	setBatonik(batonik, marka, waga, kalorie);
	showBatonik(batonik);

	cout << "Gotowe!" << endl;
	return 0;
}

void setBatonik(Batonik &baton, const char *marka, const double waga, const int kalorie) {
	strcpy(baton.marka, marka);
	baton.waga = waga;
	baton.liczbaKalorii = kalorie;

	cout << "Ustawianie gotowe!" << endl;

	return;
}

void showBatonik(const Batonik &baton) {
	cout << "Marka: " << baton.marka << endl;
	cout << "Waga: " << baton.waga << endl;
	cout << "Liczba kalorii: " << baton.liczbaKalorii << endl;
}