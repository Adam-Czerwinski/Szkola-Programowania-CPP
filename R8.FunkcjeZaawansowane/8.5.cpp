#include <iostream>

using namespace std;

const int SIZE = 5;

template <typename T>
T max5(T[]);

int main() {

	int tabI[SIZE];
	double tabD[SIZE];

	cout << "tablica int\n\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "Podaj warto�� " << i + 1 << ": ";
		cin>>tabI[i];
	}

	cout << "Najwi�kszy element tablicy: " << max5(tabI) << "\n\n";

	cout << "tablica double\n\n";
	for (int i = 0; i < SIZE; i++) {
		cout << "Podaj warto�� " << i + 1 << ": ";
		cin >> tabD[i];
	}

	cout << "Najwi�kszy element tablicy: " << max5(tabD) << "\n\n";

	cout << "Gotowe!\n";

	return 0;
}

template <typename T>
T max5(T tablica[]) {
	T max = tablica[0];
	for (int i = 1; i < SIZE; i++) {
		max = tablica[i] > max ? tablica[i] : max;
	}

	return max;
}