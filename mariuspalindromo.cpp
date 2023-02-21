#include <iostream>
#include <string>
 
using namespace std;
 
bool palindroma(string parola)
{
    cout<<"parola?";
    cin>>parola;
    bool risultato = false;
    
    int k = parola.length()-1;
 
    for(int i=0; i<parola.length()-1; i++)
    {
        if (parola[i] == parola[k])
        {
            k--;
        }

        risultato = false;
    }
    return risultato;
 
}
 
int main()
{
    bool palindromo("casa");
    return risultato;
}
