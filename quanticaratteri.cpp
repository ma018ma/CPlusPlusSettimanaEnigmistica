#include <iostream>
#include <string>
using namespace std;
int main()
{
    string parola;
    int quante = 0;
    int c;
    cout << "dammi una parola" << endl;
    cin >> parola;
    for (int i = 0; i < parola.length(); i++)
    {    
        for (c = 0; c < parola.length(); c++)
            if (parola[i] == parola[c])
            {
                quante++;
            }
       
        cout << "nella parola ci sono: " << quante << parola[i] << endl;
     quante = 0;
    }
}