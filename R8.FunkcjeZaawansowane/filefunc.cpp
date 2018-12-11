#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int LIMIT = 5;

void file_it(ostream &os, double fo, const double fe[], int n);

int main(){

  ofstream fout;
  const char *fn = "ep-data.txt";
  fout.open(fn);
  if(!fout.is_open())
  {
    cout<<"Otwarcie pliku nie powiodło się!";
    exit(EXIT_FAILURE);
  }

  double objective;
  cout<<"Podaj ogniskową teleskopu w milimetrach: ";
  cin>>objective;

  double eps[LIMIT];
  cout<<"Podaj ogniskowe w milimetrach "<<LIMIT<<" okularów:\n";
  for(int i=0;i<LIMIT;i++)
  {
    cout<<"Okulary nr "<<i+1<<": ";
    cin>>eps[i];
  }

  file_it(fout, objective, eps, LIMIT);
  file_it(cout, objective, eps, LIMIT);

  cout<<"\nGOTOWE!";



  fout.close();

  return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n){
  ios_base::fmtflags initial;
  initial = os.setf(ios_base::fixed);   //zachowaj formatowanie początkowe
  //metoda setf() pozwala ustawić różne stany związane z formatowaniem. Więcej na str 363.
  os.precision(0);
  os<<"Ogniskowa obiektywu: "<<fo<<" mm\n";
  os.setf(ios::showpoint);
  os.precision(1);
  os.width(12);
  os<<"f okularu";
  os.width(15);
  os<<"powiększenie"<<endl;
  for(int i=0;i<n;i++)
  {
    os.width(12);
    os<<fe[i];
    os.width(15);
    os<<int(fo/fe[i] + 0.5)<<endl;
  }
  os.setf(initial);           //przywrócenie ustawień początkowych formatowania
}
