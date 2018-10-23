#include <iostream>

using namespace std;

int main()
{
    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout<<"Podaj liczbe: ";
    cin>>hats;
    cout<<"Podaj druga liczbe: ";
    cin>>heads;

    cout<<"hats = "<<hats<<"; heads = "<<heads<<endl;
    cout<<"hats + heads = "<<hats+heads<<endl;
    cout<<"hats - heads = "<<hats-heads<<endl;
    cout<<"hats * heads = "<<hats*heads<<endl;
    cout<<"hats / heads = "<<hats/heads<<endl;

    return 0;
}
