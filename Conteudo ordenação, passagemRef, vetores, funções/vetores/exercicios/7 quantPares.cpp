// #include <iostream>

// using namespace std;

// int pares (int n, int *vetor){
//     int cont = 0;
//     for(int i = 0; i < n; i++){
//         if(vetor[i] % 2 == 0){
//             cont ++;
//         }
//     }
//     return cont;
// }
// int main() {
//     int n = 5;
//     int vetor[5] = {1,2,3,4,5};
//     int resultado = pares(n, vetor);
//     cout << "Quantidade de numeros pares: " << resultado;
// }

// #include <iostream>

// using namespace std;

// int pares (int n, int *vetor){
//     int cont = 0;
//     for(int i = 0; i < n; i++){
//         if(vetor[i] % 2 == 0){
//             cont ++;
//         }
//     }
//     return cont;
// }
// int main() {
//     int vetor[5];
//     int n = sizeof(vetor) / sizeof(vetor[0]);

//     cout << "elemento: ";
//     for(int i = 0; i < 5; i++){        
//         cin  >> vetor[i];
//     }
//     int resultado = pares(n, vetor);
//     cout << "quantidade de numeros pares: " << resultado;
//     return 0;
// }



#include <iostream>

using namespace std;

int pares (int n, int *vetor){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            cont ++;
        }
    }
    return cont;
}
int main() {
    int n = 5;
    int vetor[5];

    for(int i = 0; i < 5; i++){        
        cout << "elemento: ";
        cin  >> vetor[i];
        
    }
int resultado = pares(n, vetor);
cout << resultado;
}


// #include <stdio.h>

// int pares(int n, int vetor[]) {
//     int contador = 0;
//     for (int i = 0; i < n; i++) {
//         if (vetor[i] % 2 == 0) {
//             contador++;
//         }
//     }
//     return contador;
// }

// int main() {
//     int vetor[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(vetor) / sizeof(vetor[0]);
    
//     int quantidadePares = pares(n, vetor);
//     printf("Quantidade de números pares: %d\n", quantidadePares);
    
//     return 0;
// }
