#include "funciones.h" //Lo ponemos con "f.h" porque la hemos creado nosotros
#include <stdio.h>

int sumar(int a, int b){
	return a+b;
}
int restar(int a, int b){
	return a-b;
}
char menu(){
	char opcion;

	printf("1.- Sumar 2 numeros\n");
	printf("2.- Restar 2 numeros\n");
	printf("3.- Salir\n");
	printf("Elige una opcion: ");
	fflush(stdin);
	scanf("%c",&opcion);

	return opcion;
}
