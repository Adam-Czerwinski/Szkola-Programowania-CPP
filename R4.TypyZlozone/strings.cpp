#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int Size{15};
    char name1[Size];
    char name2[Size] {"C++owboy"};
    //jezeli nie dziala inicjalizacja dodac static przed typ tablicy

    cout<<"Jak sie masz! Jestem "<<name2;
    cout<<"! A jak Ty sie nazywasz?\n";
    cin>>name1;
    cout<<"No tak, "<<name1<<", twoje imie ma ";
    cout<<strlen(name1)<<" liter i jest zapisane\n";
    cout<<"w tablicy majacej "<<sizeof(name1)<<" bajtow\n";
    cout<<"Twoj inicjal to "<<name1[0]<<".\n";
    name2[3]='\0';  //znak NUL
    cout<<"Pierwsze trzy litery mojego imienia to: ";
    cout<<name2;

    return 0;
}
