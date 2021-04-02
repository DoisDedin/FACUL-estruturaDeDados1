//
// Created by joaov on 02/04/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"

int main(){
    printf("hellow worldd\n");
    Lista *lista = Lista_Inicia();

    printf("rOLOU\n");
    Lista_Insere(lista, 0 ,1);
    int x = 0;
    printf("rOLOU\n");
    int w;
    Lista_Remove(lista, 0,&w);
    printf("rOLOU\n");
    return 0;
}