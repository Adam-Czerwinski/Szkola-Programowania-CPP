#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

  ifstream inFile;
  inFile.open("6.8.txt");

  if (!inFile.is_open())
  {
	  cout << "Plik nie został poprawnie otwarty.";
	  exit(EXIT_FAILURE);
  }

  int znaki{};

  inFile.get();
  while(inFile.good())
  {
    znaki++;
    inFile.get();
  }

  if(inFile.eof())
    cout<<"Koniec pliku.\n";
  else if(inFile.fail())
    cout<<"Wczytywanie danych przerwane - błąd.\n";
  else
    cout<<"Wczytywanie danych przerwane - przyczyna nieznana.\n";

  cout<<znaki<<" znaków.";


  inFile.close();

  return 0;
}
