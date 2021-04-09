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
struct listaluno {
    int matricula;
    float prova;
    float trabalho;
    float media;
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

ListaAlunoNo *listaAluno_Pega(ListaAluno *pListaAluno, int p) {
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

void listaAluno_Troca(ListaAluno *pListaAluno, int i, int j) {
    ListaAlunoNo *aux1 = listaAluno_Pega(pListaAluno, i);
    ListaAlunoNo *aux2 = listaAluno_Pega(pListaAluno, j);
    ListaAlunoNo *aux3 = malloc(sizeof(ListaAlunoNo));

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

int listaAluno_ComparaMaior(ListaAlunoNo *x, ListaAlunoNo *y) {
    if (x->media > y->media) {
        return 1;
    } else {
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

void listaAluno_InsertionSort(ListaAluno *pListaAluno) {
    int sizeVector = listaAluno_Tamanho(pListaAluno);
    ListaAlunoNo *aux = pListaAluno->primeiro;
    //olacando listaAluno e atribuindo os valores da fila;
    ListaLuno *lista = malloc(sizeVector * sizeof(ListaLuno));
    for (int i = 0; i < sizeVector; ++i) {
        lista[i].matricula = aux->matricula;
        lista[i].prova = aux->prova;
        lista[i].trabalho = aux->trabalho;
        lista[i].media = aux->media;
        aux = aux->proximo;
    }

    int j;
    for (int i = 1; i <= sizeVector - 1; i++) {
        ListaLuno aux = lista[i];
        j = i - 1;
        while (j >= 0 && aux.media < lista[j].media) {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = aux;
    }

    for (int i = 0; i < sizeVector; ++i) {
        printf("%d  %f", lista[i].matricula, lista[i].media);
        printf("\n");
    }
}                                   //INICIO VETOR ESQUERDA E INICIO VETOR A DIREITA
void mergeSort(ListaLuno *aluno, int iVE, int iVD) {
    //meio vetor
    int mV;
    if (iVE < iVD) {
        mV = (iVE + iVD) / 2;
        mergeSort(aluno, iVE, mV);
        mergeSort(aluno, mV + 1, iVD);
        merge(aluno, iVE, mV, iVD);
    }

}

void merge(ListaLuno *aluno, int iVE, int mV, int iVD) {
    int i, j;
    //tamanho vetor a esquerda e tamanho do vetor a direita
    int tVE = (mV - iVE + 1);
    int tVD = (iVD - mV);
    //vetor a esquerda e vetor a direita
    ListaLuno *vE = malloc(tVE * sizeof(ListaLuno));
    ListaLuno *vD = malloc(tVD * sizeof(ListaLuno));
    for (i = 0; i < tVE; i++) {
        vE[i] = aluno[i + iVE];
    }
    for (j = 0; j < tVD; j++) {
        vD[j] = aluno[mV + j + 1];
    }
    i = 0;
    j = 0;
    for (int k = 0; k <= iVD; k++) {
        if (i == tVE) {
            aluno[k] = vD[j++];
        } else if (j == tVD) {
            aluno[k] = vE[i++];
        } else if (vE[i].media >= vD[j].media) {
            aluno[k] = vE[i++];
        } else {
            aluno[k] = vD[j++];
        }
    }
    free(vE);
    free(vD);
}
void converter(ListaAluno *listaAluno,ListaLuno *aluno){
    //convertendo lista encadeada para lista de struckt
    int sizeVector = listaAluno_Tamanho(listaAluno);
    ListaAlunoNo *aux = listaAluno->primeiro;

    for (int i = 0; i < sizeVector; i++) {
        aluno[i].matricula = aux->matricula;
        aluno[i].prova = aux->prova;
        aluno[i].trabalho = aux->trabalho;
        aluno[i].media = aux->media;
        aux = aux->proximo;
    }
}
void callMerge(ListaAluno *listaAluno){
    int size = listaAluno_Tamanho(listaAluno);
    ListaLuno *aluno = malloc(size * sizeof(ListaLuno));
    converter(listaAluno,aluno);
    mergeSort(aluno, 0, (size -1));
    for (int i = 0; i < size; ++i) {
        printf("%d %f\n", aluno[i].matricula, aluno[i].media);
        printf("\n");
    }
    free(aluno);
}
