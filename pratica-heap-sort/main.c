//
// Created by Joao Vitor Cardoso dos Santos Cotta on 15/04/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main() {
    int times;
    int size;
    int count = 0;
    int value;


    printf("N vector to be create: ");
    scanf("%d", &times);

    do {
        int *comparisons = 0;
        int *swaps = 0;
        printf("Size vector: ");
        scanf("%d", &size);
        No *vector = malloc(size * sizeof(No));

        printf("Vector: ");
        for (int i = 0; i < size; ++i) {
            scanf("%d", &value);
            vector[i].var = value;
        }
        heapOrder(vector, size, &comparisons, &swaps);

        for (int j = 0; j < size; ++j) {
            printf("%d ", vector[j].var);
        }
        printf("\n\n");
        printf("vector: %d comparisons: %d swaps: %d", count + 1, comparisons, swaps);

        count++;
        free(vector);
    } while (count < times);

    return 0;
}