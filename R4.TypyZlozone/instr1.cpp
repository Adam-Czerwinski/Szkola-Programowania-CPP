#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   const int ArSize{20};
   char name[ArSize]{};
   char dessert[ArSize]{};

   cout<<"Podaj swoje imie:\n";
   cin>>name;
   cout<<"Podaj swoj ulubiony deser:\n";
   cin>>dessert;
   cout<<"Mam dla Ciebie "<<dessert;
   cout<<", "<<name<<".\n";
    return 0;
}

