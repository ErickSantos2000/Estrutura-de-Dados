#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
    char vetor1[5] = {'E', 's', 't', 'r', 'u'};
    char vetor2[10] = {'r','a','D','e','D','a','d','o','s',' '};
    char vetor3[15];
    
    memcpy(vetor3, vetor1, sizeof(vetor1));
    memcpy(vetor3 + (sizeof(vetor1)/sizeof(char)), vetor2, sizeof(vetor2));

    int tamanhoReultante = sizeof(vetor3) / sizeof(vetor3[0]);

    int i = 0; 

    for (i = 0; i < tamanhoReultante; i++) {
        cout << vetor3[i] << " ";
    }
    return 0;
}