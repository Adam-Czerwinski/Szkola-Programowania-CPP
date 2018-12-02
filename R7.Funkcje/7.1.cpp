#include <iostream>

using namespace std;

float sredniaHarmoniczna(const float x, const float y)
{
	return (2.0*x*y) / (x + y);
}

int main() {

	float x = 1, y = 1; //po prostu jakies losowe wartosci rozne od 0

	cout << "Podaj pierwsz� liczb�: ";
	cin >> x;

	cout << "Podaj drug� liczb�: ";
	cin >> y;

	while (x && y)
	{
		cout << "Wynik �redniej harmonicznej dla podanych liczb: " << sredniaHarmoniczna(x, y) << endl;

		cout << "Podaj pierwsz� liczb�: ";
		cin >> x;

		cout << "Podaj drug� liczb�: ";
		cin >> y;
	}

	return 0;
}