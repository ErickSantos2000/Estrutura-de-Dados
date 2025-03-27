#include <stdio.h>

/* 
   Função que recebe dois ponteiros para inteiros e troca os valores entre eles
*/
void trocaValores(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int a = 10;
    int b = 20;

    printf("Antes da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    trocaValores(&a, &b);

    printf("Depois da troca:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
