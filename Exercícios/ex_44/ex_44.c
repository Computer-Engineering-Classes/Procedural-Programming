#include <stdio.h>
#include <stdlib.h>

float maior(float, float, float);

int main()
{
	float a, b, c;
	
	printf("\n Introduza 3 numeros reais: ");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("\n O maior dos 3 numeros e' %.2f.\n",	maior(a,b,c));
	
	return 0;
}

float maior(float a, float b, float c)
{
	if(a>=b && a>=c)
		return a;
	else if(b>=a && b>=c)
		return b;
	else
		return c;
}
