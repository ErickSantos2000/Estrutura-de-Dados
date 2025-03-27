#include <stdio.h>
#include <stdlib.h>

/*
3) Crie 2 vetores de inteiros com tamanho 5.
Verifique quais elementos são iguais entre
eles. Exemplo:
– Vetor1[0] é igual a Vetor2[3]
– Vetor1[4] é igual a Vetor2[4]
*/

int main() {
    int vetor1[5] = {4, 30, 5, 23, 15};
    int vetor2[5] = {2, 3, 5, 1, 4};

    int indice1 = 0; 
    int indice2 = 0;

    for (indice1 = 0; indice1 < 5; indice1++) {
        for(indice2 = 0; indice2 < 5; indice2++){
            if(vetor1[indice1] == vetor2[indice2]){
                printf("Vetor1[%d] eh igual a Vetor2[%d]\n", indice1, indice2);
            }
        }
    }
    return 0;
}
