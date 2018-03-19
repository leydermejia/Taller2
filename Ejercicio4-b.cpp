#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Estructura Estudiantes, en la cual se tendran los siguientes
campos:Nombre,edad,grado,promedio.Pedir datos al usuario para 3 alumnos
comprobar cual de los 3 tiene el mejor promedio y imprimir los datos del
alumno
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
struct Estudiantes{
	char nombre[30];	
	int edad;
	float grado;
	float promedio;	
}alumnos[3], *pAlumnos=alumnos;
void referencia(Estudiantes v[]);
Estudiantes v[100];
int main() {
	referencia(v);
	return 0;
}
void referencia(Estudiantes v[]){
	int i,lugar;
	float MayorNota=0.0;
	
	for(i=0;i<3;i++){
		printf("\n Nombre \n");
		fflush(stdin);
		fgets((pAlumnos+i)-> nombre,30,stdin);
		printf("Edad \n");
		scanf("%d",&(pAlumnos+i)->edad);
		printf("Grado \n");
		scanf("%f",&(pAlumnos+i)->grado);
		printf("Promedio \n");
		scanf("%f",&(pAlumnos+i)->promedio);
		printf("--------- \n -----------\n");
	}
	
	for(i=0;i<3;i++){
		if((pAlumnos+i)->promedio > MayorNota){
			MayorNota=((pAlumnos+i)->promedio);
			lugar=i;
		}
	}
	printf("Datos del estudiante con mejor promedio es \n");
	printf("Nommbre %s \n",pAlumnos->nombre);
	printf("Nommbre %d \n",pAlumnos->edad);
	printf("Nommbre %.2f \n",pAlumnos->grado);
	printf("Nommbre %.2f \n",pAlumnos->promedio);
	
}


