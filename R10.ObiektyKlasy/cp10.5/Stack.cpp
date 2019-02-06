#include <iostream>
#include "Stack.h"

static double total;

Stack::Stack() {
	top = 0;
}


bool Stack::isEmpty() {
	return top == 0;
}
bool Stack::isFull() {
	return top == Max;
}
void Stack::add(const Item &i) {
	if (isFull())
		std::cout << "Przepe³niony.\n";
	else 
		items[top++] = i;
	

}
void Stack::remove(Item &i) {
	if (isEmpty())
		std::cout << "Pusty.\n";
	else
	{
		i = items[--top];
		total += i.payment;
		std::cout << "Payment: " << total << std::endl;
	}
}