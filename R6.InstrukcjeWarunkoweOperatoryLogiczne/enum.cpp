#include <iostream>
#include <windows.h>

using namespace std;

enum {
  red,
  orange,
  yellow,
  green,
  blue,
  violet,
  indigo
};

int main()
{
  SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

  cout<<"Podaj kod koloru (0-6): ";
  int  code;
  cin>>code;

  while(code>=red && code<=indigo)
  {
    switch(code)
    {
      case red: cout<<"Jej usta były czerwone.\n"; break;
      case orange: cout<<"Jej usta były orange.\n"; break;
      case yellow: cout<<"Jej usta były yellow.\n"; break;
      case green: cout<<"Jej usta były green.\n"; break;
      case blue: cout<<"Jej usta były blue.\n"; break;
      case violet: cout<<"Jej usta były violet.\n"; break;
      case indigo: cout<<"Jej usta były indigo.\n"; break;
    }
    cout<<"Podaj kod koloru (0-6): ";
    cin>>code;
  }
  cout<<"Do widzenia!\n";


  return 0;
}
