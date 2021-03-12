//
// Created by Iker Yañez Calderon on 11/3/21.
//

#ifndef FUNCIONESARRAYSYESTRUCTURAS_FUNCIONES_H
#define FUNCIONESARRAYSYESTRUCTURAS_FUNCIONES_H

#include <stdio.h>

typedef struct{
    char dni[10];
    char nom[20];
    int edad;
}Persona;

Persona pedirDatosPersona();

void mostrarDatosPersona(Persona);

void modificarEdadPersona(Persona *);

int rellenarArray(Persona *, int);

void eliminar(Persona *,int*);

void mostrarArray(Persona *,int);


#endif //FUNCIONESARRAYSYESTRUCTURAS_FUNCIONES_H
