#include <iostream>
#include <string>
#include <algorithm> // Para std::transform
#include <cctype>    // Para std::tolower
#include <algorithm> 

using namespace std;

void calcularFatorial(int *n) {
    int acumulador = 1;
    for (int i = 1; i <= *n; i++) {  // Loop correto para calcular o fatorial
        acumulador *= i;
    }
    *n = acumulador;  // Armazenar o resultado no endereço apontado por n
}

int main() {
    int n;
    
    cout << "Digite um numero para saber seu fatorial: ";
    cin >> n;
    
    if (n >= 0) {
        calcularFatorial(&n);
        cout << "Fatorial: " << n << endl;  // Exibe o fatorial
    } else {
        cout << "Numero eh menor que 0" << endl;  // Mensagem de erro
    }
    
    return 0;
}
