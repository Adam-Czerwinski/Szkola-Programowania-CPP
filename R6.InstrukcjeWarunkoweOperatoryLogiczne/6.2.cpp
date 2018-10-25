#include <iostream>
#include <windows.h>
#include <array>

using namespace std;
const int ARRAY_SIZE=10;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

  array<double,ARRAY_SIZE> tab;

  int i{};
  double total{};

  cout<<"Podaj datek "<<i+1<<": ";
  while(i<ARRAY_SIZE && cin>>tab.at(i))
  {
    total+=tab.at(i);

    if(++i<ARRAY_SIZE)
      cout<<"Podaj datek "<<i+1<<": ";
  }

  cout<<"Średnia: "<<total/i<<endl;

	return 0;
}
