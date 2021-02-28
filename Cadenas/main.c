#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Para poder usar strlen

int main(){

	char cad1[100],cad2[100];
	int i,j;

	printf("Introduce una frase: ");
	fflush(stdin);
	gets(cad1);

	/*Vamos a darle la vuelta a la cadena
	 *
	 * cad1 = HOLA
	 * cad2 = ALOH
	 * */
	//La variable i la vamos a usar para recorrer la cadena cad1
	//La variable j la vamos a usar para guardar los caracteres en la cadena cad2
	j=0;
	for(i=strlen(cad1)-1; i>=0 ; i--){
		cad2[j] = cad1[i];
		j++;
	}
	cad2[j] = '\0';
	printf("La cadena 2 es: %s\n", cad2);

	/*
	 * cad1 = HOLA
	 * cad2 =  ALOHOLA
	 * */

	//FORMA 1
	j=0;
	for(i=strlen(cad1)-1; i>=0 ; i--){
		cad2[j] = cad1[i];
		j++;
	}
	for(i=1;i<strlen(cad1);i++){
		cad2[j] = cad1[i];
		j++;
	}
	cad2[j]='\0';
	printf("La cadena 2 es: %s\n", cad2);

	//FORMA 2
	j=0;
	for(i=strlen(cad1)-1; i>=0 ; i--){
		cad2[j] = cad1[i];
		j++;
	}
	cad2[j]='\0';
	strcat(cad2,cad1+1);
	printf("La cadena 2 es: %s\n", cad2);

	//FORMA 3
	j=0;
	for(i=strlen(cad1)-1; i>=1 ; i--){
		cad2[j] = cad1[i];
		j++;
	}
	cad2[j]='\0';
	strcat(cad2,cad1);
	printf("La cadena 2 es: %s\n", cad2);

	return 0;

}








