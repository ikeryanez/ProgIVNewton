#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(){
	char opcion;
	int n1,n2,resul;
	do{
		opcion = menu();
		switch(opcion){
			case '1': printf("Introduce un numero: ");
					  scanf("%d",&n1);
					  printf("Introduce otro numero: ");
					  scanf("%d",&n2);
					  resul = sumar(n1, n2);
					  printf("El resultado de la suma es: %d\n",resul);
					  break;
			case '2': printf("Introduce un numero: ");
					  scanf("%d",&n1);
					  printf("Introduce otro numero: ");
					  scanf("%d",&n2);
					  resul = restar(n1, n2);
					  printf("El resultado de la resta es: %d\n",resul);break;
			case '3': printf("Fin del programa\n");break;
			default : printf("¡ERROR! La opción seleccionada no es correcta\n");
		}
		//system("cls"); ??
	}while(opcion!='3');
	return 0;
}
