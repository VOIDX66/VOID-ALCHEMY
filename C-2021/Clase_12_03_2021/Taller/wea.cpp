#include <iostream>
using namespace std;
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

void fibn()
{
int a,b;
cout<<"Ingrese un numero: ";
cin>>a;
b=fib(a-1);
cout<<b;	
}

main()
{
fibn();
}
