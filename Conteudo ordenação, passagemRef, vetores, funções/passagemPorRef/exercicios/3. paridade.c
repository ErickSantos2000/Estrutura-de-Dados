

#include <iostream>
#include <string>
using namespace std;
/*
// Escreva uma função chamada verificarParidade que receba um número inteiro por referência. 
// Se o número for ímpar, a função deve incrementá-lo para torná-lo par. 
// No programa principal, leia um número, chame a função e mostre o resultado.
 */

void verificaParidade(int & a){
    if(a % 2 != 1){
	a++;
	}
}
int main() {
   	int a;
	
	cout << "informe um valor inteiro ";
	cin >> a;
	
	verificaParidade(a);
	
	cout << a;
	
	return 0;
}
