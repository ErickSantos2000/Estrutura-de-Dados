#include <stdlib.h>
#include <stdio.h>

typedef struct no{
    int data;
    struct no *prox;
}No;

void addFinal(No ** listaSimples, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
        return;
    }

    novo->data = numero;
    novo->prox = NULL;

    if(*listaSimples == NULL){
        *listaSimples = novo;
    } else {
        No* aux = *listaSimples;
        while (aux->prox != NULL){
            aux = aux->prox; 
        }
        aux->prox = novo;
    }
}

void addInicio(No ** listaSimples, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
        return;
    } else {
        novo->data = numero;
        novo->prox = *listaSimples;
        *listaSimples = novo;
    }

}

void removerFinal(No ** listaSimples){
    if(*listaSimples == NULL){
        printf("Lista vazia.");
        return;
    }

   if((*listaSimples)->prox == NULL){
        No * temp = *listaSimples;
        *listaSimples = NULL;
        free(temp);
   } else {
        No* aux = *listaSimples;
        while (aux->prox->prox != NULL){
            aux = aux->prox; 
        }

        No * ultimo = aux->prox;
        aux->prox = NULL;
        free(ultimo);
    }
}

void removerInicio(No ** listaSimples){

    if(*listaSimples == NULL){
        printf("Lista vazia.");
    } else {
        No * removido = *listaSimples;
        *listaSimples = removido->prox;
        free(removido);
    }
}

void imprimir(No * listaSimples){
    while(listaSimples != NULL){
        printf("%d ", listaSimples->data);
        listaSimples = listaSimples->prox;
    }
    printf("\n");

}

int main() {
    // fila inicia com NULL indicando que ela esta vazia
    No * listaSimples = NULL;

    addInicio(&listaSimples, 10);
    addInicio(&listaSimples, 20);
    addInicio(&listaSimples, 30);

    removerInicio(&listaSimples);
    removerFinal(&listaSimples); 
   
    imprimir(listaSimples); 

    return 0;
}
   
