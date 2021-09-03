#include <iostream>
using namespace std;

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

void printfact(int x)
{
	cout<<factorial(x)<<endl;
}

main()
{
	printfact(5);
}

