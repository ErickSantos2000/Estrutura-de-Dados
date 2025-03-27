#include <stdio.h>

/*
   Função calculadora que recebe dois números inteiros (por referência)
   e um caractere indicando a operação (+, -, *, /).
   O primeiro número é alterado com o resultado e o segundo é zerado.
*/
void calculadora(int *a, int *b, char operador) {
    if (operador == '+') {
        *a += *b;
    } else if (operador == '-') {
        *a -= *b;
    } else if (operador == '*') {
        *a *= *b;
    } else if (operador == '/') {
        if (*b != 0) {  // Evita divisão por zero
            *a /= *b;
        } else {
            printf("Erro: Divisão por zero!\n");
            return;
        }
    } else {
        printf("Erro: Operador inválido!\n");
        return;
    }
    *b = 0;
}

int main() {
    int a, b;
    char op;

    printf("Digite dois números inteiros e a operação (+, -, *, /): ");
    scanf("%d %d %c", &a, &b, &op);

    calculadora(&a, &b, op);

    printf("Resultado da operação: %d, valor de b zerado: %d\n", a, b);

    return 0;
}
