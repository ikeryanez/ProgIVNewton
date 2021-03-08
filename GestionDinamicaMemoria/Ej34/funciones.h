//
// Created by Iker Yañez Calderon on 8/3/21.
//

#ifndef EJ34_FUNCIONES_H
#define EJ34_FUNCIONES_H

#include <stdio.h>
#define TAM 10

typedef struct{
    int codigo;
    char nombre[10];
    int stock;
}Articulo;

int rellenarArray(Articulo *a);

void visualizarArray(Articulo *a, int n);

#endif //EJ34_FUNCIONES_H
