
#include <iostream>

#include <string>
using namespace std;

/*
4)Faça um programa que leia o seu nome
completo e em seguida imprima seu nome na
ordem inversa, e depois imprima a seguinte
frase:
– Meu nome completo e: Fulano de tal

Aqui você deve exibir o nome
que você digitou, o seu!

String
Exercício

• 5)Faça um programa que leia 2 strings
informadas pelo usuário. Verifique se essas
strings são iguais, se forem iguais exiba a
mensagem “Palavras iguais”, caso contrário
exiba a mensagem “Palavras diferentes”.
– Dica: Existe uma função que informa o tamanho
da string! Se as 2 strings tiverem tamanhos
diferentes já sabemos que as palavras são
diferentes! Veja o exemplo a seguir:

*/



void ordenar(int * a, int * b) {
	if(*a < *b){
	cout << *a << endl << *b;
	}
	else{
	cout << *b << endl << *a;
	}
}

int main () {
	int num1, num2;
	
	cout << "primeiro numero: ";
	cin >> num1;
	
	cout << "segundo numero: ";
	cin >> num2;
	
	ordenar(&num1, &num2);
	
	return 0;
}
	


	