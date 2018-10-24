#include <iostream>
#include <windows.h>

using namespace std;

const int Max=5;

int main()
{
  SetConsoleCP(1250);
  SetConsoleOutputCP(1250);
  setlocale(LC_ALL,".1250");

  int golf[Max];

  cout<<"Proszę podać swoje wyniki w golfie.\n";
  cout<<"Musisz podać wynik "<<Max<<" gier.\n";

  int i;

  for(i=0;i<Max;i++)
  {
    cout<<"tura "<<i+1<<".: ";
    while(!(cin>>golf[i]))
    {
      cin.clear();
      while(cin.get()!='\n')
        continue;
      cout<<"Proszę podać liczbę: ";
    }
  }

  double total{};
  for(i=0;i<Max;i++)
    total+=golf[i];

  cout<<total/Max<<" = średni wynik z "<<Max<<" tur\n";

  return 0;
}
