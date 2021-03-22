//
// Created by Iker Yañez Calderon on 22/3/21.
//

#include "funciones.h"

void pedirDimensiones(int *numF, int *numC){
    do {
        printf("Filas:");
        fflush(stdin);
        scanf("%d",numF);
    } while (*numF<=0);
    do {
        printf("Columnas:");
        fflush(stdin);
        scanf("%d",numC);
    } while (*numC<=0);
}

void rellenarMatriz(int **m,int numF, int numC){
    int i,j;
    for (i = 0; i < numF; i++) {
        for (j = 0; j < numC; j++) {
            printf("Valor %d-%d:",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void visualizarDP(int **m,int numF,int numC){
    int i;
    if (numF==numC){
        for (i = 0; i < numF; i++) {
            printf("%d ",m[i][i]);
        }
    }else
        printf("No es una matriz cuadrada");
}

void visualizarDS(int **m,int numF, int numC){
    int i;
    if (numF==numC){
        for (i = 0; i < numF; i++) {
            printf("%d ",numF-i-1);
        }
    }else
        printf("La matriz no es cuadrada");
}

void mostrarMatriz(int **m,int numF,int numC){
    int i,j;
    for (i = 0; i < numF ;i++) {
        for (j = 0; j < numC; j++) {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
}