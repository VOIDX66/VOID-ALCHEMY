//--------------------------------------------------------------------------------------------------
//Proyecto final
//--------------------------------------------------------------------------------------------------
//Librerias
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "FunG.h"
//--------------------------------------------------------------------------------------------------
using namespace std;
//--------------------------------------------------------------------------------------------------
//Variables globales
int matriz_datos[5][8];
/*
Dentro de la matriz de 5x8 se organizaran los datos de la siguiente forma, en cada columna se guardara el
valor del tiempo en milesimas de segundo correspondiente a el numero de datos ordenado por cada metodo, siendo
n la cantidad de datos que se ordenaron.  
----------------------------------------------------------------------------------------------------------------------
|FILAS				  |										COLUMNAS											 	 |
|---------------------|----------------------------------------------------------------------------------------------|
|					  |0			|1			|2			|3			|4			|5			|6			|7		 |
|0 INSERCCION DIRECTA |n1000		|n2000	   	|n10000		|n20000		|n50000     |n100000	|n200000	|n400000 |
|1 BURBUJA			  |n1000		|n2000	   	|n10000		|n20000		|n50000     |n100000	|n200000	|n400000 |
|2 QUICKSORT		  |n1000		|n2000	   	|n10000		|n20000		|n50000		|n100000	|n200000	|n400000 |
|3 SHELLSORT          |n1000		|n2000	   	|n10000		|n20000		|n50000		|n100000	|n200000	|n400000 |
|4 INSERCION BINARIA  |n1000		|n2000	   	|n10000		|n20000 	|n50000		|n100000	|n200000	|n400000 |
----------------------------------------------------------------------------------------------------------------------
*/
//--------------------------------------------------------------------------------------------------
//Llamado de funciones
int Leer(int vector[],int tam);
void MostrarVec(int *vec,int tam);
void Insercion(int *a,int n);
void Burbuja(int *vec,int tam);
void quicksort(int *a, int p, int u);
void Shell(int *a,int n);
void InsBinaria(int *a,int n);
void Metodos_tiempo();
void tabla();
//--------------------------------------------------------------------------------------------------

main()
{
	
	float tiempo;				//Variable de tipo float donde se guardara el tiempo
	clock_t inicio,parada;
	
	inicio=clock();
	Metodos_tiempo();
	parada=clock();
	tiempo=1000L*(parada-inicio)/CLK_TCK; 	//Calcular diferencia tiempo
	Posicion(0,19);
	Color(15);
	cout<<endl<<"TOTAL TIEMPO PROCESAMIENTO: "<<tiempo/1000<< " SEGUNDOS";
	tabla();
	Posicion(0,20);
	Color(15);
}
//--------------------------------------------------------------------------------------------------
//Procedimento para imprimir vector
void MostrarVec(int *vec,int tam)
{	
	for(int i=0;i<tam;i++)
	{
		cout<<*(vec+i)<<" ";
	}
	cout<<endl;
}
//--------------------------------------------------------------------------------------------------
/* Funcion encargada de la lectura del archivo de texto "datos.txt",
esta tiene como objetivo inicializar la variable datos como
archivo de lectura, y dependiendo del valor de la variable tam
este recolectara cierto numero de datos los cuales en cada
iteracción serán introducidos en la variable cadena, ya que
estos se leen como cadena de caracteres, por lo cual luego
serán almacenados en la variable entero que es de valor
númerico, con el fin de que luego el vector en la posición i
que es igual a la iteracción tome el valor de entero, cuando
este proceso finalice se retornara el vector
*/
int Leer(int *vector,int tam)
{
	char cadena[5];
	int entero;
	ifstream datos;
	datos.open("datos.txt",ios::in);
		if(datos.good())
		{
			int i=0;
			while(i<tam)
			{
					//atoi()=Convertir char en entero
					datos>>cadena;//Leer una cadena del archivo
					entero=atoi(cadena);
					*(vector+i)=entero;
					i++;
			}
			datos.close();//Cierra el archivo
			return(*vector);
		}
		else
		{
			cout<<"No se pudo abrir el archivo datos.txt"<<endl;
			system("pause");
			exit(1);
		}
		system("pause");
		system("cls");
}

