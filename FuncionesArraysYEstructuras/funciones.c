//
// Created by Iker Yañez Calderon on 11/3/21.
//

#include "funciones.h"

Persona pedirDatosPersona(){
    Persona p;
    printf("DNI: ");
    fflush(stdin);
    gets(p.dni);
    printf("NOMBRE: ");
    fflush(stdin);
    gets(p.nom);
    printf("EDAD: ");
    scanf("%d",&p.edad);
    return p;
}

void mostrarDatosPersona(Persona p){
    printf("%10s%25%25d\n",p.dni,p.nom,p.edad);
}

void modificarEdadPersona(Persona *p){
    p->edad++;
}

int rellenarArray(Persona *aPersonas, int tamMax){
    int n = 0;
    Persona p;
    char resp;
    do{
        aPersonas[n]=pedirDatosPersona();
        n++;
        printf("¿Quieres insertar otra?(s/n)");
        fflush(stdin);
        scanf("%c",&resp);
    } while (resp == 's' && n < tamMax);
    return n;
}

void eliminar(Persona *aPersonas, int *n){
    int pos=0,i;
    while (pos<*n){
        if (aPersonas[pos].nom[0=='A']){
            for (i=pos;i<*n-1;i++){
                aPersonas[i]=aPersonas[i+1];
            }
            (*n)--;
        }
        else
            pos++;
    }
}

void mostrarArray(Persona *aPersonas,int n){
    int i;
    printf("%10s%25s%25s\n","DNI","NOM","EDAD");
    for (int i = 0; i < n; i++) {
        mostrarDatosPersona(aPersonas[i]);
    }
}