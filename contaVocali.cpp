// Scrivi un programma in C++ che prenda in input una stringa di caratteri e ne conti il numero di vocali utilizzando.

#include <iostream>
#include <string>
using namespace std;

/* solution 1
int main()
{
    string parola;
    int contatoreVocali = 0;
    cout << "Inserisci una parola" << endl;
    cin >> parola;

    for (int i = 0; i < parola.length(); i++)
    {
        char carattereInI = parola[i];
        if (carattereInI == 'a' || carattereInI == 'e' || carattereInI == 'i' || carattereInI == 'o' || carattereInI == 'u' ||
            carattereInI == 'A' || carattereInI == 'E' || carattereInI == 'I' || carattereInI == 'O' || carattereInI == 'U')
        {
            contatoreVocali++;
        }
    }
        cout << "Il numero di vocali nella stringa inserita è: " << contatoreVocali << endl;
    return 0;
}
*/

// solution 2
void contaVocali(string parola){
    int contatoreVocali = 0;
        for (int i = 0; i < parola.length(); i++)
    {
        char carattereInI = parola[i];
        if (carattereInI == 'a' || carattereInI == 'e' || carattereInI == 'i' || carattereInI == 'o' || carattereInI == 'u' ||
            carattereInI == 'A' || carattereInI == 'E' || carattereInI == 'I' || carattereInI == 'O' || carattereInI == 'U')
        {
            contatoreVocali++;
        }
    }
        cout << "Il numero di vocali nella stringa inserita è: " << contatoreVocali << endl;
}

int main(){
    contaVocali("Marco");
}
