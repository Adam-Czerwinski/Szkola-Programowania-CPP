#include <iostream>

class Klasa {

private:
	int valueINT;
	double valueDOUBLE;

public:
	Klasa(){}

	Klasa(int vI, double vD=5.3) {
		this->valueINT = vI;
		this->valueDOUBLE = vD;
	}

	operator int() {
		return this->valueINT;
	}
};

int main()
{
	using namespace std;
	Klasa k1 = Klasa(5, 3);

	int v = k1;
	cout << v;

	return 0;
}

