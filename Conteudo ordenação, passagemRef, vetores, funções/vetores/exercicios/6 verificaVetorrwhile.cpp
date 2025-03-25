#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

/*
3) Crie 2 vetores de inteiros com tamanho 5.
Verifique quais elementos são iguais entre
eles. Exemplo:
– Vetor1[0] é igual a Vetor2[3]
– Vetor1[4] é igual a Vetor2[4]
*/

int main() {
    int vetor1[5];
    int vetor2[5];

    int i = 0;

    while (i < 5){
        cout << "vetor1: ";
        cin >> vetor1[i];
        cout << "vetor2: ";
        cin >> vetor2[i];
        i++;
    }

    for (int indice1 = 0; indice1 < 5; indice1++) {
        for(int indice2 = 0; indice2 < 5; indice2++){
            if(vetor1[indice1] == vetor2[indice2]){
                cout << "Vetor1[" << indice1 << "]" << " eh igual a vetor2 ["<< indice2 <<"]\n";
            }
        }
    }
    return 0;
}
