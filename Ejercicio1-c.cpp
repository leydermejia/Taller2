#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Crear un arreglo de dimension 4x4 y pedirle al usuario,
que ingrese 4 numeros. En la primera Columna mostrar los numeros ingresados,
por el usuario, en la segunda columna el numero elevado al cuadrado, en la 
tercera columna el numero elevado al cubo y en la cuarta eñl numero elevado a
la cuarta. Imprimir en pantalla el resultado del arreglo.Con punteros.
Elaborado por: Leyder Londoño Mejia,Fernando Lopez Mejia*/
int main() {
	int matriz[4][4];
	int *Pun=&matriz[0][0];
	int i,j;
	int num;
	for(i=0;i<4;i++){
		printf(" Digite un numero matriz: \n");	
		scanf("%i",&num);
		for(j=0;j<4;j++){
			if(j==0){
				*(Pun+i+j *4)=num;
			}
			if(j==1){
				*(Pun+i+j *4)=pow(num,2);
			}
			if(j==2){
				*(Pun+i+j *4)=pow(num,3);
			}
			if(j==3){
				*(Pun+i+j *4)=pow(num,4);
			}
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			printf("%i ",*(Pun+i+j *4));
		}
		printf("\n\n");
	}
	return 0;
}

