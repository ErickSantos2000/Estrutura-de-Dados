#include <iostream>

#include <string>
using namespace std;


// Escreva uma função calcularPotencias que receba um número inteiro por referência e calcule o seu 
// quadrado e cubo. O quadrado deve ser armazenado no parâmetro original, 
// e o cubo deve ser retornado como valor da função.

int calcularPow(int * n){
    int quadrado = 1;
    int cubo = 1;
    
    for (int i = 1; i <= 2; i++){
    quadrado = quadrado * *n;  // Multiplicando repetidamente
        }
    for (int i = 1; i <= 3; i++){
        cubo = cubo * *n;  // Multiplicando repetidamente
        }
    *n = quadrado;
    return cubo;
 
}

int main () {
	int n;

	
	int retorno = calcularPow(&n);
	
	cout << "soma dos quadrados: " << n << endl;
	cout  << "soma dos cubos: " << retorno; 

    return 0;
	
}	