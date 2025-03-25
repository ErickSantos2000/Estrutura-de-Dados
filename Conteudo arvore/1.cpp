#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;
using std::getline;

typedef struct TNO{
    int valor;
    struct TNO * noESQ;
    struct TNO * noDIR;
}NO;

NO * ptrRaiz = NULL;

void criarRAIZ(){
    if(ptrRaiz != NULL){
        cout << "Ja existe um no raiz\n";
    }else{
        ptrRaiz = (NO *) malloc(sizeof(NO));
        ptrRaiz->valor = 100;
        ptrRaiz->noESQ = NULL;
        ptrRaiz->noDIR = NULL;
    }
}

NO * criarNO(){
    NO * ptrNovoNo = (NO *) malloc(sizeof(NO));
    cout << "informe um numero\n";
    cin >> ptrNovoNo->valor;
    ptrNovoNo->noESQ = NULL;
    ptrNovoNo->noDIR = NULL;
    return ptrNovoNo;
}

//USA RECURSIVIDADE
void imprimirArvore(int estrategia){
    if(estrategia == 1){
        preOrder(ptrRaiz);
    }else if(estrategia == 2){
        posOrder(ptrRaiz);
    }else{
        inOrder(ptrRaiz);
    }
}

//para imprimir uma arvore completa é preciso usar uma das estrategias:

//pre-order: começa pela raiz depois toda a sub-arvore a esquerda,
// por fim a sub-arvore a direita
void preOrder(NO * ptrUmNo){
    if(ptrUmNo != NULL){
        //imprime raiz
        cout << "<" << ptrUmNo->valor << ">\n";
        //chama sae
        preOrder(ptrUmNo->noESQ);
        //chama sad
        preOrder(ptrUmNo->noDIR);
    }
}

//in-order: começa imprimindo a sub-arvore a esquerda, depois a raiz e
// finaliza imprimindo a sub-arvore a direita
void inOrder(NO * ptrUmNo){
        if(ptrUmNo != NULL){
        //chama sae
        inOrder(ptrUmNo->noESQ);
        //imprime raiz
        cout << "<" << ptrUmNo->valor << ">\n";
        //chama sad
        inOrder(ptrUmNo->noDIR);
    }
}
//pos-order: começa pela raiz depois toda a sub-arvore a direita,
// por fim a sub-arvore a esquerda
void posOrder(NO * ptrUmNo){
    if(ptrUmNo != NULL){
        //imprime raiz
        cout << "<" << ptrUmNo->valor << ">\n";
        //chama sae
        posOrder(ptrUmNo->noDIR);
        //chama sad
        posOrder(ptrUmNo->noESQ);
    }
}

int main(){
    criarRAIZ();
    ptrRaiz->noESQ = criarNO();
    ptrRaiz->noDIR = criarNO();
    // ate aqui temos 3 nos!

    ptrRaiz->noESQ->noESQ = criarNO();
    ptrRaiz->noESQ->noDIR = criarNO();

    imprimirArvore(1);

}