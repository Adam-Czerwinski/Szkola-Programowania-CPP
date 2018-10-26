#include <iostream>
#include <cstdlib>

using namespace std;

const double PODATEK0K=0.0;
const double PODATEK5K=0.10;
const double PODATEK15K=0.15;
const double PODATEK35K=0.20;

int main()
{
  double twarp;

  cout<<"Podaj ile zarabiasz twarpów: ";

  if(!(cin>>twarp) || twarp<0.0)
  {
    cout<<"Podałeś błędne dane!";
    exit(EXIT_FAILURE);
  }

  double podatek{};

  do {
    if(twarp>35000.0)
    {
      podatek+=(twarp-35000.0)*PODATEK35K;
      twarp=35000;
    }else if(twarp>15000.0)
    {
      podatek+=(twarp-15000.0)*PODATEK15K;
      twarp=15000;
    }else if(twarp>5000.0)
    {
      podatek+=(twarp-5000.0)*PODATEK5K;
      twarp=0.0;
    }else break;
  } while(twarp>0);

  cout<<"Podatek: "<<podatek<<endl;

  return 0;
}
