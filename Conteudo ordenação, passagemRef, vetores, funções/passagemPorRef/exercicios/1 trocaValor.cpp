#include <iostream>
#include <string>
using namespace std;
/*
Escreva uma função chamada trocar que receba dois números inteiros como parâmetros 
(passados por referência) e troque os valores entre eles. No programa principal, leia dois números,
 chame a função e mostre os valores após a troca.
 */

void trocaValores(int & a, int & b){
int aux;
aux = a;
a = b;
b = aux;
}
int main() {
   	int a = 10;
	int b = 20; 

    cout << a << endl;
	cout << b << endl;
	
	trocaValores(a, b);

	cout << a << endl;
	cout << b << endl;
	
	return 0;
}
