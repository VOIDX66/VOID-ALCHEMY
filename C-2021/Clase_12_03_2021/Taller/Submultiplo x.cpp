#include <iostream>
using namespace std;

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

main()
{
	submultiplo(15);
}
