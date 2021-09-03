#include <iostream>
#include "FunG.h"
using namespace std;

void Menu();
void Triangulo();
void Comision();
void Seleccion();

main()
{
	Menu();
}



void Menu()//Procedimineto para menu principal
{	
	Limpiar();
	//Posiciones
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=3,ctx=(colorf*16);
	//
	relleno_st(x1,y1,x2,y2,colorf,colors,colort);
	
	//Inicio Cabecera
	Posicion(x1+16,y1+1);					//Posicion del texto
	Color((colort*16)+15);					//Color del texto
	printf("MEN%c PRINCIPAL",233);			//Texto en pantalla
	//Fin Cabecera
	
	//Inicio Opciones
	//1
	Posicion(x1,y1+3);						//Posicion del texto
	Color(ctx);								//Color del texto
	printf("1-Calcular comision vendedores.");	//Texto en pantalla
	//2
	Posicion(x1,y1+4);
	printf("2-Seleccion atleta maraton internacional.");
	//3
	Posicion(x1,y1+5);
	printf("3-Triangulo con n niveles.");
	//Salir
	Posicion(x1,y1+6);
	printf("4-Salir.");
	//
	//Fin opciones
	//Elegir Opción
	Posicion(x1,y1+8);
	printf("Elija una opci%cn (1-4): ",162);
	int op;
	scanf("%d",&op);
	//

	//Switch para los opciones
	switch(op)
	{
		case 1:
			Comision();
			Color(244);
			Posicion(x1,y1+20);
			printf("Presione una tecla para continuar...");
			getch();
			Menu();
		break;
		
		case 2:
			Seleccion();
			Color(244);
			Posicion(x1,y1+20);
			printf("Presione una tecla para continuar...");
			getch();
			Menu();
		break;
		
		case 3:
			Triangulo();
			Color(244);
			Posicion(x1,y1+20);
			printf("Presione una tecla para continuar...");
			getch();
			Menu();
		break;
		
		case 4:
		break;	
		
		default:
			Posicion(x1,y1+10);
			Color(244);
			printf("Entrada invalida!!!");
			Posicion(x1,y1+11);
			printf("Presione una tecla para continuar...");
			getch();
			Menu();
		break;
	}
	//Ajuste final de posicion y color
	Color(15);
	Posicion(x2+5,y2+5);
	//
}

//1-Comision
void Comision()
{
	Limpiar();
	//Posiciones
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=3,ctx=(colorf*16);
	//
	relleno_st(x1,y1,x2,y2,colorf,colors,colort);
	
	//Inicio Cabecera
	Posicion(x1+16,y1+1);					//Posicion del texto
	Color((colort*16)+15);					//Color del texto
	printf("1-COMISION");			//Texto en pantalla
	//Fin Cabecera
	
	//Estructura
	int ni,n, cedula=0;
	float total_ventas=0,total_comision=0,valor_ventas=0,comision=0;
	char Nombre[30];
	Color(ctx);
	Posicion(x1,y1+3);
	printf("Ingrese el numero de vendedores: ");
	scanf("%d",&n);
	getchar();
	ni=n;
	
	while(0 < n)
	{	
		Limpiar();
		//Inicio Cabecera
		
		//Posiciones
		int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=3,ctx=(colorf*16);
		//
		relleno_st(x1,y1,x2,y2,colorf,colors,colort);
		
		Posicion(x1+16,y1+1);					//Posicion del texto
		Color((colort*16)+15);					//Color del texto
		printf("1-COMISION");			//Texto en pantalla
		//Fin Cabecera
	
		//
		Color(ctx);
		Posicion(x1,y1+5);
		printf("Vendedor #%d",n);
		Posicion(x1,y1+6);
		printf("Ingrese la cedula: ");
		scanf("%d",&cedula);
		getchar();
		Posicion(x1,y1+8);
		printf("Ingrese el nombre: ");
		gets(Nombre);
		Posicion(x1,y1+9);
		printf("Ingrese el valor de sus ventas: ");
		scanf("%f",&valor_ventas);
		getchar();
		if(valor_ventas<=100000)
		{
			comision=valor_ventas*0.025;
		}
		else
		{
			if(valor_ventas>100000 && valor_ventas<500000)
			{
				comision=valor_ventas*0.055;
			}
			else
			{
				if(valor_ventas>=500000)
				{
					comision=valor_ventas*0.075;	
				}	
			}
		}
		Posicion(x1,y1+11);
		printf("Nombre: %s",Nombre);
		Posicion(x1,y1+12);
		printf("Cedula: %d",cedula);
		Posicion(x1,y1+13);
		printf("Valor ventas: %f",valor_ventas);
		Posicion(x1,y1+14);
		printf("Comision individual: %f",comision);
		total_comision=total_comision+comision;
		total_ventas=total_ventas+valor_ventas;
		getch();
		n--;
	}
	Limpiar();
	Posicion(x1+16,y1+1);					//Posicion del texto
	Color((colort*16)+15);					//Color del texto
	printf("1-COMISION");			//Texto en pantalla
	//Fin Cabecera
	
	//Posiciones
	relleno_st(x1,y1,x2,y2,colorf,colors,colort);
	
	//
	Color(ctx);
	Posicion(x1,y1+5);
	printf("Numero de vendedores: %d",ni);
	Posicion(x1,y1+8);
	printf("Total de ventas: %f",total_ventas);
	Posicion(x1,y1+9);
	printf("Total comisiones: %f",total_comision);
	
	
}
//

