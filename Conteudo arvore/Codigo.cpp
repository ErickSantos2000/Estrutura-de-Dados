#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
using std::string;


typedef struct no{
int valor;
struct no * esquerda;
struct no * direito;
}No;



void addDireita(No* no, int valor);

No * criarRAIZ(){
   
    No * ptrRaiz = (No *) malloc(sizeof(No));
    cout << "Informe o valor da raiz: \n";
    cin >> ptrRaiz->valor;

    ptrRaiz->esquerda = NULL;
    ptrRaiz->direito = NULL;

    return ptrRaiz;
    
}

No * criarNO(){
    No * ptrNovoNo = (No *) malloc(sizeof(No));

    cout << "informe um numero\n";
    cin >> ptrNovoNo->valor;

    ptrNovoNo->esquerda = NULL;
    ptrNovoNo->direito = NULL;
    
    return ptrNovoNo;
}

void addEsquerda(No * no, int valor){
    if(no->esquerda == NULL){
        No * novo = (No *) malloc(sizeof(No));

        novo->esquerda = NULL;
        novo->direito = NULL;

        novo->valor = valor;

        no->esquerda = novo;
    }
    else{
        if(valor < no->esquerda->valor){
            addEsquerda(no->esquerda, valor);
        }
        else{
            addDireita(no->esquerda, valor);
        }
    }
}

void addDireita(No * no,  int valor){
    if(no->direito == NULL){
        No * novo = (No *) malloc(sizeof(No));

        novo->valor = valor;
        novo->esquerda = NULL;
        novo->direito = NULL;

        no->direito = novo;
    }
    else{
        if(valor < no->direito->valor){
            addEsquerda(no->direito, valor);
        }
        else{
            addDireita(no->direito, valor);
        }
    }
}

void inserir(No ** raiz){
    if(*raiz == NULL){
        No * novo = criarNO();

        *raiz = novo;
    }
    else{
        int valor;
        cout << "Informe valor\n";
        cin >> valor;
        if((*raiz)->valor > valor){
            addEsquerda(*raiz, valor);
        }
        else{
            addDireita(*raiz, valor);
        }
    }
}

//USA RECURSIVIDADE
void imprimirArvore(No * raiz){
    if(raiz != NULL){

        imprimirArvore(raiz->esquerda);
        cout << raiz->valor << " ";
        imprimirArvore(raiz->direito);

    }
}

//para imprimir uma arvore completa é preciso usar uma das estrategias:

//pre-order: começa pela raiz depois toda a sub-arvore a esquerda,
// por fim a sub-arvore a direita
void imprimirPreOrder(No * raiz){
    if(raiz != NULL){

        cout << raiz->valor << " ";
        imprimirPreOrder(raiz->esquerda);
        imprimirPreOrder(raiz->direito);
    }
}


//in-order: começa imprimindo a sub-arvore a esquerda, depois a raiz e
// finaliza imprimindo a sub-arvore a direita
void imprimirInOrder(No * raiz){
    if(raiz != NULL){

        imprimirInOrder(raiz->esquerda);
        cout << raiz->valor << " ";
        imprimirInOrder(raiz->direito);

    }
}

//pos-order: começa pela sub-arvore a esquerda depois toda a sub-arvore a direita 
// por fim a raiz
void imprimirPosOrder(No * raiz){
    if(raiz != NULL){

        imprimirPosOrder(raiz->esquerda);
        imprimirPosOrder(raiz->direito);
        cout << raiz->valor << " ";
        
    }
}


No * buscaNaArvore(int numero, No * ptrUmNo){
    if(ptrUmNo != NULL){
            //comparar o numero com a raiz
            if(numero == ptrUmNo->valor){
                return ptrUmNo;
            }else if(numero < ptrUmNo->valor){
                //procurar na sae
                return buscaNaArvore(numero, ptrUmNo->esquerda);
            }else if(numero > ptrUmNo->valor){
                //procurar na sad
                return buscaNaArvore(numero, ptrUmNo->direito);
            }
           
    }
        
    return NULL;
    
}

void exibiBusca(No * arvore){

    int busca;

    cout << "\nValor para busca:";
    cin >> busca;

    No * elemento = buscaNaArvore(busca, arvore);

    if(elemento == NULL){
        cout  << "valor nao encontrado\n";
    }
    else{
        cout << "\nValor " << elemento->valor <<  " encontrado\n";
    }
       
}

int main() {

    No * arvore = criarRAIZ();

    inserir(&arvore);
    inserir(&arvore);
    inserir(&arvore);

    imprimirInOrder(arvore);
    
    exibiBusca(arvore);

    return 0;
}