#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>

int main() {
    int tamMax,n,i;
    Persona *aPersonas;
    char opcion;
    do {
        printf("Introduce el tamaño del array:");
        scanf("%d",&tamMax);
    } while (tamMax<=0);
    aPersonas = (Persona *)malloc(tamMax*sizeof(Persona));
    n = rellenarArray(aPersonas,tamMax);
    do {
        printf("1.- Mostrar listado de personas:\n");
        printf("2.- Eliminar personas cuyo nombre empieza por A:\n");
        printf("3.- Sumarle uno a la edad de todas las personas:\n");
        printf("4.- Salir:\n");
        fflush(stdin);
        scanf("%c",&opcion);
        switch (opcion) {
            case '1':mostrarArray(aPersonas,n);break;
            case '2':eliminar(aPersonas,&n);break;
            case '3':for (int i = 0; i < n; i++) {
                    modificarEdadPersona(&aPersonas[i]);
                }break;
            case '4':printf("Fin:");break;
            default:printf("Opcion incorrecta");
        }
    } while (opcion!=4);
    free(aPersonas);
    return 0;
}
