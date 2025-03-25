#include <stdio.h>
#include <stdlib.h>

typedef struct reg{
    int conteudo;
    struct reg * prox;
}CELULA;



void pilhaPush(CELULA ** topo, int numero){
    CELULA *  novo = (CELULA*)malloc(sizeof(CELULA));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
        return;
    }

    novo -> conteudo = numero;
    novo -> prox = *topo;
    *topo = novo;
   
}

void pilhaPop(CELULA ** topo){
    if(topo == NULL){
        printf("LISTA VAZIA.");
        }
    
    else{
        CELULA * removido = *topo;
        *topo = removido->prox;

        free(removido);
    }
    
}

void imprimiLista(CELULA *lista){
    if(lista == NULL){
        printf("Lista vazia.");
        return;
    }

    CELULA *atual = lista; 

    while (atual != NULL){
        printf(" %d -> ", atual->conteudo);
        atual = atual->prox;
    }
    printf("NULL\n");
    
}

int main(){
    CELULA * topo = NULL;

    pilhaPush(&topo, 10);
    pilhaPush(&topo, 20);
    pilhaPush(&topo, 30);
    pilhaPop(&topo);

    imprimiLista(topo);

    if(topo != NULL) {
        free(topo);
    }

    return 0;
} 
