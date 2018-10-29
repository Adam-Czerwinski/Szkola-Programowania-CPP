#include <iostream>

using namespace std;
unsigned int c_in_str(const char *str, char ch);
int main()
{

  char mmm[15]="minimum";

  char *wail = "ululate";

  unsigned int ms=c_in_str(mmm,'m');
  unsigned int us=c_in_str(wail,'u');

  cout<<ms<<" znaków m w "<<mmm<<endl;
  cout<<us<<" znaków u w "<<wail<<endl;

  return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
  unsigned int count{};

  while(*str)
  {
    if(*str==ch)
      count++;
    str++;
  }
  return count;
}
