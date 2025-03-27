
/* 
Crie um programa que leia 10 números inteiros e os armazene em um vetor. 
Em seguida, leia um número e conte quantas vezes ele aparece no vetor.
*/

#include <stdio.h>

int main () {
    int n;
    int vetor[10];
    int cont = 0;

    printf("Informe 10 numeros inteiros:\n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Informe o numero que deseja, para saber quantas vezes ele aparece: ");
    scanf("%d", &n);

    for(int i = 0; i < 10; i++){
        if(n == vetor[i]){
            cont++;
        }

    printf("O numero informado aparece %d vezes.\n", cont);

    return 0;
}

