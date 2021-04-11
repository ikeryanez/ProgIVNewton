//
// Created by Iker Yañez Calderon on 25/3/21.
//

#ifndef EJEMPLOEXAMEN_CADENA_H
#define EJEMPLOEXAMEN_CADENA_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char *str;
    char *rstr;
}Reflejo;

Reflejo crearEspejo(char *str);
void liberarEspejo(Reflejo *r);

#endif //EJEMPLOEXAMEN_CADENA_H
