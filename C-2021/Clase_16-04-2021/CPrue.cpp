#include <iostream>
#include <string.h>
#include "stdio.h"
#include "conio.h"
using namespace std;

/*
void Decimal()
{
	float Numero; // Declaramos un flotante denominado Numero
	printf("Ingrese un numero:");
	scanf("%f",&Numero);
	printf("\nEl numero ingresado es : %f",Numero);
	getch(); // Es para que el programa se detenga.
}

void Entrada_Salida()
{
	float a;
	char b;
	printf("Introduce un numero: ");
	scanf("%f",&a);
	printf("Introduciste el numero: %f\n",a);	
	getchar();
	printf("Introduce una letra: ");
	scanf("%c",&b);
	printf("Introduciste la letra: %c\n\n",b);
	printf("Presiona Enter para Salir");
	getchar();
	getchar();
}

void Edad()
{
	int nacimiento, actual, edad;
	printf("Introduce tu ano de naciemiento: ");
	scanf("%i",&nacimiento);
	getchar();
	printf("Introduce el ano actual: ");
	scanf("%i",&actual);
	getchar();
	edad = actual - nacimiento;
	printf("Tienes aproximandamente %i anos\n\nPresiona Enter para Salir",edad);
	getchar();
}
*/

int CadLong(char cad[])
{	
	int i=0;
	while(cad[i]!='\0')
	{
		i++;
	}
	return(i);
}

char copia(char cadena1[],char cadena2[])
{
	int i=0;
	while(cadena1[i]!='\0')
	{
		cadena2[i]=cadena1[i];
		i++;
	}
	cadena2[i]=0;
	return(cadena2[CadLong(cadena1)]);
}


main()
{	
	/*
	char cadena[20]="Hola Mundo";
	int x=CadLong(cadena);
	printf("El tama%co",164); 
	printf(" de la cadena es de %d caracteres",x);
	*/
	
	//Decimal();
	//Entrada_Salida();
	//Edad();
	
	char cad[20]="Santachos";
	char cad2[CadLong(cad)];
	copia(cad,cad2);
	cout<<cad2;
}


