#include <iostream>
using namespace std;
// Preenchimento e Soma de Elementos
// Crie um vetor de inteiros com tamanho 5. 
// Faça o usuário preencher todos os elementos e, em seguida, exiba a soma de todos os elementos do vetor.

int main() {

    int vetor[5];
    int acumula = 0;
    cout << "prencha com 5 numeros inteiros:\n";
    for (int i = 0; i < 5; i++){
        cin >> vetor[i];
        acumula = acumula + vetor[i]; 
    }
    cout << acumula;
    return 0;
}