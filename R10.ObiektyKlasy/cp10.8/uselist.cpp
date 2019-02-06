#include <iostream>
#include "List.h"

int main() {

	List list = List();
	
	list.show();
	list.add(5);
	list.show();
	list.add(2);
	list.show();
	list.visit(increase);
	list.show();
	list.visit(square);
	list.show();
	return 0;
}