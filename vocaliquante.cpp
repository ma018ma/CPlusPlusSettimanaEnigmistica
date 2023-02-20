#include<iostream>
#include<string>
using namespace std;
int main(){
    string parola;
    int vocali = 0;
    cin>>parola;
    for (int i=0; i<=parola.length();i++)
    {
        if (parola[i]=='a'){
        vocali = vocali + 1;}
      
        else if (parola[i]=='e'){
        vocali = vocali + 1;}
      
        else if (parola[i]=='i'){
        vocali = vocali + 1;}
       
        else if (parola[i]=='o'){
        vocali = vocali + 1;}
    
        else if (parola[i]=='u'){
        vocali = vocali + 1;}
    }
    std::cout<<vocali<<endl;
}