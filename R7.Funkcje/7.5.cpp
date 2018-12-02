#include <iostream>

using namespace std;

int silnia(int x)
{
	if (x == 0)
	{
		return 1;
	}else 
	{
		return x * silnia(x - 1);
	}
	
}

int main(){

	int s;
	cout << "'q' konczy dzialanie programu" << endl;
	cout << "Wylicz silnie z liczby: ";
	while (cin >> s)
	{
		cout << "Silnia wynosi: " << silnia(s) << endl;
		cout << "Wylicz silnie z liczby: ";
	}

	return 0;
}