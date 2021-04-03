//
// Created by joaov on 02/04/2021.
//

#include "tad_lista.h"
#include "tad_fila.h"
typedef struct listano ListaNo;

struct lista {
    ListaNo *primeiro;
};
struct listano {
    int info;
    ListaNo *proximo;

};

//Inicia uma lista
Lista *Fila_Inicia() {
    return Lista_Inicia();
}

//retorna  1 : lista vazia //retorna 0: lista nao vazia
int Fila_EhVazia(Lista *pLista) {
    return Lista_EhVazia(pLista);
}

/* insere o elemento x na fila */
void Fila_Enfileira(Lista *pFila, int x){
    int p = Lista_Tamanho(pFila) ;
    Lista_Insere(pFila, p, x);
}
/* retira o elemento da frente da fila e o retorna pelo parâmetro pX
* a função retorna 0 caso não haja elemento na fila e 1 caso contrário */
int Fila_Desenfileira(Lista *pFila, int *pX){
    return Lista_Remove(pFila,0,pX);
}

// insere um elemento em qualquer lugar que eu querer
void Pilha_Insere(Lista *lista, int p, int x) {

}

// retorna o tamanho da lista
int Fila_Tamanho(Lista *pLista) {
    return Lista_Tamanho(pLista);
}
//
void Fila_Imprime(Lista *pLista){
    Lista_Imprime(pLista);
}

