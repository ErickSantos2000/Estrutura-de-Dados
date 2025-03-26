
#include <stdlib.h>
#include <stdio.h>

typedef struct no{
    int data;
    struct no *prox;
}No;

// função para adicionar0 elemento 
void push(No ** pilha, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
        return;
    } else {
        novo->data = numero;
        novo->prox = *pilha;
        *pilha = novo;
    }

}

// função para remover elemento 
void pop(No ** pilha){

    if(*pilha == NULL){
        printf("Lista vazia.");
    } else {
        No * removido = *pilha;
        *pilha = removido->prox;
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
    
    No * pilha = NULL;    
    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    
    pop(&pilha); 
   
    imprimir(pilha); 
    return 0;
}
   
