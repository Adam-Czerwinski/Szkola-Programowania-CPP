#include <iostream>
#include "List.h"


List::List() {
	top = 0;
}

bool List::add(const Item &item) {
	if (!isFull())
	{
		elements[top++] = item;
		std::cout << "Dodano do listy.\n";
		return true;
	}
	else
	{
		std::cout << "Lista pe³na.\n";
		return false;
	}
}

bool List::isEmpty() const {
	return top == 0;
}

bool List::isFull() const {
	return top == MAX;
}

bool List::show() const {
	if (!isEmpty())
	{
	std::cout << "[ ";
	for (int i = 0; i < top; i++)
		std::cout << elements[i] << ' ';
	std::cout << "]\n";
	return true;
	}
	else {
		std::cout << "Lista pusta.\n";
		return false;
	}
}

bool List::visit(void(*pf)(Item &item)) {
	if (!isEmpty())
	{
		for(int i=0;i<top;i++)
			(*pf)(elements[i]);
		return true;
	}
	else {
		std::cout << "Lista pusta.\n";
		return false;
	}
}

void increase(Item &item) {
	item++;
}

void square(Item &item) {
	item *= item;
}