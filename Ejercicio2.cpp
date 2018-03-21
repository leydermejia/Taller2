#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*LEER 4 NUMEROS ORDENARLOS DE MAYOR A MENOR Y DIGA,
 CUAL ES EL MAYOR Y CUAL EL MENOR*/
int vector[100],num,aux;
int main() {
	int i,*num;
	int j;
	int aux,bandera=0;
	num=new int[4];
	
	printf("Ingrese los elementos del vector \n");
	for(i=0;i<4;i++){
		printf("Ingrese los 4 numeros \n ");
		scanf("%d",&num[i]);
	}
	printf("Elementos ordenados \n");
	for(i=0;i<4;i++){
		bandera=1;
		for(j=0;j<4;j++){
			if(num[j]<num[bandera]){
				aux=num[j];
				num[j]=num[bandera];
				num[bandera]=aux;
				
			}
			bandera=bandera+1;
			
		}
	}
	for(i=0;i<4;i++){
		printf("%i",num[i]);
		
	}
	printf("El mayor es: %i\n",num[3]);
	printf("El menor es: %i\n",num[0]);
	delete[]num;
	return 0;
}

