#include <stdio.h>
#include <string.h>

/*
• Faça um programa que leia o seu nome completo e, em seguida, imprima seu nome na
  ordem inversa.
*/

void reverse(char nome[]) {
    int tamanho = strlen(nome);
    for(int i = tamanho - 1; i >= 0; i--){
        putchar(nome[i]);
    }
}

int main() {
    char nome[200];
    
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = 0;
    
    printf("Nome invertido: ");
    reverse(nome);
    
    return 0;
}
