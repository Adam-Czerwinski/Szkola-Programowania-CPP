#include <iostream>
#include <windows.h>
#include <array>

using namespace std;

int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

  cout<<"r) roślinożerca\t\tp)pianista\nd)drzewo\t\t\tg)gra\n";
  char litera;

  cin>>litera;
  while(litera!='r' && litera!='p' && litera!='d' && litera!='g')
  {
    cout<<"Proszę podać literę r, p, t lub g: ";
    cin>>litera;
  }
    switch(litera)
    {
      case 'r': cout<<"Roslinozerca."; break;
      case 'p': cout<<"Pianista."; break;
      case 'd': cout<<"Drzewo."; break;
      case 'g': cout<<"Gra."; break;
      default: cout<<"TO JEST NIEMOZLIWE."; break;
    }

  return 0;
}
