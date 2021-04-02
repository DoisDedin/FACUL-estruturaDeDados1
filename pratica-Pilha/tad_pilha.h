//
// Created by joaov on 02/04/2021.
//

#ifndef FACUL_ESTRUTURADEDADOS1_TAD_PILHA_H
#define FACUL_ESTRUTURADEDADOS1_TAD_PILHA_H

typedef struct pilha Pilha;

//respectivas funções
/* inicia uma pilha */
void Pilha_Inicia(Pilha *pPilha);

/* retorna 1 se a pilha for vazia e 0 caso contrario */
int Pilha_EhVazia(Pilha *pPilha);

/* insere o elemento x no topo da pilha */
void Pilha_Push(Pilha *pPilha, Item x);

/* retira o elemento do topo da pilha e o retorna pelo parametro pX
* a função retorna 0 caso não haja nenhum elemento na pilha e 1 caso contrario */
int Pilha_Pop(Pilha *pPilha, Item *pX);

/* retorna o tamanho da pilha */
int Pilha_Tamanho(Pilha *pPilha);

#endif //FACUL_ESTRUTURADEDADOS1_TAD_PILHA_H
