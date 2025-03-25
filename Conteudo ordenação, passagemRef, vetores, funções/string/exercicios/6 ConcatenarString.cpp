#include <iostream>
#include <string>
using namespace std;
/*
Faça um programa que leia duas 
strings do usuário e as concatene em
uma terceira string. Exiba a string concatenada.
*/

int main() {
string nome1;
string nome2;

cout << "Primeiro nome:";
getline(cin, nome1);

cout << "Segundo nome:";
getline(cin, nome2);

cout << nome1 + " " + nome2;
    return 0;
}