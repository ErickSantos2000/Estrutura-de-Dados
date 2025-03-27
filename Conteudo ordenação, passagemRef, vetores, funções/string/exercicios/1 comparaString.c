#include <stdio.h>
#include <string.h>

/* 
• 5) Faça um programa que leia 2 strings informadas pelo usuário. 
   Verifique se essas strings são iguais, se forem iguais exiba a 
   mensagem “Palavras iguais”, caso contrário exiba a mensagem 
   “Palavras diferentes”.
   – Dica: Existe uma função que informa o tamanho da string! 
   Se as 2 strings tiverem tamanhos diferentes já sabemos que as 
   palavras são diferentes! Veja o exemplo a seguir:
*/

void comparaString(char n1[], char n2[]) {
    // Usando strcmp para comparar as duas strings
    if (strcmp(n1, n2) == 0) {
        // Se as strings forem iguais
        printf("As strings são iguais\n");
    } else {
        // Se as strings não forem iguais
        printf("As strings não são iguais\n");
    }
}

int main() {
    char nome1[100], nome2[100];
    
    // Lendo as duas strings
    printf("Digite o nome da primeira string: ");
    fgets(nome1, sizeof(nome1), stdin);
    
    printf("Digite o nome da segunda string: ");
    fgets(nome2, sizeof(nome2), stdin);
    
    // Removendo o caractere de nova linha (\n) que pode ser adicionado pelo fgets
    nome1[strcspn(nome1, "\n")] = 0;
    nome2[strcspn(nome2, "\n")] = 0;
    
    // Chamando a função para comparar as duas strings
    comparaString(nome1, nome2);
    
    return 0;
}
