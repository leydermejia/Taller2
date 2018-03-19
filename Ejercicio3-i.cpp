#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Realice un programa que calcule la suma de dos matrices dinamicas
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizSuma(int **,int,int);

int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizSuma(puntero_matriz1,nFilas,nCol);
	
	//Liberar la memoria utiliza en matriz2
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	
	//Liberar la memoria utiliza en matriz1
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de filas: ");
	scanf("%d",&nFilas);
	printf("Digite el numero de columnas: ");
	scanf("%d",&nCol);
	
	//Reservar memoria para la primera matriz
	puntero_matriz1 = new int*[nFilas]; //Reservar memoria para las filas
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			puntero_matriz1[i] = new int[nCol]; //Reservar memoria para las columnas
		}
	}
	
	printf("\nDigitando los elementos de la primera matriz: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("Digite un numero \n ",i,j);
			scanf("%d",&*(*(puntero_matriz1+i)+j)); //puntero_matriz1[i][j]
		}
	}
	
	//Reservar memoria para la segunda matriz
	puntero_matriz2 = new int*[nFilas]; //Reservar memoria para las filas
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			puntero_matriz2[i] = new int[nCol]; //Reservar memoria para las columnas
		}
	}
	
	printf("\n Digitando los elementos de la segunda matriz: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("Digite un numero \n ",i,j);
			scanf("%d",&*(*(puntero_matriz2+i)+j)); //puntero_matriz1[i][j]
		}
	}
}

void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);  
		}//puntero_matriz[i][j] = puntero_matriz[i][j]+puntero_matriz2[i][j];
	}
}

void mostrarMatrizSuma(int **puntero_matriz1,int nFilas,int nCol){
	printf("\nLa suma de ambas matrices es: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("%d",*(*(puntero_matriz1+i)+j));
		}
		printf("\n");
	}
}
