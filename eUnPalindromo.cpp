// Scrivi un programma in c++ che prende in input una stringa di caratteri e verifichi se questa è un palindromo ,ovvero se può essere letta allo stesso modo da sinistra a destra e viceversa

#include <iostream>
#include <string>
using namespace std;

int main(){
    string parola;
    cout << "Inserisci una parola" << endl;
    cin >> parola;

    bool eUnPalindromo = true;
    int lunghezza = parola.length();

    for(int i = 0; i < lunghezza/2; i++){
        if (parola[i] != parola[lunghezza - i -1]){
            eUnPalindromo = false;
            break;
        }
    }
    if(eUnPalindromo){
        cout << parola << " è un palindromo"<< endl;
    }else
    {
        cout << parola << " non è un palindromo"<< endl;
    }
    return 0;
}

