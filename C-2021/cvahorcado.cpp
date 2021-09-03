/*
-Juego de ahorcado programación 2 
-JAIDER ALBERTO RENDÓN MORENO UNIVERSIDAD TECNOLOGICA DE PEREIRA
*/

//--------------LIBRERIAS--------------------
#include "FunG.h" //Libreria personal
#include<time.h>
using namespace std;
//-------------------------------------------
//-------------INICIO CÓDIGO-----------------

//----------------FUNCIONES------------------
void Ahorcado();
//-------------------------------------------
/*Nombre: Aleatorio
  Parametros: n tipo entero
  Objetivo: Retornar un número aleatorio con
  valor maximo definido como n
  Ejemplo: Aleatorio(10) Retorna un numero
  entre 0 y 10
*/
int Aleatorio(int n)
{
    int num,c;
    srand(time(NULL));
    num=1+rand()%(n-1);
    return(num);
}
//-------------------------------------------

//-------------------------------------------
/*Nombre: SelPal
  Parametros: Mipalabra[20][12] y palsel[12]
  Objetivo: Por medio del parametro Mipalabra[20][12]
  el cual es un array bidimensional se eligira una de
  las filas y el elemento de esta fila será pasado
  caracter a caracter a la variable palsel[12]
  la cual será retornada 
  Ejemplo: SelPal(palabra,palsel) Retorna la variable
  palsel donde esta una de las palabras de la matriz.
*/
char SelPal(char Mipalabra[20][12],char palsel[12])
{
	int i;
	i=Aleatorio(20)-1;
	int dimension=strlen(Mipalabra[i]);
	for(int j=0; j<dimension; j++)
	{
		palsel[j]=Mipalabra[i][j];
	}
	palsel[dimension]='\0';
	return (palsel[dimension]);
}
//-------------------------------------------
char Crearlineas(char palsel[12],char lineas[12])
{
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	
	int tam=strlen(palsel);
	for(int i=0; i<tam; i++)
	{
		lineas[i]=95;	
	}
	lineas[tam]='\0';
	
	return(lineas[tam]);
}
//-------------------------------------------
void horca(int n)
{	
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	
	//Estructura inicial horca
	Posicion(x1+26,y1+5);
	printf("%c",61);
	for(int a=x1+26; a<x1+39; a++)
	{
		Posicion(a,y1+5);
		printf("%c",223);
	}
	for(int b=y1+5; b<y1+20; b++)
	{
		Posicion(x1+26,b);
		printf("%c",219);
	}
	for(int c=x1+19; c<x1+39; c++)
	{
		Posicion(c,y1+20);
		printf("%c",223);
	}
	for(int d=y1+5; d<y1+7; d++)
	{
		Posicion(x1+39,d);
		printf("%c",219);
	}
	//Fin Estrucutra inicial
	//Extremidades
	switch(n)
	{
		case 1:
			for(int e=x1+37; e<x1+41; e++)
			{
				Posicion(e,y1+7);
				printf("%c",223);
			}
			for(int f=y1+7; f<y1+10; f++)
			{
				Posicion(x1+37,f);
				printf("%c",219);
				Posicion(x1+41,f);
				printf("%c",219);
			}
			for(int g=x1+38; g<x1+41; g++)
			{
				Posicion(g,y1+9);
				printf("%c",220);
			}
		break;
		
		case 2:
			for(int h=y1+10; h<y1+15; h++)
			{
				Posicion(x1+39,h);
				printf("%c",219);
			}
		break;
		
		case 3:
			Posicion(x1+38,y1+11);
			printf("%c",219);
			Posicion(x1+37,y1+11);
			printf("%c",220);
			Posicion(x1+37,y1+12);
			printf("%c",219);
			Posicion(x1+37,y1+13);
			printf("%c",223);
		break;
		
		case 4:
			Posicion(x1+40,y1+11);
			printf("%c",219);
			Posicion(x1+41,y1+11);
			printf("%c",220);
			Posicion(x1+41,y1+12);
			printf("%c",219);
			Posicion(x1+41,y1+13);
			printf("%c",223);
		break;
		
		case 5:
			Posicion(x1+38,y1+14);
			printf("%c",220);
			Posicion(x1+38,y1+15);
			printf("%c",219);
			Posicion(x1+37,y1+15);
			printf("%c",220);
			Posicion(x1+37,y1+16);
			printf("%c",219);
		break;
		
		case 6:
			Posicion(x1+40,y1+14);
			printf("%c",220);
			Posicion(x1+40,y1+15);
			printf("%c",219);
			Posicion(x1+41,y1+15);
			printf("%c",220);
			Posicion(x1+41,y1+16);
			printf("%c",219);
		break;	
	}
}
//------------------------------------------
void vidas(int n)
{	
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	
	Posicion(x1+2,y1+2);

	printf("INTENTOS RESTANTES:         ");
	for(int i=1; i<n; i++)
	{	
		Color(244);
		Posicion(x1+22+i,y1+2);
		printf("%c",3);
		Color(ctx);
	}	
	
}
//-------------------------------------------

