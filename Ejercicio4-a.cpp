#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Estructura llamada competidor, en la cual se tendrán los siguientes
miembros: Nombre, edad, sexo, club, pedir datos al usuario para un competidor, y
asignarle una categoría de competición:
- Juvenil <= 15 años
- Señor <= 30 años
- Veterano > 30 años
Posteriormente imprimir todos los datos del competidor, incluida su categoría de
competición.
Elaborado por: Fernando Lopez Mejia, Leyder Londoño Mejia*/

struct Competidores{
	char nombre[30];	
	char sexo[10];
	char club[30];
	char categoria[20];
	int edad;	
}Competi[5], *pCompeti=Competi;

void datos(Competidores v[],int tam);

int main() {
	
	Competidores v[100];
	int tam;
	datos(v,tam);
	return 0;
}

void datos(Competidores v[],int tam){
	printf("Ingrese Cantidad de Competidores:\n");
	scanf("%d",&tam);
	printf("Ingrese Datos de los Competidores:\n");	
	for (int i=0;i<tam;i++){
		fflush(stdin);
		printf("Nombre: ");
		fgets((pCompeti+i)-> nombre,30,stdin);
		printf("Edad: \n");
		scanf("%d",&(pCompeti+i)->edad);
		fflush(stdin);
		printf("Sexo: \n");
		fgets((pCompeti+i)-> sexo,30,stdin);
		
		fflush(stdin);
		printf("Club:\n ");
		fgets((pCompeti+i)-> club,30,stdin);
		
		if((pCompeti+i)->edad<=15){
			strcpy((pCompeti+i)->categoria, "Juvenil");
		}
		else if((pCompeti+i)->edad<=30){
			strcpy((pCompeti+i)->categoria, "Señor");
		}else{
			strcpy((pCompeti+i)->categoria, "Veterano");
		}
		printf("\n");
	}	
	printf("<<<<Listado de Competidores>>>>\n");	
	for(int i=0;i<tam;i++){
		printf("Nombre:%s \r\t Edad:%d\t Sexo:%s \r\t Club:%s \r\t Categoria:%s\t\n",(pCompeti+i)->nombre,(pCompeti+i)->edad,(pCompeti+i)->sexo,(pCompeti+i)->club,(pCompeti+i)->categoria);
	}
}
