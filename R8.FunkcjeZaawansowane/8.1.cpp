#include <iostream>
#include <windows.h>
using namespace std;

int wywolanie;
const int SIZEC = 100;
void show(const char *napis, int n = 0);

int main() {

	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

	char napis[SIZEC];
	int input = 0;

	cout << "pusty �a�cuch ko�czy dzia�anie programu." << endl;
	cout << "podaj �a�cuch: ";
	cin.getline(napis, SIZEC);
	while (strcmp(napis, "")) {
		cout << "je�eli chcesz wprowadzi� niezerowy parametr to podaj liczb� r�n� od zera: ";
		cin >> input;
		cin.get();
		show(napis,input);
		wywolanie++;
		cout << "podaj �a�cuch: ";
		cin.getline(napis, SIZEC);
	}
	
	cout << "Koniec! Bye c:" << endl;

	return 0;
}

void show(const char *napis, int n) {
	if (n == 0)
		cout << napis << endl;
	else {
		for (int i = 0; i < wywolanie; i++)
			cout << napis << endl;
	}
}