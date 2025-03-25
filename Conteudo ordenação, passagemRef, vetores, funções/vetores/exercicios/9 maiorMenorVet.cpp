#include <iostream>
using namespace std;
// Faça um programa que leia 8 números inteiros e os armazene em um vetor. 
// Após isso, determine o maior e o menor número armazenados no vetor e exiba-os

int main() {
    int vetor[8];
    
    int maior;
    int menor;
 
    cout << "Informe 8 numeros inteiros:\n";
    for(int i = 0; i < 8; i++){
    cin >> vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];

    for(int i = 0; i < 8; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
   for(int i = 0; i < 8; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    cout << "maior: " << maior << "\nmenor: " << menor;
    return 0;
}