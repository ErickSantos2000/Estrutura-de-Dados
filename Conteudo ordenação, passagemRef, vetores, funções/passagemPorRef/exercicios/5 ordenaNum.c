#include <stdio.h>
#include <string.h>

/*
4) Faça um programa que leia o seu nome completo e o imprima na ordem inversa.
   Depois, exiba a mensagem:
   "Meu nome completo é: [Nome Digitado]"
*/

void inverterString(char *str) {
    int i, j;
    int tamanho = strlen(str);
    char temp;

    // Inverte a string
    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char nome[100];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    
    // Remover o '\n' gerado pelo fgets
    nome[strcspn(nome, "\n")] = '\0';

    printf("Nome invertido: ");
    inverterString(nome);
    printf("%s\n", nome);

    // Restaurando o nome original
    inverterString(nome);

    printf("Meu nome completo é: %s\n\n", nome);

    /*
    5) Faça um programa que leia duas strings e verifique se são iguais.
       Se forem iguais, exiba "Palavras iguais", senão, "Palavras diferentes".
    */

    char palavra1[100], palavra2[100];

    printf("Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';

    printf("Digite a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';

    if (strcmp(palavra1, palavra2) == 0) {
        printf("Palavras iguais\n");
    } else {
        printf("Palavras diferentes\n");
    }

    return 0;
}
