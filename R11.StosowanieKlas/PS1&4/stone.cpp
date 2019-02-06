#include <iostream>
#include "stonewt.h"

int main() {

	using std::cout;
	
	Stonewt stones = 5;
	stones.show_lbs();
	stones.show_stn();
	Stonewt stones2;
	stones2 = stones * 10;
	stones2.show_lbs();
	stones2.show_stn();
	stones2 = 10 * stones;
	stones2.show_lbs();
	stones2.show_stn();

	return 0;
}

