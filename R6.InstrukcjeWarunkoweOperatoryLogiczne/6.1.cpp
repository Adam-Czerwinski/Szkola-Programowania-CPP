#include <iostream>
#include <windows.h>
#include <cctype>

using namespace std;
const int ARRAY_SIZE=100;
int main()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, ".1250");

  cout<<"Podaj tekst (@ kończy)"<<endl;
  char tab[ARRAY_SIZE];
  cin.getline(tab, ARRAY_SIZE);

  int i=0;
  while(tab[i]!='\0' && tab[i]!='@')
  {
    if(!isdigit(tab[i]))
    {
      if(islower(tab[i]))
        cout.put(toupper(tab[i]));
      else if(isupper(tab[i]))
        cout.put(tolower(tab[i]));
      else
        cout.put(tab[i]);
    }
    i++;
  }

	return 0;
}
