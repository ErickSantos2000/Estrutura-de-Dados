
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

void filaAdd(CELULA * primeiro, int numero){
    if(primeiro == NULL){
        cout<<"\n"<<"LISTA VAZIA\n";
        return;
    }else{
        while(primeiro->prox != NULL){
            primeiro = primeiro->prox;
        }
    }
    //add um novo elemento
    primeiro->prox = (CELULA *) malloc(sizeof(CELULA));
    primeiro->prox->conteudo = numero;
    primeiro->prox->prox = NULL;
}

CELULA * filaRemove(CELULA ** primeiroDaFila){//peek
    if(*primeiroDaFila == NULL){
        cout<<"\n"<<"FILA VAZIA\n";
        return NULL;
    }else{
        //quer dizer que tem pelo menos 2 nós
        CELULA * aux = *primeiroDaFila;
        *primeiroDaFila = aux->prox;
     
        return aux;
    }
}

void filaRemoveDefinitivamente(CELULA ** primeiroDaFila){
    if(*primeiroDaFila == NULL){
        cout<<"\n"<<"FILA VAZIA\n";
        return;
    }else{
        //quer dizer que tem pelo menos 2 nós
        CELULA * aux = *primeiroDaFila;
        *primeiroDaFila = aux->prox;
        free(aux);
    }
}

CELULA * buscaElemento(CELULA * primeiro, int numeroABuscar){
   
}
int main(){
    //CELULA elemento1;
    CELULA * primeiroDaFila = (CELULA *) malloc(sizeof(CELULA));
    primeiroDaFila->conteudo = 10;
    primeiroDaFila->prox = NULL;
    filaAdd(primeiroDaFila,20);
    filaAdd(primeiroDaFila,30);
    filaAdd(primeiroDaFila,40);
    filaAdd(primeiroDaFila,50);
    filaRemoveDefinitivamente(&primeiroDaFila);
    imprimeLista(primeiroDaFila);
    

}
