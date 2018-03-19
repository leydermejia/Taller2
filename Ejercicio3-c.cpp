#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Rellenar un array de 10 numeros, posteriormente utilizando 
punteros indicar cuales son numeros pares y su posicion en memoria.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
int main() {
	int numeros[10], *dir_numeros;
	
	for(int i=0;i<10;i++){//Pidiendo los números al usuario
		printf("Ingrese un numero \n",i+1);
		scanf("%d",&numeros[i]);
	}
	dir_numeros = numeros; //indicar al puntero que inicie en a[0]
	for(int i=0;i<10;i++){
		if(*dir_numeros%2==0){//Comprobar números pares
			printf("Numero par %d \n",*dir_numeros);
			printf("Posicion %p \n ",&*dir_numeros);
		}
		dir_numeros++;
	}
	return 0;
}

