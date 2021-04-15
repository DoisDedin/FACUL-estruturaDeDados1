//
// Created by Joao Vitor Cardoso dos Santos Cotta on 15/04/2021.
//

#ifndef FACUL_ESTRUTURADEDADOS1_HEAP_H
#define FACUL_ESTRUTURADEDADOS1_HEAP_H
typedef struct No {
    int var;
} No;

void heapReBuild(No *vector, int left, int right, int *comparisons, int *swaps);

void heapBuild(No *vector, int position, int *comparisons, int *swaps);

void heapOrder(No *vector, int position, int *comparisons, int *swaps);

#endif //FACUL_ESTRUTURADEDADOS1_HEAP_H
