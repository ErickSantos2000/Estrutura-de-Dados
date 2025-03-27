#include <stdio.h>

// Faça um programa que leia 8 números inteiros e os armazene em um vetor. 
// Após isso, determine o maior e o menor número armazenados no vetor e exiba-os.

int main() {
    int vetor[8];
    int maior, menor;
 
    printf("Informe 8 numeros inteiros:\n");
    for(int i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
    }

    
    maior = vetor[0];
    menor = vetor[0];

    for(int i = 1; i < 8; i++){
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
