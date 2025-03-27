#include <iostream>
using namespace std;
// Preenchimento e Soma de Elementos
// Crie um vetor de inteiros com tamanho 5. 
// Faça o usuário preencher todos os elementos e, em seguida, exiba a soma de todos os elementos do vetor.

int main() {

    int vetor[5];
    int acumula = 0;

    printf("Preencha com 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
 
        acumula = acumula + vetor[i]; 
    }

    printf("A soma dos elementos do vetor e: %d\n", acumula);
    return 0;
}
