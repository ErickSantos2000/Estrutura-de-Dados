#include <stdio.h>

int main () {
    int vetor1[5];
    int vetor2[5];
    int interseccao[5];
    int cont1 = 0;
    int cont2 = 0;
    int k = 0;
    int verifica;

    printf("Insira 5 elementos do primeiro vetor:\n");
    for(int i = 0; i < 5; i++){
        cont1++;
        printf("%d- ", cont1);
        scanf("%d", &vetor1[i]);
    }

    printf("Insira 5 elementos do segundo vetor:\n");
    for(int i = 0; i < 5; i++){
        cont2++;
        printf("%d- ", cont2);
        scanf("%d", &vetor2[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(vetor1[i] == vetor2[j]){
                verifica = 0;
                for(int l = 0; l < k; l++){
                    if(vetor1[i] == interseccao[l]){
                        verifica = 1;
                        break;
                    }
                }
                if(verifica == 0){
                    interseccao[k++] = vetor1[i];
                }
            }
        }
    }

    printf("Elementos da interseccao: ");
    if(k == 0){
        printf("Nao encontrados.");
    } else {
        for(int i = 0; i < k; i++){
            printf("%d  ", interseccao[i]);
        }
    }
    return 0;
}
