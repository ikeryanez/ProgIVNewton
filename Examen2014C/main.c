#include <stdio.h>
#include "punto.h"
#include "poligono.h"

int main() {
    int i;
    Punto p1 = {1,2};
    Punto p2 = {3,4};
    Punto p = {4,4};
    Poligono poli,poli2;
    printf("(%d,%d)\n",p1.x,p1.y);
    printf("(%d,%d)\n",p2.x,p2.y);
    printf("Distancia= %f\n",distancia(p1,p2));
    trasladarXY(&p1,&p2,5,6);
    printf("Distancia= %f\n",distancia(p1,p2));
    printf("(%d,%d)\n",p1.x,p1.y);
    printf("(%d,%d)\n",p2.x,p2.y);
    printf("Introduce el numero de vertices del poligono:\n");
    scanf("%d",&poli.numVertices);
    poli.vertices = (Punto *)malloc(poli.numVertices* sizeof(Punto));
    for (i = 0; i < poli.numVertices; i++) {
        printf("Valor de x:");
        scanf("%d",&poli.vertices[i].x);
        printf("Valor de y:");
        scanf("%d",&poli.vertices[i].y);
    }
    imprimirPoligono(poli);
    printf("Perimetro: %f\n",perimetro(poli));
    anadirVertice(&poli,p);
    copiarPoligono(poli,&poli2);
    imprimirPoligono(poli);
    imprimirPoligono(poli2);
    free(&poli);
    free(&poli2);
    char string[20];

    return 0;
}
