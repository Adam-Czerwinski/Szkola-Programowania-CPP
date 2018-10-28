#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{

  int spolgloski{};
  int samogloski{};
  int inne{};
  string str;

  cout<<"Podawaj słowa (pojedyńcze q kończy):"<<endl;
  do{
    cin>>str;

    if((str[0]=='q' && str[1]==NULL) || (str[0]=='q' && (ispunct(str[1]) || isspace(str[1])))) break;

    if(isalpha(str[0]) && str[1]!=NULL)
    {
      switch(str[0])
      {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': samogloski++; break;
        default: spolgloski++; break;
      }
    }else inne++;


  }while(cin.get()!='\n');

  cout<<spolgloski<<" słow zaczyna się od spółgłosek."<<endl;
  cout<<samogloski<<" słow zaczyna się od samogłosek."<<endl;
  cout<<inne<<" słow nie zalicza się do żadnej z tych kategorii."<<endl;

  return 0;
}
