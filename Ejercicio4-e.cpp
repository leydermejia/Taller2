#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Utilizar las 2 estructuras del ejercicio anterior, pero ahora pedir los datos para N 
alumnos, y calcular cual de todos tiene el mejor promedio y menor, e imprimir sus datos.
Elaborado por:Fernando Lopez Mejia,Leyder Londoño Mejia*/
struct promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumnos[100],*palumnos=alumnos;

void estudiantes(alumno v[],int longt);

int main()
{
	alumno v[100];
	int longt;
	estudiantes(v,longt);
	return 0;
}

void estudiantes(alumno v[],int longt){
	int i,PromedioM;
	float promedio[100], mayor = 0.0;
	printf(" Ingrese Cantidad de Alumnos ");
	scanf("%i",&longt);	
	for(i=0;i<longt;i++){
		printf(" Nombre \n");
		fflush(stdin);
		fgets((palumnos)-> nombre,30,stdin);
		printf(" Sexo \n ");
		fgets((palumnos)-> sexo,30,stdin);
		printf(" Edad \n");
		scanf("%d",&(palumnos)->edad);
		printf(" Notas \n");
		scanf("%f %f %f",&(palumnos)->prom.nota1,&(palumnos)->prom.nota2,&(palumnos)->prom.nota3);
		printf("-----\n-------\n");		
		promedio[i]= ((palumnos)->prom.nota1+(palumnos)->prom.nota2+(palumnos)->prom.nota3/3);	
		if((promedio[i] > mayor){
			mayor = promedio[i];
			PromedioM=i;
		}
}	
	printf("\n------*Alumno con Mayor Promedio*-------\n");
	printf("\n Nombre %s",(palumnos)->nombre);
	printf("\n Sexo %s",(palumnos)->sexo);
	printf("\n Edad %i",(palumnos)->edad);
	printf("\n Promedio %.2f\n",promedio);
}

