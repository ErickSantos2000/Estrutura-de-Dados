
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
    }
    
    else{
        while(primeiro->prox != NULL){
            primeiro = primeiro->prox;
        }
    }
    
    //add um novo elemento
    primeiro->prox = (CELULA *) malloc(sizeof(CELULA));
    primeiro->prox->conteudo = numero;
    primeiro->prox->prox = NULL;
}

CELULA * buscaElemento(CELULA * primeiro, int numeroABuscar){
   
}

int main(){
    //CELULA elemento1;
    CELULA * elemento1 = (CELULA *) malloc(sizeof(CELULA));
    elemento1->conteudo = 10;
    elemento1->prox = NULL;
  
    //como chamar a funcao
    addNovoElemento(elemento1,20);
    addNovoElemento(elemento1,30);
    addNovoElemento(elemento1,40);
    addNovoElemento(elemento1,50);
    addNovoElemento(elemento1,51);
    addNovoElemento(elemento1,52);
    addNovoElemento(elemento1,53);
    imprimeLista(elemento1);
}
