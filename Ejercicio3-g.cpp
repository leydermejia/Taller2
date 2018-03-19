#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

/*Comentario
Pedir su nombre al usuario y devolver el numero de vocales
que hay.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
void pedirDatos();
int contarVocales(char *);
int nombre;
char nombreUsuario[30];

int main(){
	pedirDatos();
	
	return 0;
}

void pedirDatos(){
	char nombreUsuario[20];
	char *pt=nombreUsuario;
	printf("Digite su nombre: \n");
	fflush stdin;
	fgets(pt,30,stdin);
	contarVocales(pt);
}

int contarVocales(char *nombre){
	int cont = 0;	
	while(*nombre){ //mientras nombre no sea nulo '\0'
		switch(*nombre){
		case 'A': 
			cont++;
			break;
		case 'E':
			cont++;
			break;
		case 'I':
			cont++;
			break;
		case 'O':
			cont++;
			break;
		case 'U': 
			cont++;
			break;
		}
	}
	printf("\n Numero de vocales en el nombre: %d\n",*(nombre)+0);	
}	

