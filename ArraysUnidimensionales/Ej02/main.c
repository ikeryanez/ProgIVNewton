/*
 * Realizar un programa en el que se le piden al usuario 20 numeros
 * y se guarden en un array aquellos que sean pares. A continuacion,
 * mostrar los numeros almacenados en el array.
 */

#include "funciones.h"

int main() {
    int a[TAM],h;
    h = rellenarArray(a);
    mostrarArray(a,h);
    return 0;
}
