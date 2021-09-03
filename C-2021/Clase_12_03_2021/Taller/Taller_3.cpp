#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
void Menu();
void nv(int n);
void printInt(int act,int n);
void Imp (int n);
void tablau (int a, int b);
int tab(int a,int b, int n);
int TablaHN(int n);
int suma(int n);
int factorial(int n);
int exp(int e, int b, int c, int n);
int Potencia(int x,int y);
int sumapot(int n);
int par(int a);
int subm(int x,int n);
void submultiplo(int x);
int primo(int a);
int fib(int n);
int fib(int a,int b, int l,int lo);
void Nfib();
int MCD(int a, int b);
void MCM();
void T_Hanoi(int n,char A,char C,char B);
void Hanoi();


main()
{
	setlocale(LC_CTYPE,"Spanish");
	Menu();
}
void Menu()
{
    int op,n,a,b;
    cout<<"Taller #3 Funciones recursivas en C++"<<endl;
    cout<<endl;
    cout<<"1. Mensaje 'hola' n veces"<<endl;
    cout<<"2. Primeros N números enteros"<<endl;
    cout<<"3. Tabla de multiplicar de N"<<endl;
    cout<<"4. Tablas de multiplicar de 1 hasta N"<<endl;
    cout<<"5. Sumatoria de números hasta N"<<endl;
    cout<<"6. Factorial de un númnero X"<<endl;
    cout<<"7. Sumatoria de números entre 1 y n expresados x^x"<<endl;
    cout<<"8. Elevar un número 'x' a la 'y'"<<endl;
    cout<<"9. Comprobar su un número es par o impar"<<endl;
    cout<<"10.Submultiplos de un número x"<<endl;
    cout<<"11.Comprobar si un número es primo"<<endl;
    cout<<"12.n-ésimo número de la serie de Fibonacci"<<endl;
    cout<<"13.Primeros n números de la serie de Fibonacci"<<endl;
    cout<<"14.mcm de a y b"<<endl;
    cout<<"15.MCD de a y b"<<endl;
    cout<<"16.Solución de torres de Hanoi para n discos"<<endl;
    cout<<"17.Salir"<<endl;
    cout<<"Ingrese su opción: ";
    cin>>op;

	switch(op)
	{
		case 1:
			cout<<endl;
			cout<<"Ingrese un número: "<<endl;
			cin>>n;
			cout<<endl;
			nv(n);
			system("pause");
			system("cls");
			Menu();
		break;
			
		case 2:
			cout<<endl;
			cout<<"Ingrese un número: "<<endl;
			cin>>n;
			cout<<endl;
			Imp(n);
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 3:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>a;
			cout<<endl;
			tablau(a,1);
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 4:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			TablaHN(n);
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 5:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			cout<<suma(n)<<endl;
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 6:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			cout<<factorial(n)<<endl;
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 7:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			cout<<sumapot(n)<<endl;
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 8:
			cout<<endl;
			cout<<"Ingrese la base:";
			cin>>n;
			cout<<"Ingrese el exponente:";
			cin>>a;
			cout<<endl;
			if(a<0)
			{
				cout<<"Error exponente negativo"<<endl;
				system("pause");
				system("cls");
				Menu();
			}
			else
			{
				if(a==0)
				{
					cout<<"0"<<endl;
				}
				else
				{
				cout<<Potencia(n,a)<<endl;
				system("pause");
				system("cls");
				Menu();
				}
			}
			
		break;
		
		case 9:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			par(n);
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 10:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			submultiplo(n);
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 11:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			primo(n);
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 12:
			cout<<endl;
			cout<<"Ingrese un numero:";
			cin>>n;
			cout<<endl;
			cout<<fib(n-1)<<endl;
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 13:
			Nfib();
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 14:
			MCM();
		break;
		
		case 15:		
			cout<<endl;
	    	cout<<"Número 1: ";
	    	cin>>a;
	    	cout<<"Número 2: ";
	    	cin>>b;
	    	cout<<MCD(a,b)<<endl;
	    	system("pause");
			system("cls");
			Menu();
		break;
		
		case 16:
			Hanoi();
			system("pause");
			system("cls");
			Menu();
		break;
		
		case 17:
		break;
		
		default:
			cout<<"Opción invalida"<<endl;
			system("pause");
			system("cls");
			Menu();
		break;	
	}
}

//1
void nv(int n)
{
	if(n>0)
	{
		cout<<"hola "<<endl;
		nv(n-1);
	}
}
//

//2
void printInt(int act,int n)
{
	if(act<=n)
	{
		cout<<act<<endl;
		printInt(act+1,n);
	}
}

void Imp (int n)
{
	int act = 1;
	printInt(act,n);
}
//

