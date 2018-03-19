#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Hacer una funcion para almacenar N numeros en un arreglo
posteriormente en otra funcion buscar un numero en particular.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
void pedirDatos();
void busqueda();

int nElementos, *elemento;

int main(){
	pedirDatos();
	//busqueda();	
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de elementos del arreglo: \n");
	scanf("%d",&nElementos);
	
	elemento = new int[nElementos]; //Crear el arreglo
	
	for(int i=0;i<nElementos;i++){//Pedir datos al usuario para el arreglo
		printf("Digite un numero: \n");
		scanf("%d",&*(elemento+i));
	}	
	busqueda();
	delete[] elemento;
}

void busqueda(){
	int inf,sup,dato,mitad;
	char band = 'F';	
	printf ("\nIngrese Elemento a buscar: \n");
	scanf ("%d",&dato);	
	inf = 0;
	sup = nElementos;	
	while((inf <= sup) && (band == 'F')) {
		mitad =((inf+sup)/2);
		if(elemento[mitad]==dato){
			band = 'V';
		}
		else 
		   if(elemento[mitad]>dato){
			sup = mitad - 1;
		}
		   else{
			   inf = mitad + 1;
		   }
	}	
	if(band == 'F'){
		printf("\nEl Elemento no esta en el Arreglo.\n");
	} 
	else if(band=='V'){
		printf("\nElemento encontrado, en la pos: %i",mitad+1);
	}
}

