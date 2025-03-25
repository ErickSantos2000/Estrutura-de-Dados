#include <iostream>
using namespace std;
/* 
Crie um programa que leia 10 números inteiros e os armazene em um vetor. 
Em seguida, leia um número e conte quantas vezes ele aparece no vetor.
*/

int main () {
	int n;
	int vetor[10];
	int cont = 0;

	cout << "informe 10 números inteiros:\n";

	for(int i = 0; i < 10; i++){
		cin >> vetor[i];
	}
	
	cout << "informe o numero que deseja, para saber quantas vezes ele aparece: ";
    cin >> n;
	for(int i = 0; i < 10; i++){
		if(n == vetor[i]){

			cont++;
		}
	}
	
	cout << "o numero informado aparece " << cont << " vezes.";
	return 0;
} 
