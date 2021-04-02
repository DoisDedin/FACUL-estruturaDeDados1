//
// Created by joaov on 02/04/2021.
//
#include "tad_pilha.h"

typedef struct pilhano PilhaNo;

struct pilha {
    PilhaNo *primeiro;
};
struct pilhano {
    int info;
    PilhaNo *proximo;
};

//Inicia uma Pilha
Pilha *Pilha_Inicia() {
    Pilha *pPilha = malloc(sizeof(Pilha));
    pPilha->primeiro = NULL;
    return pPilha;
}

//retorna  1 : Pilha vazia //retorna 0: Pilha nao vazia
int Pilha_EhVazia(Pilha *pPilha) {
    if (pPilha->primeiro == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// insere um elemento em qualquer lugar que eu querer
void Pilha_Push(Pilha *pPilha, int x) {
    PilhaNo *celula =malloc(sizeof (PilhaNo));
    celula->info = x;
    celula->proximo = pPilha->primeiro;
    pPilha->primeiro= celula;

}

//remove um item de qualquer posicão da Pilha
int Pilha_Pop(Pilha *pPilha, int *pX) {
    if (pPilha->primeiro == NULL) {
        return 0;
    } else {
        PilhaNo *celula = pPilha->primeiro;
        pPilha->primeiro = celula->proximo;
        *pX = celula->info;
        free(celula);
        return 1;
    }
}

// retorna o tamanho da Pilha
int Pilha_Tamanho(Pilha *pPilha) {
    int tam = 0;
    PilhaNo *aux = pPilha->primeiro;
    while (aux != NULL) {
        tam++;
        aux = aux->proximo;
    }
    return tam;
}
//