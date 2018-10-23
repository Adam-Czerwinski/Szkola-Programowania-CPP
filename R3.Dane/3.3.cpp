#include <iostream>

using namespace std;

int main()
{
    cout<<"Podaj dlugosc w stopniach, minutach i sekundach: "<<endl;

    cout<<"Najpierw podaj stopnie: ";
    int stopnie{};
    cin>>stopnie;

    cout<<"Nastepnie podaj minuty stopnia luku: ";
    int stopnie_luku{};
    cin>>stopnie_luku;

    cout<<"Na koniec podaj sekundy luku: ";
    int sekundy_luku{};
    cin>>sekundy_luku;

    float st{};
    st = stopnie + stopnie_luku/60.0f + sekundy_luku/3600.0f;

    cout<<stopnie<<" stopni, "<<stopnie_luku<<" minut, "<<sekundy_luku<<" sekund = "<<st<<" stopni."<<endl;


    return 0;
}
