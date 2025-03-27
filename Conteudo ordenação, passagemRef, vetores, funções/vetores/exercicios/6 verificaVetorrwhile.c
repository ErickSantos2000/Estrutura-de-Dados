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
    int vetor1[5];
    int vetor2[5];
    
    int i = 0;
    
    while (i < 5){
        printf("vetor1: ");
        scanf("%d", &vetor1[i]);
        printf("vetor2: ");
        scanf("%d", &vetor2[i]);
        i++;
    }
    
    for (int indice1 = 0; indice1 < 5; indice1++) {
        for(int indice2 = 0; indice2 < 5; indice2++){
            if(vetor1[indice1] == vetor2[indice2]){
                printf("Vetor1[%d] eh igual a Vetor2[%d]\n", indice1, indice2);
            }
        }
    }
    return 0;
}
