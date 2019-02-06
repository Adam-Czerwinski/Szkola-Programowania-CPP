#include <iostream>
#include "stonewt.h"


int main() {

	using namespace std;

	int SIZE = 6;
	int stn;
	double lbs;
	int indexMin = 0;
	int indexMax = 0;
	int amountGreaterThan11 = 0;
	Stonewt tabStonewt[6]={ Stonewt(12,3),Stonewt(11,8),Stonewt(10,9) };
	Stonewt compareStonewt(11, 0);

	for (int i = 3; i < SIZE; i++)
	{
		cout << i << ":\n";
		cout << "stn: ";
		cin >> stn;
		cout << "lbs: ";
		cin >> lbs;
		tabStonewt[i] = Stonewt(stn, lbs);
	}

	for (int i = 0; i < SIZE; i++)
	{
		tabStonewt[i].show_lbs();
		tabStonewt[i].show_stn();
	}

	for (int i = 0; i < SIZE; i++)
	{
		indexMin = tabStonewt[i] < tabStonewt[indexMin] ? i : indexMin;
		indexMax = tabStonewt[i] > tabStonewt[indexMax] ? i : indexMax;
		if (tabStonewt[i] >= compareStonewt)
			amountGreaterThan11++;
	}

	cout << "Index z najmniejsz¹ wartoœci¹: " << indexMin << endl;
	cout << "Index z najwiêksz¹ wartoœci¹: " << indexMax << endl;
	cout << "Iloœæ elementów wiêkszych ni¿ 11 kamieni: " << amountGreaterThan11 << endl;

	return 0;
}
