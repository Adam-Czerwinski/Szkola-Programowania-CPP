#include "stack.h"
#include <cstring>

bool Stack::isempty() const {
	return top == 0;
}
bool Stack::isfull() const {
	return top == size;
}

Stack::Stack(const Stack& st) {
	top = st.top;
	size = st.size;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
	{
		*(pitems + i) = *(st.pitems + i);
	}
}

Stack::~Stack() { delete[]pitems; }

bool Stack::push(const Item &item) {
	if (!isfull())
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}
bool Stack::pop(Item &item) {
	if (!isempty())
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack& Stack::operator=(const Stack& st) {
	if (this == &st)
		return *this;

	top = st.top;
	size = st.size;
	delete[]pitems;
	pitems = new Item[size];
	for (int i = 0; i < size; i++)
	{
		*(pitems + i) = *(st.pitems + i);
	}

	return *this;
}

Stack::Stack( int n) {
	top = 0;
	if (n < 1)
	{
		std::cout << "Size musi byc wiekszy do zera! Nadaje size = 10.\n";
		n = MAX;
	}
	size = n;
	pitems = new Item[n];
}

std::ostream & operator<<(std::ostream & os, const Stack & s)
{
	for (int i = 0; i < s.top; i++)
	{
		os << "item " << i + 1 << ": " << (s.pitems)[i] << std::endl;
	}
	return os;
}