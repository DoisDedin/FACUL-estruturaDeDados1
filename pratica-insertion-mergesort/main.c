//
// Created by joaov on 07/04/2021.
//
#include "listaAluno.h"

int main() {

    ListaAluno *listaAluno = listaAluno_Inicia();
     listaAluno_Imprime(listaAluno);
        int decision;
    printf("Escolha o metodo de ordenacao \n Insertion : 0 \nMerge : 1 \n");
    scanf("%d", &decision);
    if (decision == 0) {  //insertionSort
        int size;
        int sizeAlunos;
        int matricula;
        float notaProva;//0.7 valor
        float notaTp;//0.3 valor

        scanf("%d", &size);
        int cont = 0;
        while (size != cont) {
            ListaAluno *listaAluno = listaAluno_Inicia();
            scanf("%d", &sizeAlunos);
            for (int i = 0; i < sizeAlunos; i++) {
                scanf("%d %f %f", &matricula, &notaProva, &notaTp);
                listaAluno_Insere(listaAluno, i, matricula, notaProva, notaTp);
            }
            printf("\n");
            // inserir o metodo de ordenação
            listaAluno_InsertionSort(listaAluno);
          //  listaAluno_InsertionSort(listaAluno);
           // listaAluno_Imprime(listaAluno);
            cont++;
        }


    } else { //mergeSort
        int size;
        int sizeAlunos;
        int matricula;
        float notaProva;//0.7 valor
        float notaTp;//0.3 valor

        scanf("%d", &size);
        int cont = 0;
        while(size != cont){
            ListaAluno *listaAluno =listaAluno_Inicia();
            scanf("%d", &sizeAlunos);
            for(int i = 0 ; i < sizeAlunos; i++){
                scanf("%d %f %f", &matricula, &notaProva, &notaTp);
                listaAluno_Insere(listaAluno,i,matricula,notaProva,notaTp);
            }
            printf("\n");

            //inserir o metodo de ordenação
            callMerge(listaAluno);
            listaAluno_Imprime(listaAluno);
            cont++;
        }
    }


    return 0;
}