#include <stdlib.h>
#include <stdio.h>

typedef struct no {
    int data;
    struct no *prox;
} No;

void addFinal(No **lista, int numero) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    novo->data = numero;
    
    if (*lista == NULL) {  // Lista vazia
        novo->prox = novo; // Aponta para si mesmo
        *lista = novo;
    } else {
        No *aux = *lista;
        while (aux->prox != *lista) {  // Percorre até o último nó
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = *lista;  // Mantém a circularidade
    }
}

void addInicio(No **lista, int numero) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memoria.\n");
        return;
    }
    novo->data = numero;
    
    if (*lista == NULL) {  // Lista vazia
        novo->prox = novo;
        *lista = novo;
    } else {
        No *aux = *lista;
        while (aux->prox != *lista) {  // Encontra o último nó
            aux = aux->prox;
        }
        novo->prox = *lista;
        aux->prox = novo;
        *lista = novo;  // Novo nó se torna o primeiro
    }
}

void removerFinal(No **lista) {
    if (*lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No *aux = *lista, *anterior = NULL;

    while (aux->prox != *lista) {  // Percorre até o último nó
        anterior = aux;
        aux = aux->prox;
    }

    if (anterior == NULL) {  // Apenas um nó na lista
        free(*lista);
        *lista = NULL;
    } else {
        anterior->prox = *lista;  // Ajusta o último para apontar ao primeiro
        free(aux);
    }
}

void removerInicio(No **lista) {
    if (*lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No *ultimo = *lista;

    while (ultimo->prox != *lista) {  // Encontra o último nó
        ultimo = ultimo->prox;
    }

    No *removido = *lista;
    if (removido->prox == removido) {  // Apenas um nó na lista
        free(removido);
        *lista = NULL;
    } else {
        *lista = removido->prox;
        ultimo->prox = *lista;  // Mantém a circularidade
        free(removido);
    }
}

void imprimir(No *lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No *aux = lista;
    do {
        printf("%d ", aux->data);
        aux = aux->prox;
    } while (aux != lista);
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
