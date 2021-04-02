//
// Created by joaov on 02/04/2021.
//

#ifndef FACUL_ESTRUTURADEDADOS1_TAD_PILHA_H
#define FACUL_ESTRUTURADEDADOS1_TAD_PILHA_H


#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

//respectivas funções
/* inicia uma pilha */
Pilha *Pilha_Inicia();

/* retorna 1 se a pilha for vazia e 0 caso contrario */
int Pilha_EhVazia(Pilha *pPilha);

/* insere o elemento x no topo da pilha */
void Pilha_Push(Pilha *pPilha, int x);

/* retira o elemento do topo da pilha e o retorna pelo parametro pX
* a função retorna 0 caso não haja nenhum elemento na pilha e 1 caso contrario */
int Pilha_Pop(Pilha *pPilha, int *pX);

/* retorna o tamanho da pilha */
int Pilha_Tamanho(Pilha *pPilha);

#endif //FACUL_ESTRUTURADEDADOS1_TAD_PILHA_H
