#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

  ifstream inFile;
  inFile.open("6.8.txt");
  int znaki{};

  inFile.get();
  while(!inFile.eof())
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
