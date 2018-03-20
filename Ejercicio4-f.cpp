#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
/*Comentario
Defina una estructura que sirva para representar una persona la estructura debe 
contener dos campos: el nombre de la persona y un valor de tipo logico que indica si 
la persona tiene algun tipo de discapacidad. Realice un programa que dado un vector 
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ningun tipo de discapacidad y otro que contenga las personas con discapacidad.
Elaborado por: Leyder Londoño Mejia*/
struct personas{
	char nombre[30];
	bool discapacidad;
}persona[3],*ppersona=persona;

int disc = 0, sinDisc = 0;
void personitas(personas v[],int tam);

int main()
{
	personas v[100];
	int tam;
	personitas(v,tam);
	return 0;
}

void personitas(personas v[],int tam)
{
	int i,opcion;
	printf("Ingrese Cantidad de personas:\n");
	scanf("%d",&tam);
	for (i=0;i<tam;i++){
		printf("\n Nombre: \n",i+1);
		fflush(stdin);
		fgets((ppersona)-> nombre,30,stdin);
		printf(" Tiene alguna discapacidad ");
		printf("Ingrese el numero 1.Si ó 2.No\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			(ppersona)->discapacidad=true;
			break;
		case 2:
			(ppersona)->discapacidad=false;
			break;
		}
	}
	printf("\n Personas con discapacidad \n");
	for(i=0;i<tam;i++){		
		if((ppersona)->discapacidad == true){
			disc=i;
			printf("%s \n",(ppersona)->nombre);
		}
	}
	printf("\n Personas SIN discapacidad \n");
	for(i=0;i<tam;i++){		
		if((ppersona)->discapacidad==false){
			sinDisc=i;
			printf("%s \n",(ppersona)->nombre);
		}
	}
}

