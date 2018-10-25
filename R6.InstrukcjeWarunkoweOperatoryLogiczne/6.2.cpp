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

  for(i=0; i<ARRAY_SIZE;i++)
  {
    cout<<"Datek "<<i+1<<": ";
    while(!(cin>>tab.at(i)))
    {
      cin.clear();

      while(cin.get()!='\n')
        continue;
      cout<<"Podaj liczbę!: ";
    }
    total+=tab.at(i);
  }

  cout<<"Średnia: "<<total/ARRAY_SIZE<<endl;

	return 0;
}
