#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Programa que lee en un arreglo de estructuras los datos
de N empleados de la empresa y que imprima los datos del empleado con
mayor y menor salario.
Elaborado por:Fernando Lopez Mejia,Leyder Londoño Mejia*/
struct empleado{
	char nombre[20];
	char sexo[20];
	float salario;	
}empleados[100], *pempleados=empleados;

void referencia(empleado v[],int longt);

int main() 
{	
	empleado v[100];
	int n;
	referencia(v,n);
	return 0;
}

void referencia(empleado v[],int longt){
	int i,SalarioM,SalarioMe;
	float Alto = 0.0, Bajo = 9999999;
	printf("Ingrese Cantidad de empleados \n ");
	scanf("%d",&longt);
	
	for(i=0;i<longt;i++){
		fflush(stdin);
		printf("Nombre Empleado \n ");
		fgets((pempleados+i)->nombre,20,stdin);
		fflush(stdin);
		printf("Sexo Empleado \n ");
		fgets((pempleados+i)->sexo,20,stdin);
		printf(" Salario del Empleado \n");
		scanf("%f",&(pempleados+i)->salario);
		printf("----------\n------------\n");
	}
	for(i=0;i<longt;i++){
		if((pempleados+i)->salario > Alto){ 
			Alto= ((pempleados+i)->salario);
			SalarioM = i;
		}
		else if((pempleados+i)->salario < Bajo){
			Bajo = ((pempleados+i)->salario);
			SalarioMe = i;
		}
	}
	
	printf("\n El Empleado con el mayor salario es \n");
	printf("\n Nombre %s",(pempleados+i)->nombre);
	printf("\n Sexo %s",(pempleados+i)->sexo);
	printf("\n Salario: %.2f",(pempleados+i)->salario);
	
	printf("\n El Empleado con el menor salario es: \n");
	printf("\n Nombre %s",(pempleados+i)->nombre);
	printf("\n Sexo %s",(pempleados+i)->sexo);
	printf("\n Salario %.2f \n",(pempleados+i)->salario);
	
}

