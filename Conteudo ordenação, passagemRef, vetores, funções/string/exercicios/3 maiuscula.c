#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[200];
    char grande[200];
    char pequeno[200];
    
    printf("Digite a primeira string: ");
    fgets(texto, sizeof(texto), stdin);
    
    texto[strcspn(texto, "\n")] = 0;
    
    for(int i = 0; texto[i] != '\0'; i++) {
        grande[i] = toupper(texto[i]);
    }
    
    for(int i = 0; texto[i] != '\0'; i++) {
        pequeno[i] = tolower(texto[i]);
    }
    
    printf("%s\n", grande);
    printf("%s\n", pequeno);
    
    return 0;
}
