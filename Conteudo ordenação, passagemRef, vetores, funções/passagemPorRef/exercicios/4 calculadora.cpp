

#include <iostream>
#include <string>
using namespace std;
/*
Escreva uma função calculadora que receba três parâmetros: dois números inteiros (por referência) e um caractere 
indicando a operação a ser realizada (+, -, *, ou /). 
A função deve alterar o primeiro número para conter o resultado da operação e zerar o segundo número..
 */

void calculadora(int * a, int * b, char operador){
	if(operador == '+'){
	*a += *b;	
	}
	else if(operador == '-'){	
	*a -= *b;
	}
	else if(operador == '*'){
	*a *= *b;
	}
	else{
	*a /= *b;
	}
	*b = 0;
}

int main () {
	int a, b;
	char op;

	cout << "digite dois numeros inteiros: ";
	cin >> a >> b >> op;	

	calculadora(&a, &b, op);
	
	cout << "resultado da operacao " << a << " valor b zerado " << b ;
	
	return 0;

} 
	
	
	 