#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct no {
    int valor;
    struct no *esquerda;
    struct no *direito;
} No;

void addDireita(No *no, int valor);

No *criarRAIZ() {
    No *ptrRaiz = (No *)malloc(sizeof(No));
    printf("Informe o valor da raiz: \n");
    scanf("%d", &ptrRaiz->valor);

    ptrRaiz->esquerda = NULL;
    ptrRaiz->direito = NULL;

    return ptrRaiz;
}

No *criarNO() {
    No *ptrNovoNo = (No *)malloc(sizeof(No));
    printf("Informe um numero\n");
    scanf("%d", &ptrNovoNo->valor);

    ptrNovoNo->esquerda = NULL;
    ptrNovoNo->direito = NULL;

    return ptrNovoNo;
}

void addEsquerda(No *no, int valor) {
    if (no->esquerda == NULL) {
        No *novo = (No *)malloc(sizeof(No));
        novo->esquerda = NULL;
        novo->direito = NULL;
        novo->valor = valor;
        no->esquerda = novo;
    } else {
        if (valor < no->esquerda->valor) {
            addEsquerda(no->esquerda, valor);
        } else {
            addDireita(no->esquerda, valor);
        }
    }
}

void addDireita(No *no, int valor) {
    if (no->direito == NULL) {
        No *novo = (No *)malloc(sizeof(No));
        novo->valor = valor;
        novo->esquerda = NULL;
        novo->direito = NULL;
        no->direito = novo;
    } else {
        if (valor < no->direito->valor) {
            addEsquerda(no->direito, valor);
        } else {
            addDireita(no->direito, valor);
        }
    }
}

void inserir(No **raiz) {
    if (*raiz == NULL) {
        No *novo = criarNO();
        *raiz = novo;
    } else {
        int valor;
        printf("Informe valor\n");
        scanf("%d", &valor);
        if ((*raiz)->valor > valor) {
            addEsquerda(*raiz, valor);
        } else {
            addDireita(*raiz, valor);
        }
    }
}

void imprimirArvore(No *raiz) {
    if (raiz != NULL) {
        imprimirArvore(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirArvore(raiz->direito);
    }
}

void imprimirPreOrder(No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        imprimirPreOrder(raiz->esquerda);
        imprimirPreOrder(raiz->direito);
    }
}

void imprimirInOrder(No *raiz) {
    if (raiz != NULL) {
        imprimirInOrder(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirInOrder(raiz->direito);
    }
}

void imprimirPosOrder(No *raiz) {
    if (raiz != NULL) {
        imprimirPosOrder(raiz->esquerda);
        imprimirPosOrder(raiz->direito);
        printf("%d ", raiz->valor);
    }
}

No *buscaNaArvore(int numero, No *ptrUmNo) {
    if (ptrUmNo != NULL) {
        if (numero == ptrUmNo->valor) {
            return ptrUmNo;
        } else if (numero < ptrUmNo->valor) {
            return buscaNaArvore(numero, ptrUmNo->esquerda);
        } else {
            return buscaNaArvore(numero, ptrUmNo->direito);
        }
    }
    return NULL;
}

void exibiBusca(No *arvore) {
    int busca;
    printf("\nValor para busca: ");
    scanf("%d", &busca);
    
    No *elemento = buscaNaArvore(busca, arvore);
    
    if (elemento == NULL) {
        printf("Valor nao encontrado\n");
    } else {
        printf("\nValor %d encontrado\n", elemento->valor);
    }
}

int main() {
    No *arvore = criarRAIZ();
    inserir(&arvore);
    inserir(&arvore);
    inserir(&arvore);
    
    imprimirInOrder(arvore);
    printf("\n");
    
    exibiBusca(arvore);
    
    return 0;
}