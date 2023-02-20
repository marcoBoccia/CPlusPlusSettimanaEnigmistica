// Scrivi un programma in c++ che prenda in input una stringa di caratteri e ne stampi ogni carattere in ordine inverso,utilizzando un ciclo for.

#include <iostream>
#include <string>
using namespace std;

/* solution 1
int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;

    cout << "La parola al contrario è: ";

    for (int i = parola.length() - 1; i >= 0; i--)
    {
        cout << parola[i];
    }

    cout << endl;

    return 0;
}
*/

// solution 2

void parolaAlContrario(string parola)
{
    for (int i = parola.length() - 1; i >= 0; i--)
    {
       cout<< parola[i];
    }
    cout<<endl;
}

int main(){
    parolaAlContrario("Marco");
}