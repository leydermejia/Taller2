#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
Programa:Declara un array de numéricos decimales e introduce en él cuatro elementos
que sean 32.583, 11.239, 45.781, 22.237. A continuación muestra por pantalla todos 
los elementos.Con punteros.
Elaborado por: Leyder Londoño Mejia, Fernando Lopez Mejia*/
int main() {
	int i;
	float vec[4]={32.583,11.239,45.781,22.237};
	float *NumDecimales=vec;
	printf("Numericos Decimales \n");
	for(i=0;i<=3;i++){
		printf("\n Los numeros decimales son: %.3f",*(NumDecimales+i));
	}
	return 0;
}

