//
// Created by João Vitor Cardoso dos Santos Cotta on 14/04/2021.
//

#include "trabalho2.h"

int main(){
    int vetor[10] = {1,0,5,8,7,9,3,6,4,2};
    quick(vetor, 0, 9);
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}