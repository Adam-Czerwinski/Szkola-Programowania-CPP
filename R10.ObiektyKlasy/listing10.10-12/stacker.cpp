#include <iostream>
#include <cctype>
#include "stack.h"

int main() {
	using namespace std;
	Stack st;
	char ch;
	unsigned long po;

	cout << "Nacisnij D, aby wprowadzi� deklaracj�,\n"
		<< "P, aby utworzy� deklaracj�, lub K, aby zako�czy�.\n";
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
				cout << "Stos pe�en!\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':
			if (st.isEmpty())
				cout << "Stos pusty!\n";
			else {
				st.pop(po);
				cout << "Deklaracja nr " << po << " zdj�ta\n";
			}
			break;
		}
		cout << "Nacisnij D, aby wprowadzi� deklaracj�, \n"
			<< "P, aby przetworzy� deklaracj�, lub K, aby zako�czy�.\n";
	}
	cout << "Fajrant!\n";

	return 0;
}