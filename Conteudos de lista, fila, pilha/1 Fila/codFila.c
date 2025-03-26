
#include <stdlib.h>
#include <stdio.h>

typedef struct no{
    int data;
    struct no *prox;
}No;

void push(No ** fila, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
        return;
    }

    novo->data = numero;
    novo->prox = NULL;

    if(*fila == NULL){
        *fila = novo;
    } else {
        No* aux = *fila;
        while (aux->prox != NULL){
            aux = aux->prox; 
        }
        aux->prox = novo;
    }
}

void pop(No ** fila){

    if(*fila == NULL){
        printf("Lista vazia.");
    } else {
        No * removido = *fila;
        *fila = removido->prox;
        free(removido);
    }
}

void imprimir(No * fila){
    while(fila != NULL){
        printf("%d ", fila->data);
        fila = fila->prox;
    }
    printf("\n");

}

int main() {
    // fila inicia com NULL indicando que ela esta vazia
    No * fila = NULL;    
    push(&fila, 10);
    push(&fila, 20);
    push(&fila, 30);

    
    pop(&fila); 
   
    imprimir(fila); 

    return 0;
}
   
