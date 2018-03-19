#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Rellenar un array con n numeros posteriormente utilizando 
punteros determinar el menor elemento del vector.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/

int main() {
	int num,numeros[100],menor=999999;
	int *dir_numeros=numeros;
	int aux;

	printf("Digite el numero de elementos del arreglo \n");
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		printf("Ingrese un numero \n");
		scanf("%d",&*dir_numeros); //Guardamos los elementos en el arreglo
	}
	
	for(int i=0;i<num;i++){
			if(numeros[i]>numeros[i+1]){
				aux=numeros[i];
				numeros[i]=numeros[i+1];
				numeros[i+1]=aux;
			}
	}
	printf("\n El menor elemento es %d \n",*(dir_numeros+0));	
	return 0;
}

