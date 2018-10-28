#include <iostream>

using namespace std;
const int MAX=5;
int fill_array(double arr[], int limit);
void show_array(const double arr[], int n);
void revalue(double r, double arr[], int n);

int main()
{

  double properties[MAX];

  int size = fill_array(properties, MAX);
  show_array(properties, size);

  if(size>0)
  {
    cout<<"Podaj czynnik zmiany wartości: ";
    double factor;
    while(!(cin>>factor))
    {
      cin.clear();
      while(cin.get()!='\n')
        continue;
      cout<<"Niepoprawna wartość! Podaj liczbę: ";
    }
    revalue(factor, properties, size);
    show_array(properties,size);
  }
  cout<<"Gotowe!";
  cin.get();

  return 0;
}

int fill_array(double arr[], int limit)
{
  double temp;
  int i{};
  for(i=0;i<limit;i++)
  {
    cout<<"Podaj "<<i+1<<" wartość: ";
    cin>>temp;
    if(!cin.good())
    {
      cin.clear();
      while(cin.get()!='\n')
        continue;
      cout<<"Błędne dane, wprowadzanie danych przerwane.\n";
      break;
    }else if(temp<0)
      break;

    arr[i]=temp;
  }
  return i;
}

void show_array(const double arr[], int n)
{
  for(int i=0; i<n; i++)
  {
    cout<<"Nieruchomości nr "<<i+1<<": ";
    cout<<arr[i]<<endl;
  }
}

void revalue(double r, double arr[], int n)
{
  for(int i=0; i<n; i++)
    arr[i]*=r;
}
