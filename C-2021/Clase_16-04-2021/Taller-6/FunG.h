#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
using namespace std;

void Posicion(int PosX,int PosY)
{
	HANDLE hConsoleOutput;
	COORD coord;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	
	coord.X = PosX; coord.Y = PosY;
	SetConsoleCursorPosition(hConsoleOutput, coord);
}

void cuadro(int x1, int y1, int x2, int y2,int tipo)
{
	switch(tipo)
	{
		case 1:
			Posicion(x1,y1);
		cout<<(char)218;
		for(int i=x1+1; i<=x2-1;i++)
		{
			Posicion(i,y1);
			cout<<(char)196;
			Posicion(i,y2);
			cout<<(char)196;
		}
		Posicion(x2,y1);
		cout<<(char)191;
		for(int i=y1+1; i<=y2-1; i++)
		{
			Posicion(x1,i);
			cout<<(char)179;
			Posicion(x2,i);
			cout<<(char)179;
		}
		Posicion(x1,y2);
		cout<<(char)192;
		Posicion(x2,y2);
		cout<<(char)217;
		break;
		
		case 2:
		Posicion(x1,y1);
		cout<<(char)201;
		for(int i=x1+1; i<=x2-1;i++)
		{
			Posicion(i,y1);
			cout<<(char)205;
			Posicion(i,y2);
			cout<<(char)205;
		}
		Posicion(x2,y1);
		cout<<(char)187;
		for(int i=y1+1; i<=y2-1; i++)
		{
			Posicion(x1,i);
			cout<<(char)186;
			Posicion(x2,i);
			cout<<(char)186;
		}
		Posicion(x1,y2);
		cout<<(char)200;
		Posicion(x2,y2);
		cout<<(char)188;
		break;
		
		default:
		break;	
	}
}

void Color(int c)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void relleno(int x1,int y1,int x2,int y2,int Col)
{	
	//fila
	for(int f = 1; f <=y2 ; f++)
	{
		Posicion(x1,y1+f);
		//Columna
		for(int c = 1; c <= x2; c++)
		{	
			Color(Col);
			cout<<(char)219;
		}
	}
	Color(15);
}

void relleno_s(int x1,int y1,int x2,int y2,int Col_F, int Col_S)
{	
//Inicio Sombra
	//fila
	for(int f = 2; f <=y2+1 ; f++)
	{
		Posicion(x1,y1+f);
		//Columna
		for(int c = 2; c <= x2+1; c++)
		{	
			Color(Col_S);
			cout<<(char)219;
		}
	}
//Fin Sombra
	
//Inicio Fondo
	for(int f = 1; f <=y2 ; f++)
	{
		Posicion(x1-1,y1+f);
		//Columna
		for(int c = 1; c <= x2; c++)
		{	
			Color(Col_F);
			cout<<(char)219;
		}
	}
//Fin Fondo
	Posicion(x2+10,y2+10);
	Color(15);	
}

void relleno_st(int x1,int y1,int x2,int y2,int Col_F, int Col_S, int Col_T)
{	
//Inicio Sombra
	//fila
	for(int f = 2; f <=y2 ; f++)
	{
		Posicion(x1,y1+f);
		//Columna
		for(int c = 2; c <= x2+1; c++)
		{	
			Color(Col_S);
			cout<<(char)219;
		}
	}
	
	//Fila final
	for(int f = y2+1; f <=y2+1 ; f++)
	{
		Posicion(x1,y1+f);
		//Columna
		for(int c = 2; c <= x2+1; c++)
		{	
			Color(Col_S);
			cout<<(char)223;
		}
	}
	
//Fin Sombra
	
//Inicio Fondo
	for(int f = 1; f <=y2 ; f++)
	{
		Posicion(x1-1,y1+f);
		//Columna
		for(int c = 1; c <= x2; c++)
		{	
			Color(Col_F);
			cout<<(char)219;
		}
	}
//Fin Fondo

//Inicio Titulo
for(int f = 1; f <2 ; f++)
	{
		Posicion(x1-1,y1+f);
		//Columna
		for(int c = 1; c <= x2; c++)
		{	
			Color(Col_T);
			cout<<(char)219;
		}
	}
//Fin Titulo
	Posicion(x2+10,y2+10);
	Color(15);	
}

void tabla(int x1, int y1, int x2, int y2, int filas, int columnas, int borde)
{
 int d=0;
	int AuX1=x1; //Variable Acumuladora
	int AuX2=x2;
	int AuY1=y1;
	int AuY2=y2;
	int DifX=x2-x1;
	
	for(int f = 1; f<=filas; f++)
	{
		for(int c = 1; c<=columnas; c++)
		{
			cuadro(x1,y1,x2,y2,borde); //Se crea el cuadrado
			x1=x2+1; //Se modifica el valor de x1
			x2=DifX+x2+1;
		}
		x1=AuX1;
		x2=AuX2;
		y1=y2+1;
		y2=AuY2+y2+1;
	/*	d=d+1;
		cout<<d;
		Contar
	*/	
	}
}	
