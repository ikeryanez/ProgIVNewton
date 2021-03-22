#include <stdio.h>
#include "funciones.h"

int main() {
    int numF,numC,**m,i,j;
    pedirDimensiones(&numF,&numC);
    m=(int**)malloc(numF* sizeof(int*));
    for(i=0;i<numF;i++){
        m[i]=(int*)malloc(numC* sizeof(int));
    }
    rellenarMatriz(m,numF,numC);
    visualizarDP(m,numF,numC);
    visualizarDS(m,numF,numC);
    mostrarMatriz(m,numF,numC);
    for (i = 0; i < numF; ++i) {
        free(m[i]);
    }
    free(m);
    return 0;
}