//-------------------------------------------
void WinGame(int intentos)
{
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	int op;
	Posicion(x1+5,y1+7);
	Color(2);
	printf("GANASTE!!!");
	Color(ctx);
	horca(intentos);
	Posicion(x1,y1+8);
	printf("Desea intentar de nuevo?");
	Posicion(x1,y1+9);
	printf("1.SI   2.NO");
	Posicion(x1,y1+10);
	printf("Opcion: ");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			Ahorcado();
		break;	
		
		case 2:
		break;
		
		default:
			Posicion(x1,y1+12);
			Color(4);
			printf("ENTRADA INVALIDA");
			Color(ctx);
		break;
	}
}
void GameOver(char palabra[12])
{
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	int op;
	Posicion(x1+5,y1+7);
	Color(4);
	printf("PERDISTE!!!");
	Color(ctx);
	horca(6);
	Posicion(x1,y1+8);
	printf("LA PALABRA ERA: %s",palabra);
	Posicion(x1,y1+9);
	printf("Desea intentar de nuevo?");
	Posicion(x1,y1+10);
	printf("1.SI   2.NO");
	Posicion(x1,y1+11);
	printf("Opcion: ");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			Ahorcado();
		break;	
		
		case 2:
		break;
		
		default:
			Posicion(x1,y1+12);
			Color(4);
			printf("ENTRADA INVALIDA");
			Color(ctx);
		break;
	}
}
//--------------------------------------------
int Esp(int n,char comprobar[])
{
	int contador=0;
	char nulo[5]="0";
	int tam=strlen(comprobar);
	for(int i=0; i<tam; i++)
	{
		if(comprobar[i]==nulo[0])
		{
			contador++;
		}
	}
	return (contador);
}
//-------------------------------------------
char LetrasUsa(char letra[],char comprobar[])
{
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	
	int tam=strlen(comprobar);
	char nulo[5]="0";
	int espacios=0;
	
	for(int i=0; i<tam; i++)
	{
		espacios=Esp(espacios,comprobar);
		if(comprobar[i]==letra[0])
		{	
			Posicion(x1+3,y1+14);
			printf("LETRAS USADAS: ");
			Posicion(x1+3+espacios,y1+15);
			printf("%c",comprobar[i]);
			comprobar[i]=nulo[0];
		}
	}
	
	return (comprobar[tam]);
}
//-------------------------------------------

void Buscar(int intentos,char palabra[12],char lineas[12])
{	
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	
	char l[12]; 
	bool estado;
	int rest=7;
	int espacios=0;
	char comprobar[30]="abcdefghijklnmñopqrstwvxyz";
	
	Posicion(x1+3,y1+5);
	printf("%s",lineas);
	
	while(intentos<6)
	{	
		vidas(rest);
		horca(intentos);
		Posicion(x1+2,y1+3);
		printf("Ingrese una letra o una palabra: ");
		Posicion(x1+35,y1+3);
		cout<<"             ";
		Posicion(x1+35,y1+3);
		cin>>l;
		int tam=strlen(l);
		int tam2=strlen(palabra);
		int cont=0;
		int cont2=0;
		int contador=0;
		
		if(tam>1)
		{
			int t1=strlen(palabra);
			int t2=tam;
			if(t1 == t2)
			{
				for(int i=0; i<tam; i++)
				{
					if(l[i]==palabra[i])
					{	
						cont++;	
					}
				}
				if(cont==tam)
				{	
					Posicion(x1+3,y1+5);
					printf("%s",l);
					estado=true;
					WinGame(intentos);
			break;
					
				}
				else
				{
					intentos++;
					rest--;
				}
			}
			else
			{
				intentos++;
				rest--;
			}
		}
		else
		{	
			LetrasUsa(l,comprobar);
			for(int x=0; x<tam2; x++)
			{
				
				if(palabra[x]==l[0])
				{
					lineas[x]=l[0];
					contador=12;
				}
				else
				{	
					contador++; 
				   if(contador==tam2)
				   {
				   		intentos++;
				   		rest--;
				   }
				}
				Posicion(x1+3,y1+5);
				printf("%s",lineas);
			
			}
		}
		
		for(int h=0; h<tam2; h++)
		{
			if(lineas[h]==palabra[h])
		 	{	
				cont2++;	
			}
		}
		if(cont2==tam2)
		{	
			estado=true;
			WinGame(intentos);
			break;
		}
		estado=false;
	}
	horca(intentos);
	if(estado==false)
	{	
		rest--;
		vidas(rest);
		GameOver(palabra);
	}
	Posicion(x1,y2+5);
	Color(0);
}
//-------------------------------------------

//-------------------------------------------
/*Nombre:
  Parametros:
  Objetivo:
  Ejemplo:
*/
//-------------------JUEGO-------------------
void Ahorcado()
{	
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=4,ctx=(colorf*16);
	relleno_st(x1,y1,x2,y2,colorf,colors,colort);

	char palabra[20][12]={"tabaco",
						   "carpeta",
						   "infeliz",
						   "caballos",
						   "extranjero",
						   "biblioteca",
						   "lengua",
						   "tesoro",
						   "fiesta",
						   "profesor",
						   "camiseta",
						   "estufa",
						   "barcos",
						   "locomotora",
						   "bomba",
						   "medallas",
						   "alfiler",
						   "calabaza",
						   "lucifer",
						   "calendario"};
	
	int filas=sizeof(palabra)/sizeof(palabra[0]);
	char palsel[12]; //Aqui se guardara la palabra que se seleccione
	SelPal(palabra,palsel);	//LLamado de la funcion para la seleccion de la palabra:
	//Inicio Cabecera
	Posicion(x1+12,y1+1);				//Posicion del texto
	Color((colort*16)+15);				//Color del texto
	printf("JUEGO AHORCADO");			//Texto en pantalla
	Color(ctx);
	//Fin Cabecera
	int intentos=0;
	char lineas[12];
	Crearlineas(palsel,lineas);	
	Buscar(intentos,palsel,lineas);

							   
	//final
	system("cls");
	Posicion(x1,y2+5);
	Color(15);
	//
}
//-------------------------------------------


main()
{
	Ahorcado();
}
