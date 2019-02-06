#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;

	cout << "Nacisnij D, aby wprowadziæ deklaracjê,\n"
		<< "P, aby utworzyæ deklaracjê, lub K, aby zakoñczyæ.\n";
	while (cin >> ch && toupper(ch) != 'K')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << "\a";
			continue;
		}
		switch (ch)
		{
		case 'D':
		case 'd':
			cout << "Podaj numer nowej deklaracji: ";
			cin >> po;
			if (st.isFull())
				cout << "Stos pe³en!\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isEmpty())
				cout << "Stos pusty!\n";
			else {
				st.pop(po);
				cout << "Deklaracja nr " << po << " zdjêta\n";
			}
			break;
		}
		cout << "Nacisnij D, aby wprowadziæ deklaracjê, \n"
			<< "P, aby przetworzyæ deklaracjê, lub K, aby zakoñczyæ.\n";
	}
	cout << "Fajrant!\n";

	return 0;
}