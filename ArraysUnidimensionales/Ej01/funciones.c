//
// Created by Iker Yañez Calderon on 1/3/21.
//
#include "funciones.h"

int rellenarArray(int *a){
    int n = 0;
    do {
        printf("Numero(0 para finalizar): ");
        scanf("%d",&a[n]);
        n++;
    } while (n<TAM && a[n-1]!=0);
    return n-1;
}

float calcularMedia(int *a, int n){
    int suma,i;
    float media;
    suma = 0;
    for (i = 0; i < n; i++) {
        suma += a[i];
    }
    if(n==0)
        media = 0;
    else
        media = (float)suma/n;
    return media;
}
