#include <iostream>

using namespace std;

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T *arr[], int n);

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
	ShowArray(things, 6);

	cout << "Wyliczanie d³ugów pana E.:\n";
	ShowArray(pd, 3);

	return 0;
}

template <typename T>
void ShowArray(T arr[], int n) {
	cout << "Szablon A\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

template <typename T>
void ShowArray(T *arr[], int n) {
	cout << "Szablon B\n";
	for (int i = 0; i < n; i++) {
		cout << *arr[i] << ' ';
	}
	cout << endl;
}