#include <iostream>
using namespace std;
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

void Potencia(int x,int y)
{
	int e; 
	if(y<0)
	{
		cout<<"Error exponenten negativo"<<endl;
	}
	else
	{
	e = exp(y,x,1,x);
	cout<<e<<endl;
	}
}

main()
{
	Potencia(2,5);
}
