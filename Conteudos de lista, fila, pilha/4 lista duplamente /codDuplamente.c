#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    int data;
    struct no *prox;
    struct no *ant;
} No;

void addFinal(No **lista, int numero) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    novo->data = numero;
    novo->prox = NULL;
    novo->ant = NULL;

    if (*lista == NULL) {
        *lista = novo;
    } else {
        No *aux = *lista;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->ant = aux;
    }
}

void addInicio(No **lista, int numero) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    novo->data = numero;
    novo->prox = *lista;
    novo->ant = NULL;

    if (*lista != NULL) {
        (*lista)->ant = novo;
    }
    *lista = novo;
}

void removerFinal(No **lista) {
    if (*lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    
    No *aux = *lista;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    
    if (aux->ant != NULL) {
        aux->ant->prox = NULL;
    } else {
        *lista = NULL;
    }
    free(aux);
}

void removerInicio(No **lista) {
    if (*lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    
    No *removido = *lista;
    *lista = removido->prox;
    
    if (*lista != NULL) {
        (*lista)->ant = NULL;
    }
    free(removido);
}

void imprimir(No *lista) {
    while (lista != NULL) {
        printf("%d ", lista->data);
        lista = lista->prox;
    }
    printf("\n");
}

int main() {
    No *lista = NULL;

    addInicio(&lista, 10);
    addInicio(&lista, 20);
    addInicio(&lista, 30);

    removerInicio(&lista);
    removerFinal(&lista);
    
    imprimir(lista);
    
    return 0;
}
