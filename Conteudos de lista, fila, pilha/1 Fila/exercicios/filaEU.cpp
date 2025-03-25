#include <iostream>
#include <stdlib.h>
#include <stdio.h>

typedef struct no{
    int data;
    struct no *prox;
}No;

void addFila(No ** fila, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
        // faz com que saia da função
        return;
    }

    novo->data = numero;
    novo->prox = NULL;

    if(*fila == NULL){
        *fila = novo;
        // inicio->fila->novo
    }

    else{
        No* aux = *fila;

        while (aux->prox != NULL){
            aux = aux->prox; 
        }
        aux->prox = novo;
    }

}

void removerFila(No ** fila){

    if(*fila == NULL){
        printf("Lista vazia.");
    }

    else{
        No * removido = *fila;
        *fila = removido->prox;
        free(removido);
    }
}

void imprimirFila(No * fila){

    while(fila != NULL){
        printf("%d ", fila->data);
        fila = fila->prox;
    }
    printf("\n");

}

int main() {
    // fila inicia com NULL indicando que ela esta vazia
    No * fila = NULL;    

    addFila(&fila, 10);
    addFila(&fila, 20);

    /* 
    - Comentário correto: O &fila acessa o endereço da própria lista (fila). A função removerFila usa esse endereço para modificar o ponteiro fila no main(), removendo o primeiro elemento da fila.
    - Explicação: O &fila passa o endereço da fila, permitindo que a função removerFila altere diretamente o ponteiro que aponta para o início da fila.
    */
    removerFila(&fila); // aqui com o & esta acessando endereço de memoria da fila em si, o seus elementos de fatos sao acessado dentro da função
   
    /*
    - Comentário correto: O fila é o endereço do primeiro elemento da fila. O imprimirFila irá acessar os valores dos nós da lista e imprimir cada elemento.
    - Explicação: O fila é o ponteiro para o início da lista, e a função imprimirFila irá percorrer o endereço até encontrar NULL e imprimir os valores dos elementos.
    */
    imprimirFila(fila); // aqui esta passando o endereço de memoria do novo elemento para acessar o seu valor diretamente pela chamada

    return 0;
}
   
