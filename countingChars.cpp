// Scrivi un programma in C++ che prenda in input una stringa di caratteri e conti quante volte ogni carattere è presente all'interno della stringa.

#include <iostream>
using namespace std;

int main()
{
    char parola[256];
    cout<<"Inserisci una parola: "<<endl;
    cin>>parola;
    
    int contatore=0;
    while(parola[contatore]!='\0')
    {
        contatore++;
    }
    
    char caratterePiuRipetuto;
    int volteMax=0;
    
    for(int i=0;i<contatore;i++)
    {
        int volte=0;
        for(int j=0;j<contatore;j++)
        {
            if(parola[i]==parola[j])
            {volte++;}
        }
        if(volte>volteMax)
        {
            volteMax=volte;
            caratterePiuRipetuto=parola[i];
        }
    }
    
    cout<<"il carattere che appare piu' volte e' "<< caratterePiuRipetuto <<endl;
    cout<<"ed appare "<<volteMax<<" volte"<<endl;
}