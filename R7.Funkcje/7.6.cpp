#include <iostream>
#include <array>
#include <limits>
using namespace std;

const int SIZE = 10;

int fill_array(array<double, SIZE> *tab, int size);
void show_array(const array<double, SIZE> tab, int size);
void reverse_array(array<double, SIZE> *tab, int size);
int main() {

	array<double, SIZE> tab{};

	int ile_wynikow = fill_array(&tab, SIZE);

	cout << "Tablica przed reverse_array" << endl;
	show_array(tab, ile_wynikow);

	reverse_array(&tab, ile_wynikow);

	cout << "Tablica po reverse_array" << endl;
	show_array(tab, ile_wynikow);
	return 0;
}

int fill_array(array<double, SIZE> *tab, int size) {
	double dana = 0;
	int ile = 0;
	cout << "Wprowadz " << SIZE << " wartosci do tablicy. 'q' konczy!" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Podaj wartosc nr " << i + 1 << ": ";
		cin >> dana;
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
			break;
		}else
		{
			tab->at(i) = dana;
			ile++;
		}
	}
	cout << "Wprowadzono " << ile << " wartosci." << endl;
	return ile;
}
void show_array(array<double, SIZE> tab, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Element nr " << i << ": " << tab.at(i) << endl;
	}
}
void reverse_array(array<double, SIZE> *tab, int size) {
	double pom = 0;
	for (int i = 0; i < size / 2; i++)
	{
		pom = tab->at(i);
		tab->at(i) = tab->at(size - i - 1);
		tab->at(size - i - 1) = pom;
	}
}