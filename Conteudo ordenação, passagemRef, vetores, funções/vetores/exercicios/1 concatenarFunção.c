#include <stdio.h>
#include <stdlib.h>

/*
1) Crie dois vetores, um com tamanho 10 e
outro com tamanho 5. Preencha totalmente
os dois vetores e em seguida crie um terceiro
vetor que seja a concatenação dos dois
primeiros!
*/

int *concatenaVetor(int *v1, int *v2, int n1, int n2){
    int *v3 = (int*)malloc((n1 + n2) * sizeof(int));

    if (v3 == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL; 
    }

    for(int i = 0; i < n1; i++){
        v3[i] = v1[i];
    }

    for(int i = 0; i < n2; i++){
        v3[i + n1] = v2[i];
    }

    return v3;
}

int main() {
    int v1[] = {1,2,3,4,5};
    int v2[] = {6,7,8,9,10,11,12,13,14,15};
    int n1 = sizeof(v1) / sizeof(int); 
    int n2 = sizeof(v2) / sizeof(int); 
 
    int *resultado = concatenaVetor(v1, v2, n1, n2);

    for(int i = 0; i < (n1 + n2); i++){
        printf("%d ", resultado[i]);
    }

    free(resultado);  // Libera a memória alocada para o vetor concatenado

    return 0;
}
