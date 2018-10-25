#include <iostream>
#include <windows.h>
#include <fstream>
#include <cstdlib>

using namespace std;

const int ROZMIAR = 60;

int main()
{
  SetConsoleCP(1250);
  SetConsoleOutputCP(1250);
  setlocale(LC_ALL, ".1250");

  char filename[ROZMIAR];
  ifstream inFile;

  cout<<"Podaj nazwę pliku z danymi: ";
  cin.getline(filename,ROZMIAR);

  inFile.open(filename);
  if(!inFile.is_open())
  {
    cout<<"Otwarcie pliku "<<filename<<" nie powiodło się.\n";
    cout<<"Program zostanie zakończony.\n";
    exit(EXIT_FAILURE);
  }

  double value;
  double sum{};
  int count{};

  inFile>>value;
  while(inFile.good())
  {
    ++count;
    sum+=value;
    inFile>>value;
  }

  if(inFile.eof())
    cout<<"Koniec pliku.\n";
  else if(inFile.fail())
    cout<<"Wczytanie danych przerwane - błąd.\n";
  else
    cout<<"Wczytanie danych przerwane, przyczyna nieznana.\n";

  if(count==0)
    cout<<"Nie przetworzono żadnych danych.\n";
  else
  {
    cout<<"Wczytano elementów: "<<count<<endl;
    cout<<"Suma: "<<sum<<endl;
    cout<<"Średnia: "<<sum/count<<endl;
  }

  inFile.close();

  return 0;
}
