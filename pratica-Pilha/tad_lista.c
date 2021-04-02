#include "tad_lista.h"

typedef struct listano ListaNo;

struct lista {
    ListaNo *primeiro;
};
struct listano {
    int info;
    ListaNo *proximo;
};

//Inicia uma lista
Lista *Lista_Inicia() {
    Lista *pLista = malloc(sizeof(Lista));
    pLista->primeiro = NULL;
    return pLista;
}

//retorna  1 : lista vazia //retorna 0: lista nao vazia
int Lista_EhVazia(Lista *pLista) {
    if (pLista->primeiro == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// insere um elemento em qualquer lugar que eu querer
void Lista_Insere(Lista *lista, int p, int x) {
    ListaNo *newNo = malloc(sizeof(ListaNo));

    newNo->info = x;
    newNo->proximo = NULL;
    if (p == 0 && lista->primeiro == NULL) {
        lista->primeiro = newNo;
    } else {
        ListaNo *aux = lista->primeiro;
        for (int i = 0; i < p-1; i++) {
            aux = aux->proximo;
        }
        newNo->proximo = aux->proximo;
        aux->proximo = newNo;
    }
}

//remove um item de qualquer posicão da lista
int Lista_Remove(Lista *pLista, int p, int *pX) {
    ListaNo *celula;
    if (p == 0) {
        celula = pLista->primeiro;
        *pX = celula->info;
        pLista->primeiro = celula->proximo;
        free(celula);

        return 1;
    } else {
        celula = pLista->primeiro;
        for (int i = 0; i < p - 1; i++) {
            celula = celula->proximo;
            if (celula->proximo == NULL)
                return 0;
        }
        *pX = celula->proximo->info;
        ListaNo *aux = celula->proximo;
        celula->proximo = celula->proximo->proximo;
        free(aux);

        return 1;
    }
}

// retorna o tamanho da lista
int Lista_Tamanho(Lista *pLista) {
    int tam = 0;
    ListaNo *aux = pLista->primeiro;
    while (aux != NULL) {
        tam++;
        aux = aux->proximo;
    }
    return tam;
}
//
void Lista_Imprime(Lista *pLista)
{
    if (!Lista_EhVazia(pLista)){
        ListaNo* aux = pLista->primeiro;
        while (aux != NULL){
            printf("%d ", aux->info);
            aux = aux->proximo;
        }
        printf("\n");
    }
}