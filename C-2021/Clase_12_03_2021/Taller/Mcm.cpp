#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;

int MCD(int a, int b)
{
    if(a==0)
	{
    	return b;
    }
    return MCD(b%a,a);
}

void MCM()
{
  int a,b;
    cout<<"N�mero 1: ";
    cin>>a;
    cout<<"N�mero 2: ";
    cin>>b;
    cout<<"El mcm es: "<<(a*b/MCD(a,b));
}


main()
{
	setlocale(LC_CTYPE,"Spanish");
	MCM();
}

