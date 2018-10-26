#include <iostream>
#include <limits>

using namespace std;
const int NAZWISKO_SIZE=30;
struct wplacajacy{
  char nazwisko[NAZWISKO_SIZE];
  double kwota;
};

int main()
{

  cout<<"Podaj liczbę wpłacających: ";
  int liczbaWplacajacych;
  cin>>liczbaWplacajacych;
  while(!(cin.good()))
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"Podaj liczbę wpłacających: ";
    cin>>liczbaWplacajacych;
  }
  cin.get();

  wplacajacy *wplacajacyTab = new wplacajacy[liczbaWplacajacych];

  for(int i=0; i<liczbaWplacajacych;i++)
  {
    cout<<"Podaj wpłatę dla "<<i+1<<" wpłacającego\n";
    cout<<"Nazwisko: ";
    cin.get((wplacajacyTab+i)->nazwisko,NAZWISKO_SIZE);

    while((wplacajacyTab+i)->nazwisko[0]==NULL)
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout<<"Podaj wpłatę dla "<<i+1<<" wpłacającego\n";
      cout<<"Nazwisko: ";
      cin.get((wplacajacyTab+i)->nazwisko,NAZWISKO_SIZE);
    }

    if(cin.get()!='\n')
    {
      cout<<"Długie to nazwisko.. trochę Ci je utnę :)"<<endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }

    cout<<"Kwota: ";
    cin>>(wplacajacyTab+i)->kwota;
    while(!(cin.good()) || (wplacajacyTab+i)->kwota<=0)
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(),'\n');
      cout<<"Kwota: ";
      cin>>(wplacajacyTab+i)->kwota;
    }
    cin.get();
  }

  cout<<"\nNasi Wspaniali Sponsorzy\n";
  int iloscWspanialychSponsorow{};
  for(int i=0; i<liczbaWplacajacych;i++)
  {
    if((wplacajacyTab+i)->kwota>=10000.0)
    {
      cout<<(wplacajacyTab+i)->nazwisko<<", ";
      cout<<(wplacajacyTab+i)->kwota<<endl;
      iloscWspanialychSponsorow++;
    }
  }
  if(!iloscWspanialychSponsorow)
    cout<<"Brak\n";

  cout<<"Nasi Sponsorzy\n";
  int iloscSponsorow{};
  for(int i=0; i<liczbaWplacajacych;i++)
  {
    if((wplacajacyTab+i)->kwota<10000.0)
    {
      cout<<(wplacajacyTab+i)->nazwisko<<", ";
      cout<<(wplacajacyTab+i)->kwota<<endl;
      iloscSponsorow++;
    }
  }
  if(!iloscSponsorow)
    cout<<"Brak\n";

  delete wplacajacyTab;
  return 0;
}
