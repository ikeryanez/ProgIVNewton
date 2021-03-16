/*
 * Realizar un programa en el que se le pidan al usuario los
 * datos de 5 empleados (dni,nombre y edad) y se guarden en un
 * array. A continuacion, visualizar aquellos cuyo nombre empiece
 * por M.
 */

#include <stdio.h>
#define TAM 5

typedef struct{
    char dni[10];
    char nom[20];
    int edad;
}Empleado;

int main() {
    Empleado a[TAM];
    int i;
    for(i=0;i<TAM;i++){
        printf("DNI:");
        fflush(stdin);
        gets(a[i].dni);
        printf("NOMBRE:");
        fflush(stdin);
        gets(a[i].nom);
        printf("EDAD:");
        scanf("%d",&a[i].edad);
    }
    for(i=0;i<TAM;i++){
        if (a[i].nom[0]=='M')
            printf("%s %s %d \n",a[i].dni,a[i].nom,a[i].edad);
    }
    return 0;
}
