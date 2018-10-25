#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

const int ArSize=80;

int main()
{

  SetConsoleCP(1250);
  SetConsoleOutputCP(1250);
  setlocale(LC_ALL, ".1250");

  char automobile[50];
  int year;
  double a_price;
  double d_price;

  ofstream outFile;
  outFile.open("carinfo.txt");

  cout<<"Podaj markę i model auta: ";
  cin.getline(automobile, 50);
  cout<<"Podaj rok produkcji: ";
  cin>>year;
  cout<<"Podaj cenę wyjściową: ";
  cin>>a_price;
  d_price=0.913 * a_price;

  cout<<fixed;
  cout.precision(2);
  cout.setf(ios_base::showpoint);
  cout<<"Marka i model: "<<automobile<<endl;
  cout<<"Rok: "<<year<<endl;
  cout<<"Cena wywoławcza w zł: "<<a_price<<endl;
  cout<<"Cena bieżąca: "<<d_price<<endl;

  outFile<<fixed;
  outFile.precision(2);
  outFile.setf(ios_base::showpoint);
  outFile<<"Marka i model: "<<automobile<<endl;
  outFile<<"Rok: "<<year<<endl;
  outFile<<"Cena wywoławcza w zł: "<<a_price<<endl;
  outFile<<"Cena bieżąca: "<<d_price<<endl;

  outFile.close();

  return 0;
}
