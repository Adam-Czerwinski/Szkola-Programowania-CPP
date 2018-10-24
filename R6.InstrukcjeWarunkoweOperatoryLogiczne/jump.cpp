#include <iostream>
#include <windows.h>

using namespace std;

const int ArSize=80;

int main()
{

  SetConsoleCP(1250);
  SetConsoleOutputCP(1250);
  setlocale(LC_ALL, ".1250");

  char line[ArSize];
  int spaces{};

  cout<<"Wpisz wiersz tekstu:\n";
  cin.get(line,ArSize).get();
  cout<<"Cały wiersz:\n"<<line<<endl;
  cout<<"Wiersz do pierwszej kropki:\n";

  for(int i=0;line[i]!='\0';i++)
  {
    cout<<line[i];
    if(line[i]=='.')
      break;
    if(line[i]!=' ')
      continue;
    spaces++;
  }

  cout<<"\n"<<spaces<<" spacji\n";
  cout<<"Gotowe.\n";

  return 0;
}
