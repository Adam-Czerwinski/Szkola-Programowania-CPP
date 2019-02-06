#include <iostream>
#include "Stack.h"

using namespace std;

int main() {

	Stack st; // create an empty stack 
	customer newCust; // create an empty struct
	char ch;

	std::cout << "Please enter A to add a customer, P to process a payment or Q to quit.\n";
	while (std::cin >> ch && toupper(ch) != 'Q')
	{
		while (std::cin.get() != '\n')
			continue;

		if (!isalpha(ch))
		{
			std::cout << '\a';
			continue;
		}

		switch (ch)
		{
		case 'A':
		case 'a': 
			std::cout << "Enter a customer name to add: ";
			cin.getline(newCust.fullname,newCust.Length);
			std::cout << "Enter the transaction amount: ";
			std::cin >> newCust.payment;
			
			st.add(newCust);
			break;

		case 'P':
		case 'p':
				st.remove(newCust);
			break;
		}

		std::cout << "Please enter A to add a customer, P to process a payment or Q to quit.\n";
	}
	std::cout << "Bye\n";


	return 0;
}