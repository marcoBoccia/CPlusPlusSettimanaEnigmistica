// Scrivi un programma in C++ che prenda in input una stringa di caratteri e conti quante volte ogni carattere è presente all'interno della stringa.

#include <iostream>
#include <string>
using namespace std;

// solution 1
/*
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
*/

#include <iostream>
using namespace std;
/* solution 2 
int main()
{
    string fatto = "";
    string frase = "mamma";
    int contatore = 0;
 
    for (int i = 0; i < frase.length(); i++)
    {
        cout << "lettera " << frase[i] << " in posizione i " << i << endl;
        for (int j = 0; j < frase.length(); j++)
        {
            // cout << "confronto " << frase[i] << " con " << frase[j] << endl;
            // cout << "i vale " << i << " e j vale " << j << endl;
            cout << "---------J"<<j<<"-----------" << endl;
            if (frase[i] == frase[j])
            {
                contatore++;
            }
            fatto += frase[i];
        }
        cout << "la lettera " << frase[i] << " compare " << contatore << " volte" << endl;
        cout << "________I___________" << endl;
    }
 
    cout << "fine" << endl;
}
*/
