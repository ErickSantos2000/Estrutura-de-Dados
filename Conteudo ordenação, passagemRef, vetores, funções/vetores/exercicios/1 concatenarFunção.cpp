#include <iostream>
#include <stdlib.h>

using namespace std;

/*
1) Crie dois vetores, um com tamanho 10 e
outro com tamanho 5. Preencha totalmente
os dois vetores e em seguida crie um terceiro
vetor que seja a concatenação dos dois
primeiros!
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdbool.h>

using namespace std;

int *concatenaVetor(int *v1, int *v2, int n1, int n2){
    int *v3 = (int*)malloc((n1 + n2) * sizeof(int));

    if (v3 == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL; 
    }

    for(int i = 0; i < 5; i++){
        v3[i] = v1[i];
    }

    for(int i = 0; i < 10; i++){
        v3[i + 5] = v2[i];
    }

    return v3;

}

int main() {
    int v1[] = {1,2,3,4,5};
    int v2[] = {6,7,8,9,10,11,12,13,14,15};
    int n1 = sizeof(v1) / sizeof(int); 
    int n2 = sizeof(v2) / sizeof(int); 
    /*             ERRO:
    aqui ele tenta acessar o valor do ponteiro e não a referencia do ponteiro
    para concertar basta tirar o * para retirar o desreferenciamento
    */ 
    // int *resultado = *concatenaVetor(v1, v2);
    
    // jeito certo
    int *resultado = concatenaVetor(v1, v2, n1, n2);

    for(int i = 0; i < (n1 + n2); i++){
        cout << resultado[i] << " ";
    }

    return 0;
}