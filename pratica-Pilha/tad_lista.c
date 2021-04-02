#include "tad_lista.h"

typedef struct listano ListaNo;

struct lista {
    ListaNo * primeiro;
};
struct listano {
    int info;
    ListaNo * proximo;
};

//Inicia uma lista
Lista * Lista_Inicia() {
    Lista * pLista = malloc(sizeof(Lista));
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
    ListaNo *no = malloc(sizeof(ListaNo));

    no->info = x;
    if (p == 0) {
        ListaNo *w =no->proximo;
        no->proximo = lista->primeiro;
        lista->primeiro = no;
    } else {
        no->proximo = NULL;
        ListaNo *no2 = lista->primeiro;
        for (int i = 0; i < p; i++) {
            no2 = no2->proximo;
        }
        if (no2->proximo == NULL) {
            lista->primeiro = no;

        } else {
            no2->proximo = no;

        }
    }
}

//remove um item de qualquer posicão da lista
int Lista_Remove(Lista *lista, int p, int *x) {
    if (p == 0) {
        *x = lista->primeiro->info;
        ListaNo *celula = lista->primeiro;
        lista->primeiro = celula->proximo;

        free(celula);
        return 1;
    } else {
        if (Lista_Tamanho(lista) > 0) {
            ListaNo *aux = lista->primeiro;
            *x = aux->info;
            lista->primeiro = aux->proximo;
            free(aux);
            return 1;
        }

    }
    return 0;
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