#include <iostream>

using namespace std;

int main()
{
    //NIEPOPRAWNA WERSJA
    /*
    cout<<"W ktorym roku zbudowano twoj dom?\n";
    int year{};
    cin>>year;
    cout<<"Przy jakiej ulicy mieszkasz?\n";
    char address[80];
    cin.getline(address,80);
    cout<<"Rok budowy: "<<year<<endl;
    cout<<"Adres: "<<address<<endl;
    cout<<"Gotowe!";
    */

    cout<<"W ktorym roku zbudowano twoj dom?\n";
    int year{};
    /*
    cin>>year;
    cin.get();
    */
    //lub
    (cin>>year).get();
    cout<<"Przy jakiej ulicy mieszkasz?\n";
    char address[80];
    cin.getline(address,80);
    cout<<"Rok budowy: "<<year<<endl;
    cout<<"Adres: "<<address<<endl;
    cout<<"Gotowe!";


    return 0;
}
