#ifndef tad_lista_h
#define tad_lista_h

#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista ;
//respectivas funções
/* inicia uma lista */
Lista * Lista_Inicia();
/* retorna 1 se a lista for vazia e 0 caso contrario */
int Lista_EhVazia(Lista *pLista);

/* insere o elemento x na posição p da lista */
void Lista_Insere(Lista *pLista, int p, int x);

/* retira o elemento da posição p da lista e o retorna pelo parâmetro pX
* a função retorna 0 caso não haja elemento na posição p da lista e 1 caso contrario */
int Lista_Remove(Lista *pLista, int p, int *pX);

/* retorna o tamanho da lista */
int Lista_Tamanho(Lista *pLista);

void Lista_Imprime(Lista *pLista);
#endif /* tad_list_h */