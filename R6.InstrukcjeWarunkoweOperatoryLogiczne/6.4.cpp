#include <iostream>
#include <array>
#include <limits>
using namespace std;

const int STRSIZE=30;

struct zpdw{
  char imie[STRSIZE];
  char stanowisko[STRSIZE];
  char pseudoZPDW[STRSIZE];
  int preferencje;
};

int main()
{

  array<zpdw,6> structTab{{
    {"Adam","Prezes","Adamino",0},
    {"Karol","Lul","Karolek",0},
    {"Paweł","Konik","Pawełek",1},
    {"Wojtek","Qn","Wojciur",1},
    {"Michał","Giermek","Michael",2},
    {"Karol","Kulawy", "Karolek", 2}
    }};

    cout<<"Zakon Programistów Dobrej Woli"<<endl;
    cout<<"a. lista wg imion \t\tb. lista wg stanowisk"<<endl;
    cout<<"c. lista wg pseudonimów \td. lista wg preferencji"<<endl;
    cout<<"q. koniec"<<endl;

    char wybor{};
    do{
      cout<<"Podaj wybór: ";
      cin.get(wybor);
      if(cin.get()!='\n')
      {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Oj próbujesz mnie oszukać...\n";
        continue;
      }
      switch(wybor)
      {
        case 'a':
        for(int i=0; i<6; i++)
        {
          cout<<structTab.at(i).imie<<endl;
        }
        break;
        case 'b':
        for(int i=0; i<6; i++)
        {
          cout<<structTab.at(i).stanowisko<<endl;
        }
        break;
        case 'c':
        for(int i=0; i<6; i++)
        {
          cout<<structTab.at(i).pseudoZPDW<<endl;
        }
        break;
        case 'd':
        for(int i=0; i<6; i++)
        {
          if(structTab.at(i).preferencje==0)
          cout<<structTab.at(i).imie<<endl;
          else if(structTab.at(i).preferencje==1)
          cout<<structTab.at(i).stanowisko<<endl;
          else if(structTab.at(i).preferencje==2)
          cout<<structTab.at(i).pseudoZPDW<<endl;
        }
        break;
        case 'q':
        cout <<"Do zobaczenia!";
        break;
        default:
        cout<<"Chyba nie to chciałeś zrobić..\n";
        break;
      }
    }while(wybor!='q');




  return 0;
}
