#include <iostream>

using namespace std;

int main()
{


    const float CAL {2.54};
	const int STOPA {12};

	cout << "Podaj wzrost w cm: ";
	float wzrostCm{};
	cin >> wzrostCm;

	float cale{};
	cale = wzrostCm / CAL;

	int stopy{};
	stopy = cale / STOPA;

	cale = cale - stopy * STOPA;

	cout << wzrostCm << " cm to: " << stopy << " stop i " << cale << " cali." << endl;


    return 0;
}
