//
// Created by joaov on 07/04/2021.
//

#include "listaAluno.h"



struct listaaluno {
    ListaAlunoNo *primeiro;
};
struct listaalunono {
    int matricula;
    float prova;
    float trabalho;
    float media;
    ListaAlunoNo *proximo;
};

//Inicia uma ListaAluno
ListaAluno *listaAluno_Inicia() {
    ListaAluno *pListaAluno = malloc(sizeof(ListaAluno));
    pListaAluno->primeiro = NULL;
    return pListaAluno;
}

//retorna  1 : ListaAluno vazia //retorna 0: ListaAluno nao vazia
int listaAluno_EhVazia(ListaAluno *pListaAluno) {
    if (pListaAluno->primeiro == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// insere um elemento em qualquer lugar que eu querer
void listaAluno_Insere(ListaAluno *pListaAluno, int p, int matricula, float x, float y) {
    ListaAlunoNo *newNo = malloc(sizeof(ListaAlunoNo));

    //set values in newNo
    newNo->matricula = matricula;
    newNo->prova = x;
    newNo->trabalho = y;
    newNo->media = (newNo->prova * 0.7) + (newNo->trabalho * 0.3);
    newNo->proximo = NULL;

    if (p == 0 && pListaAluno->primeiro == NULL) {
        pListaAluno->primeiro = newNo;
    } else {
        ListaAlunoNo *aux = pListaAluno->primeiro;
        for (int i = 0; i < p - 1; i++) {
            aux = aux->proximo;
        }
        newNo->proximo = aux->proximo;
        aux->proximo = newNo;
    }
}
ListaAlunoNo * listaAluno_Pega(ListaAluno *pListaAluno, int p){
    ListaAlunoNo *celula;
    if (p == 0) {
        celula = pListaAluno->primeiro;
        return celula;
    } else {
        celula = pListaAluno->primeiro;
        for (int i = 0; i < p - 1; i++) {
            celula = celula->proximo;
            if (celula->proximo == NULL)
                return celula;
        }
        ListaAlunoNo *aux = celula->proximo;
        return aux;
    }
}
void listaAluno_Troca(ListaAluno *pListaAluno,int i , int j){
    ListaAlunoNo *aux1 = listaAluno_Pega(pListaAluno,i);
    ListaAlunoNo *aux2 = listaAluno_Pega(pListaAluno,j);
    ListaAlunoNo *aux3 = malloc(sizeof (ListaAlunoNo));

    aux3->matricula = aux1->matricula;
    aux3->prova = aux1->prova;
    aux3->trabalho = aux1->trabalho;
    aux3->media = aux1->media;

    aux1->matricula = aux2->matricula;
    aux1->prova = aux2->prova;
    aux1->trabalho = aux2->trabalho;
    aux1->media = aux2->media;

    aux2->matricula = aux3->matricula;
    aux2->prova = aux3->prova;
    aux2->trabalho = aux3->trabalho;
    aux2->media = aux3->media;
    free(aux3);
}
int listaAluno_ComparaMaior(ListaAlunoNo *x, ListaAlunoNo *y){
    if (x->media > y->media){
        return 1;
    }
    else{
        return 0;
    }
}
//remove um item de qualquer posicão da ListaA luno
int listaAluno_Remove(ListaAluno *pListaAluno, int p) {
    ListaAlunoNo *celula;
    if (p == 0) {
        celula = pListaAluno->primeiro;
        pListaAluno->primeiro = celula->proximo;
        free(celula);
        return 1;
    } else {
        celula = pListaAluno->primeiro;
        for (int i = 0; i < p - 1; i++) {
            celula = celula->proximo;
            if (celula->proximo == NULL)
                return 0;
        }
        ListaAlunoNo *aux = celula->proximo;
        celula->proximo = celula->proximo->proximo;
        free(aux);

        return 1;
    }
}

// retorna o tamanho da ListaA luno
int listaAluno_Tamanho(ListaAluno *pListaAluno) {
    int tam = 0;
    ListaAlunoNo *aux = pListaAluno->primeiro;
    while (aux != NULL) {
        tam++;
        aux = aux->proximo;
    }
    return tam;
}

//
void listaAluno_Imprime(ListaAluno *pListaAluno) {
    if (!listaAluno_EhVazia(pListaAluno)) {
        ListaAlunoNo *aux = pListaAluno->primeiro;
        while (aux != NULL) {
            printf("%d %f %f %f", aux->matricula, aux->prova, aux->trabalho, aux->media);
            printf("\n");
            aux = aux->proximo;
        }
        printf("\n");
    }
}
void listaAluno_Imprime_OnliMatriculaandMedia(ListaAluno *pListaAluno) {
    if (!listaAluno_EhVazia(pListaAluno)) {
        ListaAlunoNo *aux = pListaAluno->primeiro;
        while (aux != NULL) {
            printf("%d %f", aux->matricula, aux->media);
            aux = aux->proximo;
        }
        printf("\n");
    }

}

void listaAluno_InsertionSort(ListaAluno *pListaAluno){
    ListaAlunoNo *aux = malloc(sizeof(ListaAlunoNo));
    ListaAlunoNo *aux2 = malloc(sizeof (ListaAlunoNo));
    ListaAlunoNo *aux3 = malloc(sizeof (ListaAlunoNo));
    int position;
    int size = listaAluno_Tamanho(pListaAluno);
    for (int i = 1; i < size; i++) {
        aux->proximo = listaAluno_Pega(pListaAluno, i);
        position = i - 1;
        aux2->proximo = listaAluno_Pega(pListaAluno,position);
        while(position >= 0 && aux->proximo->media > aux2->proximo->media){
            aux3->proximo = aux2->proximo->proximo;
            aux2->proximo->proximo = aux2->proximo;
            aux2->proximo = aux3;
            position = position - 1;
        }
        aux2->proximo = listaAluno_Pega(pListaAluno, i+1);
        aux2->proximo = aux->proximo;
    }
}

void listaAluno_MergeSort(ListaAluno *pListaAluno){

}