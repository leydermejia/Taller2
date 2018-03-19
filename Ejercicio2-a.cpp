#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Crear una matriz 3x3 donde el usuario completa
sus valores desde el teclado y al final imprimir la matriz
y la suma de cada una de sus posiciones
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/

int main() {
	int i,j,fil,colum;
	printf("Ingrese el numero de filas \n");
	scanf("%d",&fil);
	printf("Ingrese el numero de columnas \n");
	scanf("%d",&colum);
	int matriz1[fil][colum];
	int *Pun=&matriz1[0][0];
	for  (i=0;i<=fil-1;i++){
		for  (j=0;j<=colum-1;j++){
			printf("Ingrese la posicion \n",i,j,"de la matriz 1 \n");
			scanf("%d",&*(Pun+i+j *colum));
		}
	}
	printf("\n");
	int matriz2[fil][colum];
	int *Pn=&matriz2[0][0];
	for  (i=0;i<=fil-1;i++){
		for  (j=0;j<=colum-1;j++){
			printf("Ingrese la posicion",i,j,"de la matriz 2 \n");
			scanf("%d",&*(Pun+i+j *colum));
		}
	}
	printf("\n");
	printf("A continuacion se sumaran las matrices ingresadas \n");
	scanf("\n");
	int matriz3[fil][colum];
	for  (i=0;i<=fil-1;i++){
		for  (j=0;j<=colum-1;j++){
			*(Pun+i+j *colum)= *(Pun+i+j *colum)+*(Pun+i+j *colum);
			printf("Valor posicion: \n",i,j,*(Pun+i+j *colum));
		}
	}
	return 0;
}
