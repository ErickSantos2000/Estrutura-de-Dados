#include <stdio.h>

// Função para calcular o quadrado e o cubo de um número
int calcularPotencias(int *n) {
    int quadrado = (*n) * (*n);
    int cubo = quadrado * (*n);
    
    *n = quadrado; // Atualiza n para armazenar o quadrado
    return cubo;   // Retorna o cubo
}

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int retorno = calcularPotencias(&n);

    printf("Quadrado: %d\n", n);
    printf("Cubo: %d\n", retorno);

    return 0;
}
