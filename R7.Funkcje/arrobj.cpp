#include <iostream>
#include <array>
#include <string>

const int SEASONS=4;
const std::array<std::string,SEASONS> SNAMES = {"Wiosna", "Lato", "Jesien", "Zimaa"};

void show(std::array<double, SEASONS> da);
void fill(std::array<double, SEASONS> *pa);

int main()
{
  using std::array;

  array<double, SEASONS> expenses;

  fill(&expenses);
  show(expenses);

  return 0;
}


void show(std::array<double, SEASONS> da){
  using namespace std;

  double total=0.0;

  cout<<"\nWYDATKI\n";
  for(int i=0;i<SEASONS;i++)
  {
    cout<<SNAMES.at(i)<<": "<<da.at(i)<<" zł"<<endl;
    total+=da.at(i);
  }

  cout<<"Łącznie wydatki roczne: "<<total<<" zł"<<endl;
}

void fill(std::array<double, SEASONS> *pa){
  using namespace std;

  for(int i=0;i<SEASONS;i++)
  {
    cout<<"Podaj wydatki za okres >>"<<SNAMES.at(i)<<"<<: ";
    cin>>(*pa).at(i);
  }
}
