#include <stdio.h>
#include "funciones.h"

int main() {
    Articulo a[TAM];
    int n;
    n = rellenarArray(a);
    visualizarArray(a,n);
    return 0;
}