//4-Seleccion
void Seleccion()
{
	Limpiar();
	//Posiciones
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=3,ctx=(colorf*16);
	//
	relleno_st(x1,y1,x2,y2,colorf,colors,colort);
	
	//Inicio Cabecera
	Posicion(x1+16,y1+1);					//Posicion del texto
	Color((colort*16)+15);					//Color del texto
	printf("2-SELECCION");			//Texto en pantalla
	//Fin Cabecera
	
	//Estructura
	int edad, sexo, tiempo=0,n=1,cat1h=0,cat2h=0,catm=0,capt=0;
	char Nombrex[30];
	
	do{
		Limpiar();
		//Inicio Cabecera
		
		//Posiciones
		int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=3,ctx=(colorf*16);
		//
		relleno_st(x1,y1,x2,y2,colorf,colors,colort);
		
		Posicion(x1+16,y1+1);					//Posicion del texto
		Color((colort*16)+15);					//Color del texto
		printf("2-SELECCION");			//Texto en pantalla
		//Fin Cabecera
	
		//
		Color(ctx);
		Posicion(x1,y1+2);
		printf("Ingrese el numero de atletas: ");
		scanf("%d",&n);
		getchar();
		Posicion(x1,y1+5);
		printf("Atleta #%d",n);
		Posicion(x1,y1+7);
		printf("Ingrese su nombre: ");
		scanf("%s",&Nombrex);
		getchar();
		Posicion(x1,y1+9);
		printf("Ingrese su sexo (1=Mujer,2=Hombre): ");
		scanf("%d",&sexo);
		getchar();
		Posicion(x1,y1+11);
		printf("Ingrese su edad: ");
		scanf("%d",&edad);
		getchar();
		Posicion(x1,y1+13);
		printf("Ingrese su tiempo en minutos: ");
		scanf("%d",&tiempo);
		getchar();
		
		if(sexo==1)
		{
			if(tiempo<=180)
				{
					Posicion(x1,y1+15);
					printf("Es apta");
					catm++;	
				}
				else
				{
					Posicion(x1,y1+15);
					printf("no es apta");
				}
		}
		else
		{
			if(sexo==2)
			{
				if(edad<40)
				{
					if(tiempo<=150)
					{
						Posicion(x1,y1+15);
						printf("Es apto");
						cat1h++;
					}
					else
					{
						Posicion(x1,y1+15);
						printf("No es apto");
					}
				}
				else
				{
					if(edad>=40)
					{
						if(tiempo<=175)
						{
							Posicion(x1,y1+15);
							printf("Es apto");
							cat2h++;	
						}
						else
						{
							Posicion(x1,y1+15);
							printf("No es apto");
						}
					}
				}
			}
		}
		capt=cat1h+cat2h+catm;
		getch();
		n--;
	  }
	  while(0 < n);
	  		
		Limpiar();
		relleno_st(x1,y1,x2,y2,colorf,colors,colort);
		
		Posicion(x1+16,y1+1);					//Posicion del texto
		Color((colort*16)+15);					//Color del texto
		printf("2-SELECCION");			//Texto en pantalla
		//Fin Cabecera
	
		//
		Color(ctx);
		Posicion(x1,y1+5);
		printf("Cantidad de atletas aptos: %d",capt);
		Posicion(x1,y1+7);
		printf("Mujeres: %d",catm);
		Posicion(x1,y1+8);
		printf("Hombres menores de 40: %d",cat1h);
		Posicion(x1,y1+9);
		printf("Hombres mayores de 40: %d",cat2h);
}
//3-Triangulo
void Triangulo()
{
	Limpiar();
	//Posiciones
	int x1=5,y1=1,x2=50,y2=22,colorf=15,colors=8,colort=3,ctx=(colorf*16);
	//
	relleno_st(x1,y1,x2,y2,colorf,colors,colort);
	
	//Inicio Cabecera
	Posicion(x1+16,y1+1);					//Posicion del texto
	Color((colort*16)+15);					//Color del texto
	printf("3-TRIANGULO");			//Texto en pantalla
	//Fin Cabecera
	
	//Estructura
	int n;
	Color(ctx);
	Posicion(x1,y1+3);
	printf("Ingrese el numero de niveles: ");
	scanf("%d",&n);
	getchar();
	
	for(int f=0; f<=n ;f++) //Ciclo for para la posicion de la fila 
	{
		for(int c=0; c<f; c++) //ciclo for anidado para la posicion de las columnas
		{
			Posicion(x1+c,y1+f+5);
			printf("*");
		}
	}
	
}
//
