#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char dni[10];
    char nom[20];
    int edad;
}Alumno;

int main() {
    FILE *pf;
    Alumno a;
    char resp;
    pf = fopen("Alumnos.dat","wb");
    if (pf!=(FILE *)NULL){
        do {
            printf("DNI:");
            fflush(stdin);
            gets(a.dni);
            printf("NOMBRE:");
            fflush(stdin);
            gets(a.nom);
            printf("EDAD:");
            scanf("%d", &a.edad);
            fwrite(&a, sizeof(a),1,pf);
            printf("¿Otro alumno?(s/n)");
            fflush(stdin);
            scanf("%c",&resp);
        } while (resp=='s');
        fclose(pf);
    }else{
        printf("No se ha creado el fichero");
    }
    return 0;
}
