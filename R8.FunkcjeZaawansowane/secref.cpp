#include <iostream>

using namespace std;

int main()
{
  int rats = 101;
  int &rodents = rats;

  cout<<"rats = "<<rats;
  cout<<", rodents = "<<rodents<<endl;

  rodents++;

  cout << "rats = " << rats;
  cout<<", rodents = "<<rodents<<endl;

  cout<<"adres rats = "<<&rats;
  cout<<", adres rodents = "<<&rodents<<endl;

  int bunnies = 50;
  rodents = bunnies;
  cout<<"bunnies = "<<bunnies;
  cout<<", rats = "<<rats;
  cout<<", rodents = "<<rodents<<endl;

  cout<<"adres bunnies = "<<&bunnies;
  cout<<", adres rodents = "<<&rodents<<endl;


  return 0;
}
