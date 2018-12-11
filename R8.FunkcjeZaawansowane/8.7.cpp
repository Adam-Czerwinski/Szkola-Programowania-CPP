#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T *arr[], int n);

struct debts {
	char name[50];
	double amount;
};

int main() {

	int things[6] = { 13,31,103,301,310,130 };
	debts mr_E[3] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout",1800.0}
	};

	double *pd[3];
	for (int i = 0; i < 3; i++) {
		pd[i] = &mr_E[i].amount;
	}

	cout << "Wyliczanie rzeczy pana E.:\n";
	cout << SumArray(things, 6) << endl;

	cout << "Wyliczanie d³ugów pana E.:\n";
	cout << SumArray(pd, 3) << endl;

	return 0;
}

template <typename T>
T SumArray(T arr[], int n) {
	cout << "Szablon A\n";

	T suma = 0;

	for (int i = 0; i < n; i++) {
		suma += arr[i];
	}

	cout << "£¹czna liczba przedmiotów: " << n << ".\n";

	return suma;
}

template <typename T>
T SumArray(T *arr[], int n) {
	cout << "Szablon B\n";

	T suma = 0;

	for (int i = 0; i < n; i++) {
		suma += *arr[i];
	}
	
	return suma;
}