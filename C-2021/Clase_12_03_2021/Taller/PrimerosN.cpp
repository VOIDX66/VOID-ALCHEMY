#include <iostream>
using namespace std;

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
main()
{
	Imp(10);
}

