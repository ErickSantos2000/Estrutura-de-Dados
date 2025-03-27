#include <stdio.h>

void calcularFatorial(int *n) {
    int acumulador = 1;
    for (int i = 1; i <= *n; i++) {
        acumulador *= i;
    }
    *n = acumulador;
}

int main() {
    int n;
    
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &n);
    
    if (n >= 0) {
        calcularFatorial(&n);
        printf("Fatorial: %d\n", n);
    } else {
        printf("Numero eh menor que 0\n");
    }
    
    return 0;
}
