#include <iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b);

struct job {
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job &a, job &b);

void Show(job &j);

int main() {

	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "U¿ycie generowanej przez kompilator funkcji zamieniaj¹cej wartoœæ int:\n";
	Swap(i, j);
	cout<< "Teraz i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee",73000.60,7 };
	job sidney = { "Sidney Taffee",78060.72, 9};

	cout << "Przed zmian¹ struktur job:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "Po zamianie struktur job:\n";
	Show(sue);
	Show(sidney);

	return 0;
}

template <typename T>
void Swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &a, job &b) {
	double t1;
	int t2;

	t1 = a.salary;
	a.salary = b.salary;
	b.salary = t1;

	t2 = a.floor;
	a.floor = b.floor;
	b.floor = t2;
}

void Show(job &j) {
	cout << j.name << ": " << j.salary << "z³ na piêtrze " << j.floor << endl;
}