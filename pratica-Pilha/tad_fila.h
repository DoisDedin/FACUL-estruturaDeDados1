//
// Created by joaov on 02/04/2021.
//

#ifndef FACUL_ESTRUTURADEDADOS1_TAD_FILA_H
#define FACUL_ESTRUTURADEDADOS1_TAD_FILA_H

#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"
//typedef struct lista Lista;
//respectivas funções
/* inicia uma Fila */
Lista *Fila_Inicia();

/* retorna 1 se a Fila for vazia e 0 caso contrario */
int Fila_EhVazia(Lista *pFila);

/* insere o elemento x no topo da Fila */
void Fila_Enfileira(Lista *pFila, int x);

/* retira o elemento do topo da Fila e o retorna pelo parametro pX
* a função retorna 0 caso não haja nenhum elemento na Fila e 1 caso contrario */
int Fila_Desenfileira(Lista *pFila, int *pX);

/* retorna o tamanho da Fila */
int Fila_Tamanho(Lista *pFila);

void Fila_Imprime(Lista *pFIla);

#endif //FACUL_ESTRUTURADEDADOS1_TAD_FILA_H
