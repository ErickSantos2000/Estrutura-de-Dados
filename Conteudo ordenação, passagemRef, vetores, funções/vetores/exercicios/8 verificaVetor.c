// #include <iostream>
// using namespace std;

// /*codigo seguindo as boas praticas*/

// void verificaVetor (int n, int * vetor, int tamanho){
//     bool verifica = false;
//     cout << "o numero informado foi encontrado nos indices: " ;
//     // percorre todo vetor, indice a indice
//     for (int i = 0; i < tamanho; i++){
//         // verifica se o numero informado foi encontrado e informa quais indices o valor está presente
//         if (n == vetor[i]){
//             cout << i << " ";
//             verifica = true;
//         }
//     }
//     // verifica se o numero informado não esta presente no vetor em questão
//     if(verifica == false){
//         cout << "elemento nao encontrado.";
//     }
// }
 
// int main() {
//     int vetor[5];
//     // o cálculo sizeof(vetor) / sizeof(vetor[0]) retorna o número de 
//     // elementos no vetor. O valor de sizeof(vetor) é o tamanho total 
//     // em bytes do vetor, e sizeof(vetor[0]) é o tamanho de um único elemento.
//     //  Dividindo os dois valores, obtemos o número de elementos que o vetor pode armazenar
//     int tamanho = sizeof(vetor) / sizeof(vetor[0]);
//     int n;

//     cout << "digite " << tamanho << " numeros inteiros:";
//     for (int i = 0; i < tamanho; i++){
        
//         cin >> vetor[i];
//     }
//     cout << "informe o numero que deseja verificar:";
//     cin >> n;
    
//     verificaVetor(n, vetor, tamanho);
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

// Crie um vetor de inteiros de tamanho 10 e preencha-o com valores informados pelo usuário.
// Em seguida, peça para o usuário digitar um número e verifique se esse número está presente no vetor. 
// Exiba uma mensagem indicando se o número foi encontrado ou não.

void verificaVetor(int n, int *v) {
    bool verifica = false;

    for (int i = 0; i < 10; i++) {
        if (n == v[i]) {
            verifica = true;
            break;
        }
    }
    if (!verifica) {
        printf("Elemento nao encontrado\n");
    } else {
        printf("Elemento encontrado.\n");
    }
}

int main() {
    int vetor[10];
    int n;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Informe o numero que deseja verificar: ");
    scanf("%d", &n);

    verificaVetor(n, vetor); // Passando o vetor correto para a função.
    return 0;
}
