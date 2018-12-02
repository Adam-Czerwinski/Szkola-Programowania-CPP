#include <iostream>

using namespace std;

double add(double, double);
double sub(double, double);
double mult(double, double);
double calculate(double, double, double (*fnc)(double, double));
int main()
{
	double(*pf[3])(double, double) = { add, sub, mult };
	cout << "Ile wartosci chcesz sprawdzic?: ";
	int ile;
	double x, y;
	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		cout << "Podaj pierwsza wartosc: ";
		cin >> x;
		cout << "Podaj druga wartosc: ";
		cin >> y;
		for (int j = 0; j < 3; j++)
		{
			cout << calculate(x, y, pf[j]) << endl;
		}
	}

	return 0;
}


double add(double x, double y) {
	cout << "x + y = ";
	return x + y;
}
double sub(double x, double y) {
	cout << "x - y = ";
	return x - y;
}
double mult(double x, double y) {
	cout << "x * y = ";
	return x * y;
}

double calculate(double x, double y, double(*fnc)(double, double)) {

	return (*fnc)(x, y);		//albo po prostu fnc(x,y)
}