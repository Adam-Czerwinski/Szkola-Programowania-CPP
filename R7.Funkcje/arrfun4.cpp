#include <iostream>

using namespace std;

const int ArrSize=8;

int sum_arr(const int *begin, const int *end);

int main()
{
  int cookies[ArrSize] = {1,2,4,8,16,32,64,128};

  int sum;
  sum=sum_arr(cookies, cookies+ArrSize);
  cout<<"Zjedzono ciasteczek: "<<sum<<endl;

  sum=sum_arr(cookies,cookies+3);
  cout<<"Pierwsze trzy osoby zjadly "<<sum<<" ciasteczek."<<endl;

  sum=sum_arr(cookies+4,cookies+8);
  cout<<"Ostatnie cztery osoby zjadło "<<sum<<" ciasteczek."<<endl;

  return 0;
}

int sum_arr(const int *begin, const int *end)
{
  int total{};

  for(begin; begin!=end; begin++)
    total+=(*begin);

  return total;
}
