#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Hacer 2 estructuras una llamada promedio que tendra los siguientes miembros: 
nota1,nota2,nota3; y otro llamada alumno que tendra los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por
ultimo imprimir todos sus datos incluidos el promedio.
Elaborado por:Fernando Lopez Mejia,Leyder Londo�o Mejia*/
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
}alumno1[3],*palumno1=alumno1;

void estudiante(alumno v[]);

int main(){
	alumno v[100];
	estudiante(v);
	return 0;
}

void estudiante(alumno v[]){
	float promedio=0;	
	printf("Nombre \n ");
	fflush(stdin);
	fgets((palumno1)-> nombre,30,stdin);
	printf("Sexo \n ");
	fgets((palumno1)-> nombre,30,stdin);
	printf("Edad \n ");
	scanf("%d",&(palumno1)->edad);
	
	printf(" Ingrese las 3 notas \n");
	scanf("%f %f %f",&(palumno1)->prom.nota1,&(palumno1)->prom.nota2,&(palumno1)->prom.nota3);	
	promedio = ((palumno1)->prom.nota1+(palumno1)->prom.nota2+(palumno1)->prom.nota3)/3;
	
	printf("\n\n ------ *Datos del Alumno* -------\n");
	printf("\n Nombre %s",(palumno1)->nombre);
	printf("\n Sexo %s",(palumno1)->sexo);
	printf("\n Edad %i",(palumno1)->edad);
	printf("\n Promedio %.2f \n",promedio);		
}
