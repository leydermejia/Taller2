#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Realice un programa que lea una matriz dinamica de NxM y cree
su matriz traspuesta.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/

void pedirDatos();
void mostrarMatrizTranspuesta(int **,int ,int );
void mostrarMatriz(int **,int,int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	mostrarMatrizTranspuesta(puntero_matriz,nFilas,nCol);
	
	//Liberando memoria de la matriz
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de filas: \n");
	scanf("%d",&nFilas);
	printf("Digite el numero de columnas: \n");
	scanf("%d",&nCol);
	
	//Reservar memoria para la matriz dinámica
	puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
		puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
	}
	
	printf("\nDigitando datos para la matriz: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("Digite un numero \n",i,j);
			scanf("%d",&*(*(puntero_matriz+i)+j));
		}
	}	
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	printf("\n Mostrando matriz original \n");
	for(int i=0;<nFilas;i++){
		for(int j=0;<nCol;j++){
			printf("%d",&*(*puntero_matriz+i)+j); //puntero_matriz[i][j]
		}
	}
}

void mostrarMatrizTranspuesta(int **puntero_matriz,int nFilas,int nCol){
	printf("\n Mostrando Matriz Transpuesta es \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("%d",*(*(puntero_matriz+i)+j));
		}
		printf("\n");
	}
}




