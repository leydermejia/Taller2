#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Pedir una cadena de caracteres (string) al usuario e indicar cuantas veces 
la vocal a,e,i,o,u; en la cadena de caracteres.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
void pedirDatos();
void contarVocales(char *);
int nombre;
char nombreUsuario;


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

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){ //mientras nombre sea diferente de nulo '\0'
		switch(*palabra){
		case 'A': contA++;
		break;
		case 'E': contE++;
		break;
		case 'I': contI++;
		break;
		case 'O': contO++;
		break;
		case 'U': contU++;
		break;
		}
		palabra++;
	}
	
	printf("\nNumero de vocales A: \n",contA);
	printf("Numero de vocales E: \n",contE);
	printf("Numero de vocales I: \n",contI);
	printf("Numero de vocales O: \n",contO);
	printf("Numero de vocales U: \n",contU);
}
