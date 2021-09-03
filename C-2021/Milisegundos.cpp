#include <iostream>
#include <time.h>
using namespace std;

main()
{
	float tiempo;
	clock_t inicio,parada;

	int op;
	cin>>op;
	if(op==1)
	{
		inicio=clock();	
	}
	cin>>op;
	if(op==2)
	{
		parada=clock();
		tiempo=1000L*(parada-inicio)/CLK_TCK;
	}
	
	cout<<"Tiempo Milesimas: "<<tiempo<<endl;
	cout<<"Tiempo Segundos: "<<tiempo/1000<<endl;

	
}
