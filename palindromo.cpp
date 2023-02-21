#include <iostream>
#include <string>
using namespace std;
bool palindromo(string parola)
{
    bool risultato = false;

    int k = parola.length() - 1;

    cout << "parola?" << endl;
    cin >> parola;
    for (int i = 0; i < parola.length() -1; i++)
    {
        cout << parola[i] << parola[k] << endl;
        k--;
    }
    return risultato;
}

int main()
{
    string parola("");

    if (palindromo(parola))
    {
        cout << "sta parola e palindromo." << endl;
    }
    else
    {
        cout << "no palindromo" << endl;
    }
}

/*legge al contrario
for (int i=parola.length()-1; i>=0; i--)
{
    cout<<parola[i]<<"---"<<i<<endl;
}
legge dritto*/
