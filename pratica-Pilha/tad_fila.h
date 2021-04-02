//
// Created by joaov on 02/04/2021.
//

#ifndef FACUL_ESTRUTURADEDADOS1_TAD_FILA_H
#define FACUL_ESTRUTURADEDADOS1_TAD_FILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct fila Fila;
//respectivas funções
/* inicia uma Fila */
Fila *Fila_Inicia();

/* retorna 1 se a Fila for vazia e 0 caso contrario */
int Fila_EhVazia(Fila *pFila);

/* insere o elemento x no topo da Fila */
void Fila_Push(Fila *pFila, int x);

/* retira o elemento do topo da Fila e o retorna pelo parametro pX
* a função retorna 0 caso não haja nenhum elemento na Fila e 1 caso contrario */
int Fila_Pop(Fila *pFila, int *pX);

/* retorna o tamanho da Fila */
int Fila_Tamanho(Fila *pFila);

#endif //FACUL_ESTRUTURADEDADOS1_TAD_FILA_H
