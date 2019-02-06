#include <iostream>
#include "Plorg.h"

int main() {

	Plorg p1;
	Plorg p2 = Plorg("Plorga drugi");
	Plorg p3("ashdasbhd  xzjjxhj ahsdjbahs  xzcbhjxcxhzbjx ");

	p1.showReport();
	p2.showReport();
	p3.showReport();

	return 0;
}