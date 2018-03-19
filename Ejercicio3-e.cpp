#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Rellenar un array con n numeros posteriormente utilizando 
punteros determinar el menor elemento del vector.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
void pedirDatos();
void ordenarNumeros(int *,int);
void mostrarArregloOrdenado(int *,int);
int num, *elemento;

int main() {
	pedirDatos();
	ordenarNumeros(elemento,num);	
	mostrarArregloOrdenado(elemento,num);
	
	delete[] elemento;
	return 0;
}
void pedirDatos(){//Pedimos los datos al usuario
	printf("Ingrese el numero de elementos \n");
	scanf("%d",&num);
	
	elemento = new int[num];
	
	for(int i=0;i<num;i++){
		printf("Ingrese un numero \n");
		scanf("%d",&*elemento+i);
	}
}

void ordenarNumeros(int *elemento,int num){
	int aux;
	//Ordenamiento por metodo burbuja con punteros
	for(int i=0;i<num;i++){
		for(int j=0;j<num-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *elemento,int num){//Mostrando Arreglo ordenado
	printf("\n Mostrando Arreglo Ordenado \n ");
	for(int i=0;i<num;i++){
		printf("%d \n",*(elemento+i));
	}
}

