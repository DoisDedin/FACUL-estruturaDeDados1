//
// Created by João Vitor Cardoso dos Santos Cotta on 14/04/2021.
//

#include "trabalho2.h"

int partition(int *vetor, int inicio, int fim) {

   int position = inicio;

    for (int i = inicio; i < fim; i++) {
        if(vetor[i] <= vetor[fim]){
            troca(vetor,position++,i);
        }
    }
    troca(vetor,position,fim);
    return position;
}

void quick(int *vetor, int esquerda, int direita) {
    if (esquerda >= direita) return;
    int pivo = partition(vetor, esquerda, direita);
    quick(vetor, esquerda, pivo - 1);
    quick(vetor, pivo + 1, direita);
}

void troca(int *vetor, int posicao1, int posicao2) {
    int valor = vetor[posicao1];
    vetor[posicao1] = vetor[posicao2];
    vetor[posicao2] = valor;
}