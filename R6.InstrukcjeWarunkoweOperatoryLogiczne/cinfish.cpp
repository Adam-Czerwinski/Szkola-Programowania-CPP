#include <iostream>
#include <windows.h>
using namespace std;

const int Max = 5;

int main()
{
  SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

  double fish[Max];
  cout<<"Proszę podać wagę swoich ryb.\n";
  cout<<"Maksymalnie można podać "<<Max<<" ryb <q kończy>.\n";

  cout<<"ryba 1.: ";
  int i=0;
  while(i<Max && cin>>fish[i])
  {
    if(++i<Max)
      cout<<"ryba "<<i+1<<".: ";
  }

  double total=0.0;
  for(int j=0; j<i; j++)
  {
    total+=fish[j];
  }

  if(i==0)
    cout<<"Nie ma żadnych ryb\n";
  else
    cout<<total/i<<" = średnia waga "<<i<<" ryb\n";
  cout<<"Gotowe\n";

  return 0;
}
