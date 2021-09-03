//Parcial 1 Programación 2 Jaider Alberto Rendón Moreno
#include <iostream>
using namespace std;

void Dec_Bin(int n);
int notas(int c,int ite);
void Promedio();
int Num_Dig(int n);
int Inv(int a, int b);

void Menu() //Procedimiento para el menú del programa
{
	int op,n;
	
	cout<<"**Menu**"<<endl;
	cout<<"1. Promedio notas"<<endl;
	cout<<"2. Base 10 a binario"<<endl;
	cout<<"3. Cantidad de digitos de un numero entero"<<endl;
	cout<<"4. Devolver un numero de cuatro digitos al reves"<<endl;	
	cout<<"5. Salir"<<endl;
	cout<<"Elija una opcion: (1-5): ";
	cin>>op;
	
	switch(op)
	{
		case 1:
			Promedio();
			system("pause");
			system("cls");
			Menu();
		break;	
		
		case 2:
			cout<<"Introduce un numero en base 10: ";
			cin>>n;
			cout<<"El numero "<<n<<" en binario es: ";
			Dec_Bin(n);
			cout<<endl;
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 3:
			cout<<"Introduzca un numero entero: ";
			cin>>n;
			if(n<0)
			{
				cout<<"Error, entrada invalida"<<endl;
				system("pause");
				system("cls");
				Menu();
			}
			else
			{
				cout<<"Tiene "<<Num_Dig(n)<<endl;	
			}
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 4:
			cout<<"Ingrese un numero de cuatro cifras: ";
			cin>>n;
			if(Num_Dig(n)<4 || Num_Dig(n)>4)
			{
				cout<<"El numero ingresado no es de cuatro digitos"<<endl;
				system("pause");
				system("cls");
				Menu();	
			}
			else
			{
			cout<<"Numero invertido: "<<Inv(n,0)<<endl;;
			}
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 5:
		break;
		
		default:
			cout<<"Opcion invalida"<<endl;
			system("pause");
			system("cls");
			Menu();
		break;	
	}
}



main()
{
	Menu();
}
//Ejercicio 1
void Dec_Bin(int n)
{
	if(n>0)
	{
		Dec_Bin(n/2);
		cout<<(n%2);
	}
}
//

//Ejercicio 2
int notas(int c,int ite)
{
	int nota;
	if(ite>4)
	{
		return nota;
	}
	else
	{
		cout<<"Ingrese la nota #"<<ite<<": ";
		cin>>nota;
		if(nota>5 || nota<0)
		{
			cout<<"Error nota invalida"<<endl;
			system("pause");
			system("cls");
			Menu();
		}
		else
		{
			return(nota+notas(c,ite+1));	
		}
	}
}

void Promedio()
{
	float total;
	total=notas(0,1);
	total=total/4;
	if(total>=3)
	{
		cout<<"Ganaste"<<endl;
		system("pause");
		system("cls");
		Menu();
	}
	else
	{
		cout<<"Perdiste"<<endl;
		system("pause");
		system("cls");
		Menu();
	}
}
//

//Ejercicio 3
int Num_Dig(int n)
{
	if(n<10)
	{
		return 1;
	}
	else
	{
		return(1+Num_Dig(n/10));
	}	
}
//

//Ejercicio 4
int Inv(int a, int b){
	if(a>0)
	 return Inv(a/10, a%10+b*10);
	else
	 return b;
}
//
