#include <iostream>
using namespace std;

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

main()
{
	TablaHN(15);
}
