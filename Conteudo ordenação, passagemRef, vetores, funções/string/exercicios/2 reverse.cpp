#include <iostream>
#include <string>
using namespace std;

string reverse(string nome){
	string reverse;
	for(int i = nome.size() - 1; i >= 0; i--){
		reverse += nome[i];
	}
	return reverse;
}

int main () {
	string nome;

	cout << "digite seu nome completo:\n";
	getline(cin, nome);
	
	string function = reverse(nome);
	
	cout << "string invertida: " << function;
	
	return 0;
	
}
