#include <iostream>
#include <fstream>

using namespace std;

const int NAZWISKO_SIZE=30;

struct wplacajacy{
  char nazwisko[NAZWISKO_SIZE];
  double kwota;
};

int main()
{


  ifstream inFile;
  inFile.open("6.9.txt");

  if (!inFile.is_open())
  {
	  cout << "Plik nie zosta³ poprawnie otwarty!";
	  exit(EXIT_FAILURE);
  }

  int liczbaWplacajacych;
  inFile>>liczbaWplacajacych;
  inFile.get();

  wplacajacy *wplacajacyTab = new wplacajacy[liczbaWplacajacych];
  int linia=1;
  int i=0;

  //ALGORYTM
  while(inFile.good())
  {
    switch(linia)
    {
      case 1:
        inFile.getline((*(wplacajacyTab+i)).nazwisko,NAZWISKO_SIZE);
        linia++;
        break;

      case 2:
        inFile>>(*(wplacajacyTab+i)).kwota;
        inFile.get();
        linia=1;
        i++;
        break;
    }
  }

  //WYSWIETLANIE
  cout<<"Nasi Wspaniali Sponsorzy\n";
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
