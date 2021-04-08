//
// Created by joaov on 07/04/2021.
//

#ifndef FACUL_ESTRUTURADEDADOS1_LISTAALUNO_H
#define FACUL_ESTRUTURADEDADOS1_LISTAALUNO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listaaluno ListaAluno;
typedef struct listaalunono ListaAlunoNo;
//respectivas funções
/* inicia uma lista */
ListaAluno *listaAluno_Inicia();

/* retorna 1 se a ListaAluno for vazia e 0 caso contrario */
int listaAluno_EhVazia(ListaAluno *pListaAluno);

/* insere o elemento x na posição p da ListaAluno */
void listaAluno_Insere(ListaAluno *pListaAluno, int p, int matricula, float x, float y);
ListaAlunoNo * listaAluno_Pega(ListaAluno *pListaAluno, int p);
void listaAluno_Troca(ListaAluno *pListaAluno,int i , int j);
int listaAluno_ComparaMaior(ListaAlunoNo *x, ListaAlunoNo *y);
/* retira o elemento da posição p da ListaAluno e o retorna pelo parâmetro pX
* a função retorna 0 caso não haja elemento na posição p da ListaAluno e 1 caso contrario */
int listaAluno_Remove(ListaAluno *pListaAluno, int p);

/* retorna o tamanho da ListaAluno */
int listaAluno_Tamanho(ListaAluno *pListaAluno);

void listaAluno_Imprime(ListaAluno *pListaAluno);

void listaAluno_Imprime_OnliMatriculaandMedia(ListaAluno *pListaAluno);

void listaAluno_InsertionSort(ListaAluno *pListaAluno);
void listaAluno_MergeSort(ListaAluno *pListaAluno);

#endif //FACUL_ESTRUTURADEDADOS1_LISTAALUNO_H
