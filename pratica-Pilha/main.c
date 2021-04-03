//
// Created by joaov on 02/04/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"
#include "tad_pilha.h"
#include "tad_fila.h"

int main() {
    printf("  Test Lista = 1;/n Test Pilha = 2;/n  Test Fila = 3;\n");
    int decision;

    scanf("%d", &decision);
    if (decision == 1) { //lista
        Lista *lista = Lista_Inicia();
        Lista_Insere(lista,0 , 1);
        Lista_Insere(lista,1, 2);
        Lista_Insere(lista,2,4);
        Lista_Insere(lista,3,8);
        Lista_Insere(lista,4,16);
        Lista_Insere(lista,5,32);
        Lista_Imprime(lista);
        int x;
       Lista_Remove(lista, 0,&x);
       printf("%d\n",x);
        Lista_Remove(lista, 0,&x);
        printf("%d\n",x);
        Lista_Remove(lista, 0,&x);
        printf("%d\n",x);
        Lista_Remove(lista, 0,&x);
        printf("%d\n",x);
        Lista_Remove(lista, 0,&x);
        printf("%d\n",x);
        Lista_Remove(lista, 0,&x);
        printf("%d\n",x);
        Lista_Imprime(lista);
        free(lista);
    } else if (decision == 2) { //pilha
        Pilha *pilha = Pilha_Inicia();
        Pilha_Push(pilha, 1);
        Pilha_Push(pilha, 2);
        Pilha_Push(pilha, 4);
        Pilha_Push(pilha, 8);
        Pilha_Push(pilha, 16);
        Pilha_Push(pilha, 32);
        Pilha_Imprime(pilha);
        int w;
        Pilha_Pop(pilha,&w);
        printf("%d\n",w);
        Pilha_Pop(pilha, &w);
        printf("%d\n",w);
        Pilha_Pop(pilha,&w);
        printf("%d\n",w);
        Pilha_Pop(pilha, &w);
        printf("%d\n",w);
        Pilha_Pop(pilha,&w);
        printf("%d\n",w);
        Pilha_Pop(pilha, &w);
        printf("%d\n",w);
        Pilha_Imprime(pilha);

        free(pilha);
    } else { //fila
        Lista * fila = Fila_Inicia();
        int w;
       Fila_Enfileira(fila,1);
       Fila_Enfileira(fila,2);
        Fila_Enfileira(fila,4);
        Fila_Enfileira(fila,8);
        Fila_Enfileira(fila,16);
        Fila_Enfileira(fila,32);
        Fila_Desenfileira(fila, &w);
        printf("%d\n",w);
        Fila_Desenfileira(fila, &w);
        printf("%d\n",w);
        Fila_Desenfileira(fila, &w);
        printf("%d\n",w);
        Fila_Desenfileira(fila, &w);
        printf("%d\n",w);
        Fila_Desenfileira(fila, &w);
        printf("%d\n",w);
        Fila_Desenfileira(fila, &w);
        printf("%d\n",w);
     Fila_Imprime(fila);
        free(fila);
    }




    return 0;
}