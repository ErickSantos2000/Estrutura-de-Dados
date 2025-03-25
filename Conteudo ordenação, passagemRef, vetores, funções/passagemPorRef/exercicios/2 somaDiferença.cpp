#include <iostream>
#include <string>
using namespace std;
//Crie uma função chamada calcular que receba dois números inteiros por referência. A função deve calcular a soma e a diferença dos números e armazená-los nos próprios parâmetros. No programa principal, leia dois números e exiba os resultados após chamar a função.


void calcula(int & a, int & b){

	int soma = a + b;
	int diferenca;

	if(a <= b){
	b = b - a;
	diferenca = b;
	}
	else{
	b = a - b;
	diferenca = b;
	}
	a = soma;
	b = diferenca;
	
}

int main(){
	int a;
	int b;
	cout << "digite valor de a: ";
	cin >> a;
	cout << "digite valor de b: ";
	cin >> b;
	
	calcula(a, b);
	
	cout << a << endl;
	cout << b << endl;
}
