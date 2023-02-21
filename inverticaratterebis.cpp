#include<iostream>
#include<string>
using namespace std;

int main()
{   string parola ("");
    cout<<"parola?"<<endl;
    cin>>parola;
    for (int i=parola.length()-1; i>=0; i--) 
    {
    cout<<parola[i];
    }
}
