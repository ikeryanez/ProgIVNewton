//
// Created by Iker Yañez Calderon on 25/3/21.
//

#include "cadena.h"

Reflejo crearEspejo(char * str){
    int i,j;
    Reflejo r;
    r.str = (char *)malloc((strlen(str)+1)*sizeof(char));
    strcpy(r.str,str);
    r.rstr = (char *)malloc((strlen(str)+1)*sizeof(char));
    j = 0;
    for (i = strlen(str)-1; i >= 0 ; i--) {
        r.rstr[j] = r.str[i];
        j++;
    }
    r.rstr[j] = '\0';
    return r;
}

void liberarEspejo(Reflejo *r){
    free(r->str);
    free(r->rstr);
}