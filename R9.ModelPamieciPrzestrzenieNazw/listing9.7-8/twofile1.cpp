#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access();

int main() {
	using namespace std;

	cout << "Funkcja main() zwraca nastêpuj¹ce adresy:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
	remote_access();
}