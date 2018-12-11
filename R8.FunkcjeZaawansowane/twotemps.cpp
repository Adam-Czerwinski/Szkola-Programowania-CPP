#include <iostream>

using namespace std;

template<class T>
void Swap(T &a, T&b);

template<class T>
void Swap(T *a, T *b, int n);

void Show(int a[]);

const int LIM = 8;

int main() {

	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "U¿ycie funkcji obs³uguj¹cej typ int, "
		"wygenerowanej przez kompilator:\n";
	Swap(i, j);
	cout << "Teraz i, j = " << i << ", " << j << ".\n";

	int d1[LIM] = { 0,7,0,4,1,7,7,6 };
	int d2[LIM] = { 0,7,2,0,1,9,6,9 };
	cout << "Tablice pocz¹tkowo:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, LIM);
	cout << "Tablice po zamianie:\n";
	Show(d1);
	Show(d2);

	return 0;
}

template<class T>
void Swap(T &a, T&b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<class T>
void Swap(T a[], T b[], int n) {
	T temp;
	for (int i = 0; i < n; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[]) {
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < LIM; i++) {
		cout << a[i];
	}
	cout << endl;
}