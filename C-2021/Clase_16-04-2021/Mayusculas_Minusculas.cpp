#include <string.h>
#include <stdio.h>

main()
{
	char MiCadena[20];
	strcpy(MiCadena,"HOLA MUNDO");
	printf("Cadena en minuscula: %s\n",MiCadena);
	strlwr(MiCadena);
	printf("Cadena en mayuscula: %s\n",MiCadena);
	
	strcpy(MiCadena,"hola mundo");
	printf("Cadena en minuscula: %s\n",MiCadena);
	strupr(MiCadena);
	printf("Cadena en mayuscula: %s\n",MiCadena);
	
	strcpy(MiCadena,"hola mundo");
	printf("Cadena original: %s\n",MiCadena);
	strrev(MiCadena);
	printf("Cadena invertida: %s\n",MiCadena);
	
}