//3
void tablau (int a, int b)
{
	if (b<=10)
	{
	cout<<a<<"x"<<b<<"="<<a*b<<endl;
	tablau (a,b+1);
	}
}
//

//4
int tab(int a,int b, int n)
{
    if (b<=10)
	{
    	cout<<a<<"x"<<b<<"="<<a*b<<endl;
    	tab(a,b+1,n);
	}
	else
	{
    	if (a==n)
    	cout<<"";
    else
    {
    	cout<<endl;
      	tab(a+1,1,n);
 	}
	}
    return 0;
}

int TablaHN(int n)
{
	tab(1,1,n);
}
//

//5
int suma(int n)
{
	
	if(n>0)
	{	
		return(n+suma(n-1));	
	}
}
//

//6
int factorial(int n)
{
	int fa;
	if(n == 0)
	{
		return (1);
	}
	else
	{
	fa=n*factorial(n-1);
	}
	return(fa);
}
//

//7
int sumapot(int n)
{
	int c;
	c=Potencia(n,n);
	if(n>1){	
		return(c+sumapot(n-1));	
	}
}
//

//8
int exp(int e, int b, int c, int n)
{
     if(e==0)
         {
             return 1;
        }
        else{
            if(c==e)
            {
                return b;
            }
            else
            {
            b = exp(e,n*b,c+1,n);
            }
        }
}

int Potencia(int x,int y)
{
    int e; 
    e = exp(y,x,1,x);
    return e;
}
//

//9
int par(int a)
{
	if(a%2==0){
		cout<<"Es par"<<endl;
	}
	else
	cout<<"Es impar"<<endl;
	
	return 0;
}
//

//10
int subm(int x,int n)
{

	if(x>n)
	{
		
	 	if(x%n==0)
	 	{	
			cout<<"["<<n<<"]"<<" Porque esta "<<(x/n)<<" veces en "<<x<<endl;
			subm(x,n+1);
		}
		else
		{
			subm(x,n+1);
		}
	}
	return 0;	
}

void submultiplo(int x)
{
	cout<<"Los submultiplos de "<<x<<" son :"<<endl;
	subm(x+0.0,1);
}
//

//11
int primo(int a){
	int nu=2;
	bool as=true;
	
	while(as && nu<a)
	{
		if(a%nu==0)
		as=false;
		else
		nu=nu+1;
	}
	if (as)
	{
		cout<<"Es primo"<<endl;
	}
	else
	{
		cout<<"No es primo"<<endl;
		return 0;	
	}
}
//

//12
int fib(int n)
{
if(n>1){
    return fib(n-1) + fib(n-2);
    }
    else
    {
        if(n==1)
        {
            return 1;
        }
        else
        {
            if(n==0)
            {
                return 0;
            }
        }

    }
}
//

//13
int fib(int a,int b, int l,int lo) 
{
    int c=a+b;
    if(l>lo+1){
    if(a == 0)
    {
        cout<<a<<" ";
        cout<<b<<" ";
    }
       cout<<c<<" ";
        fib(b,c,l,lo+1);
}
else
cout<<" Fin";
}
void Nfib()
{
    int a;
    cout<<endl;
    cout<<"Ingrese un numero:";
    cin>>a;
    if(a>2)
    {
    fib(0,1,a,1);
    }
    else
    {
        if(a==1)
        {
            cout<<"0 Fin"<<endl;
        }
        else
        {
            if(a==2)
            {
                cout<<"0 1 Fin"<<endl;
            }
        }
    }
}
//

//14
void MCM()
{
  int a,b;
 	cout<<endl;
    cout<<"Número 1: ";
    cin>>a;
    cout<<"Número 2: ";
    cin>>b;
    cout<<"El mcm es: "<<(a*b/MCD(a,b));
}
//

//15
int MCD(int a, int b)
{
    if(a==0)
	{
    	return b;
    }
    return MCD(b%a,a);
}
//

//16
void T_Hanoi(int n,char A,char C,char B)
{
	if(n==1)
	{
		cout<<"Mover el disco "<<n<<" desde "<<A<<" hasta "<<C<<endl;
	}
	else
	{
		T_Hanoi(n-1,A,B,C);
		cout<<"Mover el disco "<<n<<" desde "<<A<<" hasta "<<C<<endl;
		T_Hanoi(n-1,B,C,A);
	}	
}

void Hanoi()
{
	int n;
	char A,B,C;
	cout<<endl;
	cout<<"Las torres son A B C respectivamente"<<endl;
	cout<<"Ingrese el número de discos: "<<endl;
	cin>>n;
	T_Hanoi(n,'A','C','B');
}
//
