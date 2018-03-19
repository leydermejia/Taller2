#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Determinar si un numero es primo o no; con punteros y ademas indicar
en que posicion de memoria se guardo el numero.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
int main() {
	int num,*dir_num;
	dir_num = &num; 
	printf("Ingrese un numero \n");
	scanf("%d",&*dir_num);
	
	dir_num = &num; 
	int cont=0;
	for(int i=1;i<*dir_num;i++){
		if(*dir_num%i == 0){
			cont++;
		}
	}
	if(cont>2){
		printf("el numero %d No es primo \n",*dir_num);
	}
	else{
		printf("el numero %d Es primo \n",*dir_num);
		printf("Direccion: %p",&dir_num); 
	}
	return 0;
}

