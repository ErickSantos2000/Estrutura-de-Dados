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
    struct reg * prox;
    struct reg * ant;
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

void addNovoElemento(CELULA * primeiro, int numero){
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
    primeiro->prox->ant = primeiro;
}

CELULA * buscaElemento(CELULA * primeiro, int numeroABuscar){
    while(primeiro != NULL){
        if(primeiro->conteudo == numeroABuscar){
            return primeiro;
        }
        primeiro = primeiro->prox;
    }
    return NULL;
}

int main(){
    //CELULA elemento1;
    CELULA * elemento1 = (CELULA *) malloc(sizeof(CELULA));
    elemento1->conteudo = 10;
    elemento1->prox = NULL;
    elemento1->ant = NULL;

    addNovoElemento(elemento1,20);
    addNovoElemento(elemento1,30);
    addNovoElemento(elemento1,40);
    addNovoElemento(elemento1,50);
    addNovoElemento(elemento1,51);
    addNovoElemento(elemento1,52);
    addNovoElemento(elemento1,53);
    imprimeLista(elemento1);
    CELULA * resultado = buscaElemento(elemento1, 40);

    if(resultado){
        cout << endl << "Elemento encontrado:" <<resultado->conteudo; 
    }
    else{
        cout << "Elemento nao encontrado.";
    }

    return 0;
}
