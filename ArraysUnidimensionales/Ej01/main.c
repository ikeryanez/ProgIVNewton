/*
 * Realizar un programa en el que se le pidan numeros
 * al usuario hasta que inserte un cero y se guarden en
 * un array de tamanyo 20. A continuacion, mostrar la
 * media de los numeros insertados.
 */

#include "funciones.h"

int main(){
    int a[TAM],n;
    float media;
    n = rellenarArray(a);
    media = calcularMedia(a,n);
    printf("Media: %.2f",media);
    return 0;
}
