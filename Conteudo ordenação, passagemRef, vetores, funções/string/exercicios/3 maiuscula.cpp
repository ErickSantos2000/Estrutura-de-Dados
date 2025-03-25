#include <iostream>
#include <string>
#include <algorithm> // Para std::transform
#include <cctype>    // Para std::tolower
#include <algorithm> 
using namespace std;

int main() {
    string grande;
    string pequeno;
    string texto;

    
    cout << "Digite a primeira string: ";
    getline(cin, texto);

    grande = texto;
    transform(grande.begin(), grande.end(), grande.begin(),::toupper);
    
    pequeno = texto;
    transform(pequeno.begin(), pequeno.end(), pequeno.begin(),::tolower);
   

    cout << grande << "\n";
    cout << pequeno << "\n";
  
}