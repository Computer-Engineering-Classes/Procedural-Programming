#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;
	
	printf("\nInsira as dimensoes dos lados do triangulo: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a+b<=c || a+c<=b || b+c<=a)
		{
			printf("\nOs segmentos de reta nao permitem formar um triangulo.\n\n");
		}
	else
	{
	a=a*a;
	b=b*b;
	c=c*c;
		
	if(a==b+c||b==a+c||c==a+b)
	
	{
		printf("\nTrata-se de um triangulo retangulo.\n\n");
	}
	
	else
	{
		printf("\nNao se trata de um triangulo retangulo.\n\n");
	}
	}
	
	system("pause");
	exit(0);
}
