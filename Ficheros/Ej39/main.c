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
    pf = fopen("Alumnos.dat","rb");
    if (pf!=(FILE *)NULL){
        while (fread(&a, sizeof(a),1,pf)!=0){
            printf("%s %s %d",a.dni,a.nom,a.edad);
        }
        fclose(pf);
    }
    return 0;
}
