#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Defina una estructura que indique el tiempo empleado por un ciclista
en recorrer una etapa. La estrcutura debe tener 3 campos
horas,minutos y segundos. Escriba un programa que dado 3 etapas
calcule el tiempo total empleados en recorrer todas las etapas.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
struct Etapa{
	int horas,min,seg;
}etapa[3], *puntero_etapa = etapa;

void pedirDatos();
void calcularTiempo(Etapa *);

int main(){
	pedirDatos();
	calcularTiempo(puntero_etapa);

	return 0;
}

void pedirDatos(){
	printf("Digite los tiempos empleados \n");	
	for(int i=0;i<3;i++){
		printf("Horas: "); 
		scanf("%d",&(puntero_etapa+i)->horas);
		printf("Minutos: "); 
		scanf("%d",&(puntero_etapa+i)->min);
		printf("Segundos: "); 
		scanf("%d",&(puntero_etapa+i)->seg);
		printf("\n");
	}
}

void calcularTiempo(Etapa *puntero_etapa){
	int horasT=0,minutosT=0,segundosT=0;
	for(int i=0;i<3;i++){
		horasT += (puntero_etapa+i)->horas; //horasT = horasT + puntero_etapa[i].horas
		minutosT += (puntero_etapa+i)->min;
		if(minutosT >= 60){//Si los minutos son mayores a 60, significa que ha pasado
			minutosT -= 60;//mas de 1 hora, entonces disminuimos en 60 los minutos
			horasT++;//y aumentamos las horas en 1
		}
		segundosT += (puntero_etapa+i)->seg;
		if(segundosT >= 60){//y lo mismo con los segundos
			segundosT -= 60;
			minutosT++; 
		}
	}

	printf("\n El tiempo total es: ");
	printf("Horas: %d\n",horasT);
	printf("Minutos: %d\n",minutosT);
	printf("Segundos: %d\n",segundosT);
}

