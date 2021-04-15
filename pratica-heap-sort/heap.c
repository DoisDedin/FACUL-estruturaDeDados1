//
// Created by Joao Vitor Cardoso dos Santos Cotta on 15/04/2021.
//

#include "heap.h"

void heapReBuild(No *vector, int left, int rigth, int *comparisons, int *swaps) {
    int i = left;
    int j = i * 2 + 1;

    No aux = vector[i];

    while (j <= rigth) {
        (*comparisons)++;
        if (j < rigth && vector[j].var < vector[j + 1].var) {
            j++;
        }
        if (aux.var >= vector[j].var) {
            break;
        }
        vector[i] = vector[j];
        i = j;
        j = i * 2 + 1;
        (*swaps)++;
    }

    vector[i] = aux;
}

void heapBuild(No *vector, int position, int *comparisons, int *swaps) {
    int left;
    left = (position / 2) - 1;
    while (left >= 0) {
        heapReBuild(vector, left, position - 1, comparisons, swaps);
        left--;
    }
}

void heapOrder(No *vector, int position, int *comparisons, int *swaps) {
    No aux;
    heapBuild(vector, position, comparisons, swaps);
    while (position > 1) {
        aux = vector[position - 1];
        vector[position - 1] = vector[0];
        vector[0] = aux;
        position--;
        heapReBuild(vector, 0, position - 1, comparisons, swaps);
        (*swaps)++;
    }
}