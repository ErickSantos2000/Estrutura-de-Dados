#include <iostream>
#include <stdlib.h>

using namespace std;

/*
1) Crie dois vetores, um com tamanho 10 e
outro com tamanho 5. Preencha totalmente
os dois vetores e em seguida crie um terceiro
vetor que seja a concatenação dos dois
primeiros!
*/

int main() {
   char vetor1[5]={'E', 's', 't', 'r', 'u'};
   char vetor2[10]={'r','a','D','e','D','a','d','o','s',' '}; 
   char vetor3[15];
   int i = 0;

    for(i=0; i < 5; i++){
        vetor3[i] = vetor1[i];
    }
    for (i = 0; i < 10; i++){
        vetor3[5 + i] = vetor2[i];
    }
    for (i = 0; i < 15; i++){
        printf("%c ", vetor3[i]);
    }
}