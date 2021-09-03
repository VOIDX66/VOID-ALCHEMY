#include <iostream>
#include <string.h>
using namespace std;

main()
{
/*
	char Nombre[70];
	cout<<"Entre su nombre: ";
	gets(Nombre);
	//gets para carcateres con espacios
	cout<<"Hola "<<Nombre;
	
	int tam;
	tam = strlen(Nombre); //strlen longitud de cadena
	cout<<"Su nombre tiene "<<tam<<" caracteres"<<endl;
	
	char cad2[20];
	strcpy(cad2,Nombre); //strcpy(donde se copia, la que copia) para copiar cadenas
	cout<<cad2<<endl;
	
	int x;
	*/
	char cad1[20];
	char cad2[20];
	/*
	strcpy(cad1,"programacion");
	strcpy(cad2,"Programacion");
	cout<<"Cadena 1 "<<cad1<<endl;
	cout<<"Cadena 2 "<<cad2<<endl;
	x = strcmp(cad1,cad2);
	cout<<x;
	
	*/
	/*
	strcpy(cad1, "Hola");
	strcpy(cad2, "Mundo");
	strcat(cad1," ");
	strcat(cad1,cad2);
	cout<<cad1;
	*/
	char ori[50];
	char cop[50];
	
	getchar();
	gets(ori);
	
	strcpy(ori,"HOLA");
	cout<<ori;
}
