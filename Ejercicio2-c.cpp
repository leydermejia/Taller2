#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Crear matriz de 3x3 y llenarla de manera automatica
por el sistema con numeros primos
Elaborado por: Leyder Londoño Mejia,Fernando Lopez Mejia*/

int main() {
	int matriz[3][3]={2, 3, 5, 7, 11, 13, 17, 19, 23} ;
	int *Pun=&matriz[0][0];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf(" %i ",*(Pun+i+j *3));
		}
		printf("\n\n");
	}
	
	return 0;
}
