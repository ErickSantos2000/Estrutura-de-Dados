#include <stdio.h>
#include <stdlib.h>

/*
1) Crie dois vetores de caracteres. 
Preencha os vetores e em seguida crie um terceiro
vetor que seja a concatenação dos dois
primeiros!
*/

int main() {
    char vetor1[5] = {'E', 's', 't', 'r', 'u'};
    char vetor2[10] = {'r','a','D','e','D','a','d','o','s',' '};

    int tamanhoVetor1 = sizeof(vetor1)/sizeof(vetor1[0]);
    int tamanhoVetor2 = sizeof(vetor2)/sizeof(vetor2[0]);

    int tamanhoTotal = tamanhoVetor1 + tamanhoVetor2;

    char vetor3[15];
    
    for (int i = 0; i < tamanhoVetor1; i++) {
        vetor3[i] = vetor1[i];
    }
    for (int i = 0; i < tamanhoVetor2; i++) {
        vetor3[tamanhoVetor1 + i] = vetor2[i];
    }
    for (int i = 0; i < tamanhoTotal; i++) {
        printf("%c ", vetor3[i]);
    }
    return 0;
}
