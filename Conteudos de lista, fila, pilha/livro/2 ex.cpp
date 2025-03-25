#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct no {
    int valor;
    struct no* prox;
    
} No;

void push(No ** lista, int numero){
	No * novo = (No*)malloc(sizeof(No));
	
	if(novo == NULL){
		cout << "Erro ao alocar memoria.";
		return;
	}
	
	novo->valor = numero; // definindo o valor do no
	novo->prox = *lista; // uma conexão entre o novo e o atual no que esta no inicio da lista
	*lista = novo;
	}

void pop(No ** lista){
	
	No * aux = *lista;
    *lista = aux->prox;
    free(aux); // definindo o valor do no

	}

void concatenaPilha(No ** p1, No ** p2){

    No * aux = NULL;

    No * temp = *p2;
    while(temp != NULL){
        push(&aux, temp->valor);
        temp = temp->prox;
        
    }

    while(aux != NULL){
        push(p1, aux->valor);
        aux = aux->prox;
        
    }

    while (*p2 != NULL){
        pop(p2);
    }

}


void imprimir(No *fila) {
    while (fila != NULL) {
        cout << fila->valor<< "\n";
        fila = fila->prox;
    }
    cout << endl;
}
int main() {
    No* lista1 =(No*)malloc(sizeof(No));
    No* lista2 =(No*)malloc(sizeof(No));
    lista1 = NULL;
    lista2 = NULL;

    // Adiciona elementos na lista
    push(&lista1, 10);
    push(&lista1, 20);
    push(&lista1, 30);

    push(&lista2, 40);
    push(&lista2, 50);
    push(&lista2, 60);
   
    concatenaPilha(&lista1, &lista2);

    printf("Lista 1 \n");
    imprimir(lista1);

    printf("Lista 2 \n");
    imprimir(lista2);


    return 0;
}