//--------------------------------------------------------------------------------------------------
/* El metodo de insercion directa recibe un array 
y su tamaño por medio de posiciones i,j y una
variable auxiliar se comparan sus datos hasta dejar
ordenado el array
*/
void Insercion(int *a,int n)
{
	int i,j;
	int aux;
	for(i = 1; i < n; i++)
	{
		j = i;
		aux = *(a+i);
		while(j > 0 && aux < *(a+j-1))
		{
			*(a+j) = *(a+j-1);
			j--;
		}
		*(a+j)=aux;
	}
	//
}
//--------------------------------------------------------------------------------------------------
/* El metodo de ordenamiento burbuja recibe un 
array y el tamaño del vector y al igual que el 
anterior por medio de variables auxiliares va
ordenando el array
*/
void Burbuja(int *vec,int tam)
{
	int inter=1;
	int pasada, j;

	for(pasada=0; pasada<tam-1; pasada++)
	{
		inter=0;
		for(j=0; j<tam-pasada-1;j++)
		{
			if(*(vec+j)>*(vec+j+1))
			{
				long aux;
				inter=1;
				aux=*(vec+j);
				*(vec+j)=*(vec+j+1);
				*(vec+j+1)=aux;
			}
		}
	}
}
//--------------------------------------------------------------------------------------------------
/*El metodo quicksort recibe el array, su primera
posicion y su ultima, para empezar a comparar desde
el medio del array con un pivote el cual enviara los
elementos de menor valor a la izquierda y los mayores
a la derecha, hasta llegar al pivote y de ahi elegir
uno nuevo hasta que el array este totalmente ordenado
*/
void quicksort(int *a, int p, int u)
{	
	int i,j, central;
	int pivote;
	central=(p+u)/2;
	pivote=*(a+central);
	i=p;
	j=u;
	
	do
	{
		while(*(a+i)<pivote)
		{
			i++;
		}
		while(*(a+j)>pivote)
		{
			j--;
		}
		if(i<=j)
		{
			int tmp;
			tmp=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=tmp;
			i++;
			j--;
		}
	}while(i<=j);
	if(p<j)
	{
		quicksort(a,p,j);
	}
	if(i<u)
	{
		quicksort(a,i,u);
	}
}
//--------------------------------------------------------------------------------------------------
/*El metodo Shellsort
*/
void Shell(int *a,int n)
{
	int intervalo, i, j, k;	
	intervalo = n / 2;
	
	while (intervalo > 0)
	{
		for (i = intervalo; i < n; i++)
		{
			j=i- intervalo;
			while (j >= 0)
			{
				k=j+ intervalo;
				if (*(a+j) <= *(a+k))
					j = -1; /* así termina el bucle, par ordenado */
				else
				{
				int temp;
				temp = *(a+j);
				*(a+j) = *(a+k);
				*(a+k) = temp;
				j -= intervalo;
				}
			}
		}
	intervalo = intervalo / 2;
	}
}
//--------------------------------------------------------------------------------------------------
/*Metodo de Insercion binaria
*/
void InsBinaria(int *a,int n)
{
	int i,j,aux,izq,der,m;
	
	for(i=1;i<n;i++)
	{
		aux=*(a+i);
		izq=0;
		der=i-1;
		while(izq<=der)
		{
			m=((izq+der)/2);
			if(aux<*(a+m))
			{
				der=m-1;
			}
			else
			{
				izq=m+1;
			}
		}
		j=i-1;
		while(j>=izq)
		{
			*(a+j+1)=*(a+j);
			j=j-1;
		}
		*(a+izq)=aux;
	}
}
//--------------------------------------------------------------------------------------------------
/*Procedimiento en el cual usará todos los metodos de ordenamiento con los primeros 1000 elementos
del archivo "datos.txt".
Nota: La razón por la cual se llama varias veces la funcion Leer(); es para que despues de que
el vector sea organizado por otro metodo este regrese a su estado de desorden y no afecte el 
funcionamiento de los demás metodos de ordenamiento.
*/
void Metodos_tiempo()
{
	float tiempo;				//Variable de tipo float donde se guardara el tiempo
	clock_t inicio,parada;
	int N[8]={1000,2000,10000,20000,50000,100000,200000,400000};
	for(int i=0; i<8; i++)
	{
		int tam=N[i];
		int vector[tam];
		
			//Inserccion directa 
			Leer(vector,tam);
			inicio=clock();							//Tiempo Inicial
			Insercion(vector,tam);					//Llamado de la funcion
			parada=clock();						  	//Tiempo final
			//MostrarVec(vector,tam);
			tiempo=1000L*(parada-inicio)/CLK_TCK; 	//Calcular diferencia tiempo
			matriz_datos[0][i]=tiempo; 				//Se ingresa el tiempo en la matriz
			//
			
			//Burbuja
			Leer(vector,tam);
			inicio=clock();							//Tiempo Inicial
			Burbuja(vector,tam);					//Llamado de la funcion
			parada=clock();						  	//Tiempo final
			//MostrarVec(vector,tam);
			tiempo=1000L*(parada-inicio)/CLK_TCK; 	//Calcular diferencia tiempo
			matriz_datos[1][i]=tiempo; 				//Se ingresa el tiempo en la matriz
			//
			
			//Quicksort
			Leer(vector,tam);
			inicio=clock();							//Tiempo Inicial
			quicksort(vector,0,tam);					//Llamado de la funcion
			parada=clock();						  	//Tiempo final
			//MostrarVec(vector,tam);
			tiempo=1000L*(parada-inicio)/CLK_TCK; 	//Calcular diferencia tiempo
			matriz_datos[2][i]=tiempo; 				//Se ingresa el tiempo en la matriz
			//
			
			//Shellsort
			Leer(vector,tam);
			inicio=clock();							//Tiempo Inicial
			Shell(vector,tam);						//Llamado de la funcion
			parada=clock();						  	//Tiempo final
			//MostrarVec(vector,tam);
			tiempo=1000L*(parada-inicio)/CLK_TCK; 	//Calcular diferencia tiempo
			matriz_datos[3][i]=tiempo; 				//Se ingresa el tiempo en la matriz
			//
			
			//Inserccion
			Leer(vector,tam);
			inicio=clock();							//Tiempo Inicial
			InsBinaria(vector,tam);					//Llamado de la funcion
			parada=clock();						  	//Tiempo final
			//MostrarVec(vector,tam);
			tiempo=1000L*(parada-inicio)/CLK_TCK; 	//Calcular diferencia tiempo
			matriz_datos[4][i]=tiempo;
	}		
}
//--------------------------------------------------------------------------------------------------
/*Procedimiento encargado de la parte grafica de la tabla, este solo se encarga de mostrar los
datos de la matriz "matriz_datos".
Mediante la funcion cuadro(x1,y1,x2,y2,tipo_de_grosor) se crean la mayoria de casillas
pero al superponerse unas con otras se tienen que agregar caracteres en diferentes posiciones
*/
void tabla()
{
	Color(240);
	//Estructura principal
	cuadro(2,1,15,5,1);
	Posicion(3,2);
	printf("M%ctodo de   ",130);
	cuadro(15,1,98,3,1);
	Posicion(16,2);
	printf("                                    ");
	printf("# de datos");
	printf("                                    ");
	Posicion(3,3);
	printf("            ");
	Posicion(3,4);
	printf("Ordenamiento");
	cuadro(15,3,98,5,1);
	Posicion(16,4);
	printf("   mil   %c  2 mil  %c  10 mil  %c  20 mil  %c",179,179,179,179);
	printf("  50 mil  %c 100 mil %c 200 mil %c 400 mil ",179,179,179);
	cuadro(2,5,98,8,1);
	Posicion(3,6);
	printf("Inserci%cn   ",162);
	Posicion(3,7);
	printf("directa     ");
	cuadro(2,8,98,10,1);
	Posicion(3,9);
	printf("Burbuja     ");
	cuadro(2,10,98,12,1);
	Posicion(3,11);
	printf("Quicksort   ");
	cuadro(2,12,98,14,1);
	Posicion(3,13);
	printf("ShellSort   ");
	cuadro(2,14,98,18,1);
	Posicion(3,15);
	printf("ordenamiento");
	Posicion(3,16);
	printf("de inserci%cn",162);
	Posicion(3,17);
	printf("binaria     ");
	//
	
	//Puliendo caracteres
	Posicion(2,5);
	putchar(195);
	Posicion(2,8);
	putchar(195);
	Posicion(2,10);
	putchar(195);
	Posicion(2,12);
	putchar(195);
	Posicion(2,14);
	putchar(195);
	//
	Posicion(15,1);
	putchar(194);
	for(int a=15; a<89; a+=10)
	{	
		if(a!=15)
		{
			Posicion(a,3);
			putchar(194);	
		}
		Posicion(a,5);
		putchar(197);
		Posicion(a,8);
		putchar(197);
		Posicion(a,10);
		putchar(197);
		Posicion(a,12);
		putchar(197);
		Posicion(a,14);
		putchar(197);
		if(a==35)
		{
			a++;
		}
		else if(a==46)
		{
			a++;
		}
		else if(a==57)
		{
			a++;
		}
	}
	//
	Posicion(15,3);
	putchar(195);
	Posicion(15,5);
	putchar(197);
	Posicion(15,8);
	putchar(197);
	Posicion(15,10);
	putchar(197);
	Posicion(15,12);
	putchar(197);
	Posicion(15,14);
	putchar(197);
	//
	for(int b=15; b<98; b++)
	{
		Posicion(b,6);
		putchar(' ');
		Posicion(b,7);
		putchar(' ');
		Posicion(b,9);
		putchar(' ');
		Posicion(b,11);
		putchar(' ');
		Posicion(b,13);
		putchar(' ');
		Posicion(b,15);
		putchar(' ');
		Posicion(b,16);
		putchar(' ');
		Posicion(b,17);
		putchar(' ');
	}
	//
	for(int c=15; c<89; c+=10)
	{	
	
		Posicion(c,6);
		putchar(179);
		Posicion(c,7);
		putchar(179);
		Posicion(c,9);
		putchar(179);	
		Posicion(c,11);
		putchar(179);
		Posicion(c,13);
		putchar(179);
		Posicion(c,15);
		putchar(179);
		Posicion(c,16);
		putchar(179);
		Posicion(c,17);
		putchar(179);
		if(c==35)
		{
			c++;
		}
		else if(c==46)
		{
			c++;
		}
		else if(c==57)
		{
			c++;
		}
	}
	//
	for(int d=15; d<89; d+=10)
	{
		Posicion(d,18);
		putchar(193);
		if(d==35)
		{
			d++;
		}
		else if(d==46)
		{
			d++;
		}
		else if(d==57)
		{
			d++;
		}
	}
	//
	Posicion(98,3);
	putchar(180);
	Posicion(98,5);
	putchar(180);
	Posicion(98,8);
	putchar(180);
	Posicion(98,10);
	putchar(180);
	Posicion(98,12);
	putchar(180);
	Posicion(98,14);
	putchar(180);
	//
	//Imprimir datos de la matriz
	int x=0;
	for(int z1=16; x<8; z1+=10)//Imprimir en z posicion
	{
		Posicion(z1,7);
		cout<<matriz_datos[0][x];
		if(z1==36)
		{
			z1++;
		}
		else if(z1==47)
		{
			z1++;
		}
		else if(z1==58)
		{
			z1++;
		}
		x++;
	}
	//
	x=0;
	for(int z2=16; x<8; z2+=10)//Imprimir en z posicion
	{
		Posicion(z2,9);
		cout<<matriz_datos[1][x];
		if(z2==36)
		{
			z2++;
		}
		else if(z2==47)
		{
			z2++;
		}
		else if(z2==58)
		{
			z2++;
		}
		x++;
	}
	//
	x=0;
	for(int z3=16; x<8; z3+=10)//Imprimir en z posicion
	{
		Posicion(z3,11);
		cout<<matriz_datos[2][x];
		if(z3==36)
		{
			z3++;
		}
		else if(z3==47)
		{
			z3++;
		}
		else if(z3==58)
		{
			z3++;
		}
		x++;
	}
	//
	x=0;
	for(int z4=16; x<8; z4+=10)//Imprimir en z posicion
	{
		Posicion(z4,13);
		cout<<matriz_datos[3][x];
		if(z4==36)
		{
			z4++;
		}
		else if(z4==47)
		{
			z4++;
		}
		else if(z4==58)
		{
			z4++;
		}
		x++;
	}
	//
	x=0;
	for(int z5=16; x<8; z5+=10)//Imprimir en z posicion
	{
		Posicion(z5,17);
		cout<<matriz_datos[4][x];
		if(z5==36)
		{
			z5++;
		}
		else if(z5==47)
		{
			z5++;
		}
		else if(z5==58)
		{
			z5++;
		}
		x++;
	}
	//	
}
