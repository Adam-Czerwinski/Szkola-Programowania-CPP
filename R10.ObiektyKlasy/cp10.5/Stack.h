#ifndef STACK_H_
#define STACK_H_




struct customer {
	enum x {
		Length = 35
	};
	char fullname[Length];
	double payment;
};

typedef customer Item;

class Stack {
private:
	enum{Max=10};
	Item items[10];
	int top;
	bool isEmpty();
	bool isFull();
public:
	Stack();
	void add(const Item &c);
	void remove(Item &c);
};

#endif // !STACK_H_


