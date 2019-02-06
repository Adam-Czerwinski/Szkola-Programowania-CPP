#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List {
private:
	enum {
		MAX = 10
	};
	unsigned int top = 0;
	Item elements[MAX];
	bool isEmpty() const;
	bool isFull() const;
public:
	List();
	bool add(const Item &item);
	bool show() const;
	bool visit(void(*pf)(Item &item));
};

void increase(Item &item);
void square(Item &item);

#endif // !LIST_H_
