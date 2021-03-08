//
// Created by Iker Yañez Calderon on 8/3/21.
//

#include "funciones.h"

int rellenarArray(Articulo *a){
    int n;
    for (int n=0;n<TAM;n++) {
        printf("Codigo:");
        scanf("%d",&a[n].codigo);
        printf("Nombre:");
        fflush(stdin);
        gets(a[n].nombre);
        printf("Stock:");
        scanf("%d",&a[n].stock);
    }
    return n;
}

void mostrarArray(Articulo *a, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d %s %d\n",a[i].codigo,a[i].nombre,a[i].stock);
    }
}