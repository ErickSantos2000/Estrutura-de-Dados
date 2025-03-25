#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct no {
    int valor;
    struct no* prox;
} No;



void addListaFim(No ** lista, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        cout << "Erro ao alocar memoria.";
        return;
    }

    novo->valor = numero;
    novo->prox = NULL;

    if(*lista == NULL){
        *lista = novo;
    }
    else{
        No * atual = *lista;
        while(atual->prox != NULL){
            atual = atual->prox;
        };
        atual->prox = novo;
    }
    
}



void imprimir(No * no) {
    printf("Lista:\n");
    
    while (no) {
        printf("%d ", no->valor);
        no = no->prox;
    }
    printf("\n");
}

int main() {
    No* lista = NULL;
    
    addListaFim(&lista, 10);  
    addListaFim(&lista, 20); 
    addListaFim(&lista, 30);
    imprimir(lista);  

    return 0;
}



