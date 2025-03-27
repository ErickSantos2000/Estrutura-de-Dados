#include <stdio.h>

/*
   Função que calcula a soma e a diferença de dois números
   e armazena os resultados nos próprios parâmetros.
*/
void calcula(int *a, int *b) {
    int soma = *a + *b;
    int diferenca;

    if (*a <= *b) {
        diferenca = *b - *a;
    } else {
        diferenca = *a - *b;
    }

    *a = soma;
    *b = diferenca;
}

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    calcula(&a, &b);

    printf("Resultado:\n");
    printf("Soma: %d\n", a);
    printf("Diferenca: %d\n", b);

    return 0;
}
