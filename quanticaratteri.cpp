#include<iostream>
#include<string>
using namespace std;
int main(){
    string parola;
    cout<<"dammi una parola"<<endl;
    cin>>parola;
    int i=0;
    while (i<parola.length()){
        for (int conta=0; conta<parola[i];conta++)
        cout<<"nella parola ci sono: "<<conta<<parola[i]<<endl;
    i++;
    }
}  