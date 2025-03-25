#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct no {
    int valor;
    struct no* prox;
} No;

typedef struct lista {
    int valor;
    struct no * frente;
    struct no * fim;
} Lista;



void addListaFi(Lista * lista, int numero){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        cout << "Erro ao alocar memoria.";
        return;
    }

    novo->valor = numero;
    novo->prox = NULL;

    if(lista->fim == NULL){
        lista->fim = novo;
        lista->frente = novo;
    }
    else{
        lista->fim->prox = novo;
        lista->fim = novo;
    }
    
}

void imprimir(Lista * lista) {
    printf("Lista:\n");
    No * no = lista->frente;
    while (no) {
        printf("%d ", no->valor);
        no = no->prox;
    }
    printf("\n");
}

int main() {
    Lista * fila = (Lista*)malloc(sizeof(Lista));  
    fila->fim = NULL;
    fila->frente = NULL;  

    addListaFi(fila, 10);  
    addListaFi(fila, 20); 
    addListaFi(fila, 30); 
    imprimir(fila);  

    return 0;
}



