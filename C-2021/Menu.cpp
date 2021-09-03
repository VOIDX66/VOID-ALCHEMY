#include "FunG.h"

void Menu()
{	
	//Posiciones
	int x1=5,y1=1,x2=40,y2=20;
	//
	relleno_st(x1,y1,x2,y2,15,8,3);
	Posicion(x1+12,y1+1);
	TextCol("MENU",63);
	
	//Posicion Final
	Posicion(x2+5,y2+5);
	//		
}

main()
{
	Menu();
}
