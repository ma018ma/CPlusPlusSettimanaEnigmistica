#include<iostream>
#include<string>
using namespace std;

//void stampaInverso (string parola)

int main()
{   string parola ("");
    cout<<"parola?"<<endl;
    cin>>parola;
    for (int i=parola.length(); i--;)
    {
    cout<<parola[i];
    }
}
