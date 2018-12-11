#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T[], int);

template <>
char* maxn(char *[], int);

int main() {

	int tabI[4]{ 0,-1,3,4 };
	double tabD[5]{ -2.3,-1.2,3.5,4.2,9.1};
	char *tabC[5] = {
		{"Pierwszy"},
		{"Drugi"},
		{"Trzeci"},
		{"Czwarty"},
		{"Pi¹ty"}
	};

	cout << "Tablica int\n";
	cout << maxn(tabI, 4) << endl;

	cout << "Tablica double\n";
	cout << maxn(tabD, 5) << endl;

	cout << "Tablica char\n";
	cout << maxn(tabC, 5);



	return 0;
}

template <typename T>
T maxn(T tablica[], int size) {
	T max = tablica[0];

	for (int i = 1; i < size; i++)
	{
		max = tablica[i] > max ? tablica[i] : max;
	}

	return max;
}

template <>
char* maxn(char *tablica[], int size) {
	char *longest = tablica[0];

	for (int i = 1; i < size; i++) {
		longest = strlen(tablica[i]) > strlen(longest) ? tablica[i] : longest;
	}

	return longest;
}