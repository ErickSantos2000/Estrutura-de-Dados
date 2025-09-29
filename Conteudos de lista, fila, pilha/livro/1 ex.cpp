
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


typedef struct no{
    float conteudo;
    struct no * prox;
}No;

typedef struct pilha{
    struct no * topo;
}Pilha;


Pilha * criaPilha(){
    Pilha * pilha = (Pilha*)malloc(sizeof(Pilha));

    if(pilha == NULL){
        printf("Erro ao alocar memoria");
        return NULL;
    }
    else{
        pilha->topo = NULL;
        return pilha;
    }

}

void pilhaPush(No ** topo, float n){
    No * novo = (No*)malloc(sizeof(No));

    if(novo == NULL){
        printf("Erro ao alocar memoria.");
    }

    novo->conteudo = n;
    novo->prox = *topo;
    *topo = novo;
}

void pilhaPop(No ** topo){
    if(topo == NULL){
        printf("Pilha vazia.");
        return;
    }

    else{
        No * atual = *topo;
        *topo = atual->prox;
        free(atual);
    }
}

void imprimir(No * topo){
    
    while(topo != NULL){
        printf("%f ", topo->conteudo);
        topo = topo->prox;
    }
        
    printf("\n");
}

/*
implemente uma função que receba uma pilha como parametro de e retorne o
valor armazenado em seu topo, restaurando o conteudo da pilha. Essa função 
dever seguir o prototipo:

float topo (Pilha * p);
*/

float topo(Pilha * p){
    if (p->topo == NULL) {
        printf("Erro: Pilha vazia.\n");
        return -1; 
    }

    float topo = p->topo->conteudo;

    return topo;
}

int main() {
    Pilha * pilha = criaPilha();
    
    pilhaPush(&pilha->topo, 10);
    pilhaPush(&pilha->topo, 20);
    pilhaPush(&pilha->topo, 30);

    // imprimir(pilha->topo);

    float resultado = topo(pilha);
    printf("%f ", resultado);

    return 0;
}
   