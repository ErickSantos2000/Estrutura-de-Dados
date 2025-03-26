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

    if (*lista == NULL) {  // Lista vazia
        novo->prox = novo;
        novo->ant = novo;
        *lista = novo;
    } else {
        No *ultimo = (*lista)->ant;  // Último nó
        novo->prox = *lista;
        novo->ant = ultimo;
        ultimo->prox = novo;
        (*lista)->ant = novo;
    }
}

void addInicio(No **lista, int numero) {
    addFinal(lista, numero);  // Insere no final
    *lista = (*lista)->ant;   // Move o ponteiro da cabeça para o novo primeiro nó
}

void removerFinal(No **lista) {
    if (*lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No *ultimo = (*lista)->ant;

    if (*lista == ultimo) {  // Apenas um nó na lista
        free(*lista);
        *lista = NULL;
    } else {
        No *penultimo = ultimo->ant;
        penultimo->prox = *lista;
        (*lista)->ant = penultimo;
        free(ultimo);
    }
}

void removerInicio(No **lista) {
    if (*lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No *ultimo = (*lista)->ant;

    if (*lista == ultimo) {  // Apenas um nó na lista
        free(*lista);
        *lista = NULL;
    } else {
        No *novoInicio = (*lista)->prox;
        novoInicio->ant = ultimo;
        ultimo->prox = novoInicio;
        free(*lista);
        *lista = novoInicio;
    }
}

void imprimir(No *lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    No *atual = lista;
    do {
        printf("%d ", atual->data);
        atual = atual->prox;
    } while (atual != lista);
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
