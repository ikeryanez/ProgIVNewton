//
// Created by Iker Yañez Calderon on 1/3/21.
//

#include "funciones.h"

int rellenarArray(int *a){
    int i,n=0,num;
    for (i=0;i<TAM;i++) {
        printf("Numero: ");
        scanf("%d",&num);
        if (num%2==0){
            a[n] = num;
            n++;
        }
    }
    return n;
}

void mostrarArray(int *a,int n){
    int i;
    printf("los numeros almacenados son: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}