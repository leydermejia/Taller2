#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Comentario
VECTOR QUE ME LEA 100 NUMEROS Y QUE ME HAGA LA SUMMA,
 DE LOS PARES Y LOS IMPARES*/
int main() {
	int i,suma=0;
	int impar=0;
	int *num;
	int Vnum[100];
	num=new int[100];
	printf("Numeros del vector \n");
	for(i=0;i<100;i++){
	Vnum[i]=i;
		printf("\n Los numeros del vector son: %i",Vnum[i]);
			if(i%2==0){
				suma=suma+i;
			}else{
				impar=impar+i;
			}
		}
		printf("\n La suma de los 100 numeros pares es: %i",suma);
			
	printf("\n La suma de los 100 numeros impares es: %i",impar);
	delete[]num;
	return 0;
}
