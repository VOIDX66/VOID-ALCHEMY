#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;


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
	
	cout<<"Las torres son A B C respectivamente"<<endl;
	cout<<"Ingrese el número de discos: "<<endl;
	cin>>n;
	T_Hanoi(n,'A','C','B');
}
main()
{
	setlocale(LC_CTYPE,"Spanish");
	Hanoi();
}
