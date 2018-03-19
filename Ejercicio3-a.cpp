#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Comprobar si un numero es par o impar, y señalar la posicion
en memoria donde se esta guardando el numero. Punteros.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
int main() {
	int num;
	int *dir_num = &num;
	
	printf("Ingrese un numero \n");
	scanf("%d",&*dir_num);
	
	if(*dir_num %2==0){
		printf("El numero es par \n");
		printf("posicion %p",&dir_num);
	}
	else{
		printf("el numero ",*dir_num,"es impar \n");
		printf("posicion %p",&dir_num);
	}	
	return 0;
}

