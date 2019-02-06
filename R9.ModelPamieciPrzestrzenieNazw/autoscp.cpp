#include <iostream>

using namespace std;

void oil(int x);

int main() {

	int texas = 31;
	int year = 2011;
	cout << "W funkcji main() texas = " << texas << ", &texas = " << &texas << endl;
	cout << "W funkcji main() year = " << year << ", &year = " << &year << endl;

	oil(texas);

	cout << "W funkcji main() texas = " << texas << ", &texas = " << &texas << endl;
	cout << "W funkcji main() year = " << year << ", &year = " << &year << endl;


	return 0;
}

void oil(int x) {
	int texas = 5;
	cout << "W funkcji oil() texas = " << texas << ", &texas = " << &texas << endl;
	cout << "W funkcji oil() x = " << x << ", &x = " << &x << endl;

	{
		int texas = 113;
		cout << "Wewn¹trz bloku texas = " << texas << ", &texas = " << &texas << endl;
		cout << "Wewn¹trz bloku x = " << x << ", &x = " << &x << endl;
	}

	cout << "Za blokiem texas = " << texas << ", &texas = " << &texas << endl;


}