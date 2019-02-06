#include <iostream>
#include <new>

using namespace std;

const int BUF = 512;
const int N = 5;
char buffer[BUF];

int main() {

	double *pd1, *pd2;
	int i;
	cout << "Wywo�anie new zwyk�ego i miejscowego:\n";
	pd1 = new double[N];
	pd2 = new (buffer) double[N];

	for (i = 0; i < N; i++) {
		pd2[i] = pd1[i] = 1000 + 20.0*i;
	}
	
	cout << "Adres pami�ci:\n";
	cout << "sterta: " << pd1 << " pami�� statyczna: " << (void*)buffer << endl;

	cout << "Zawarto�� pami�ci:\n";
	for (i = 0; i < N; i++) {
		cout << pd1[i] << " pod adresem " << &pd1[i] << "; ";
		cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
	}

	cout << "\nDrugie wywo�anie zwyk�ego i miejscowego new:\n";
	double *pd3, *pd4;
	pd3 = new double[N];
	pd4 = new (buffer)double[N];

	for (i = 0; i < N; i++) {
		pd3[i] = pd4[i] = 1000 + 40.0*i;
	}

	cout << "Zawarto�� pami�ci:\n";
	for (i = 0; i < N; i++) {
		cout << pd3[i] << " pod adresem " << &pd3[i] << "; ";
		cout << pd4[i] << " pod adresem " << &pd4[i] << endl;
	}

	cout << "\nTrzecie wywo�anie zwyk�ego i miejscowego new:\n";
	delete[]pd1;
	pd1 = new double[N];
	pd2 = new (buffer + N * sizeof(double)) double[N];
	for (i = 0; i < N; i++) {
		pd1[i] = pd2[i] = 1000 + 60.0*i;
	}

	cout << "Zawarto�� pami�ci:\n";
	for (i = 0; i < N; i++) {
		cout << pd1[i] << " pod adresem " << &pd1[i] << "; ";
		cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
	}

	delete[]pd1;
	delete[]pd3;

	return 0;
}