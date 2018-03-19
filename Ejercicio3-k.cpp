#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Hacer una estructuras llamada alumno en la cual se tendran los sgtes
campos: nombre,edad,promedio,pedir datos al usuario para 3 alumnos,
copmprobar cual de los 3 tiene el mejor promedio y posteriormente
imprimir los datos del alumno.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/
struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void comprobarMejorPromedio(Alumno *);

int main(){
	pedirDatos();	
	comprobarMejorPromedio(puntero_alumno);

	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin); //Limpiar buffer para poder seguir digitando datos
		printf("Digite su nombre: ");
		fgets((puntero_alumno+i)->nombre,30,stdin);
		printf("Digite su edad: ");
		scanf("%d",&(puntero_alumno+i)->edad);
		printf("Digite su promedio: ");
		scanf("%f",&(puntero_alumno+i)->promedio);
		printf("\n");
	}
}

void comprobarMejorPromedio(Alumno *puntero_alumno){
	float mayor = 0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;//sacamos el mayor promedio
			pos = i;// guardamos la posicion del mayor promedio
		}
	}
	
	printf("\n Alumno con el mejor promedio: \n ");
	printf("Nombre: %s\n",(puntero_alumno+pos)->nombre);
	printf("Edad: %d\n",(puntero_alumno+pos)->edad);
	printf("Promedio: %f\n",(puntero_alumno+pos)->promedio);	
}

