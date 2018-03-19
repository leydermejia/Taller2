#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Pedirle al usuario que ingrese dos valores, y de acuerdo a los valores ingresado, 
mostrar en pantalla un arreglo de num1 x num2, que contenga ceros y unos.Con punteros.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/
int main() {
	int num1,num2,i,j;
	int matriz[100][100];
	int *Pun=&matriz[0][0];
	printf("\n Ingrese dos valores numericos \n");
	scanf("%d%d",&num1,&num2);
	for(i=0;i<=num1;i++){
		for(j=0;j<=num2;j++);
		*(Pun+i+j *num2);
	}
	for(i=0;i<=num1;i++){
		for(j=0;j<=num2;j++){
			if(i==j){
				*(Pun+i+j *num2)=1;
			}else{
				*(Pun+i+j *num2)=0;
			}
			printf("%d",*(Pun+i+j *num2));
		}
		printf("\n");
	}
	return 0;
}

