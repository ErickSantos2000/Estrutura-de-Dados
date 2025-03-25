
#include <iostream>
#include <string>
using namespace std;
/* 
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

void comparaString(string n1, string n2){
	bool verifica = false;
	for(int i = 0; i < n1.size(); i++){	
		for(int j = 0; j < n2.size(); j++){
			if(n2 == n1){
			verifica = true;
			}
		}
	}

	if(verifica == true){
	cout << "as strings são iguais ";
	}
	else{	
	cout << "as strings nao sao iguais ";
	}
}

int main () {
	string nome1;
	string nome2;
	
	cout << "digite o nome da primeira string: ";
	cin >> nome1;
	
	cout << "digite o nome da segunda string: ";
	cin >> nome2;
	
	comparaString(nome1, nome2);
		return 0;
	}
	
	

