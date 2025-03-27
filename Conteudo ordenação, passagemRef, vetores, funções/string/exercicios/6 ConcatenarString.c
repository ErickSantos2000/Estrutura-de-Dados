#include <stdio.h>
#include <string.h>
/*
Faça um programa que leia duas 
strings do usuário e as concatene em
uma terceira string. Exiba a string concatenada.
*/

int main() {
    char nome1[100];
    char nome2[100];

    printf("Primeiro nome:");
    fgets(nome1, sizeof(nome1), stdin);

    printf("Segundo nome:");
    fgets(nome2, sizeof(nome2), stdin);

    // Remove o caractere de nova linha de ambas as strings
    nome1[strcspn(nome1, "\n")] = 0;
    nome2[strcspn(nome2, "\n")] = 0;

    printf("%s %s", nome1, nome2);

    return 0;
}
