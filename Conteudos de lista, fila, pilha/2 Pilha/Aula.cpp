
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::getline;
//getline (cin,<NOME_DA_VARIAVEL>);

typedef struct reg{
    int conteudo;
    char prioridade;
    struct reg * prox;
} CELULA;

void imprimeLista(CELULA * primeiro){
    if(primeiro == NULL){
        cout<<"\n"<<"LISTA VAZIA\n";
    }else{
        //se entrou nesse else e pq a lista n e vazia
        while(primeiro != NULL){
            cout<<"\n"<<primeiro->conteudo;
            primeiro = primeiro->prox;
        }
    }
    cout<<"\n";
}






void pilhaPush(CELULA ** topo, int numero){
    if(*topo == NULL){
        cout<<"\n"<<"LISTA VAZIA\n";
        return;
    }else{
        CELULA * aux = (CELULA *) malloc(sizeof(CELULA));
        aux->conteudo = numero;
        aux->prox = *topo;
        *topo = aux;
    }
}

CELULA * pilhaPop(CELULA ** topo){
    if(*topo == NULL){
        cout<<"\n"<<"FILA VAZIA\n";
        return NULL;
    }else{
        //quer dizer que tem pelo menos 2 nós
        CELULA * aux = *topo;
        *topo = aux->prox;
        //free(aux);
        return aux;
    }
}

void pilhaPopDefinitivamente(CELULA ** topo){
    if(*topo == NULL){
        cout<<"\n"<<"FILA VAZIA\n";
        return;
    }else{
        //quer dizer que tem pelo menos 2 nós
        CELULA * aux = *topo;
        *topo = aux->prox;
        free(aux);
    }
}


int main(){

    CELULA * topo = (CELULA *) malloc(sizeof(CELULA));
    topo->conteudo = 10;
    topo->prox = NULL;
    pilhaPush(&topo, 20);
    pilhaPush(&topo, 30);
    pilhaPush(&topo, 40);
    pilhaPopDefinitivamente(&topo);
    CELULA * temp = pilhaPop(&topo);
    cout << "\n" << temp->conteudo;
    temp = pilhaPop(&topo);
    cout << "\n" << temp->conteudo << "\n";
    pilhaPush(&topo, 50);
    pilhaPush(&topo, 60);
    pilhaPush(&topo, 70);
    temp = pilhaPop(&topo);
    temp = pilhaPop(&topo);
    cout << "\n" << temp->conteudo << "\n";
}

