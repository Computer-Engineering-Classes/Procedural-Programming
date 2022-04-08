#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c;
	
	printf("\nInsira 3 valores para lados de um triangulo: ");
	scanf("%f %f %f", &a, &b, &c);
		
	
	if(a+b<=c || a+c<=b || b+c<=a)
	{
		printf("\nOs segmentos de reta nao permitem formar um triangulo.\n\n");
	}
		
	else if(a==b && b==c)
	{
		printf("\nO triangulo e equilatero.\n\n");
	}
	
	else if(a==b || a==c || b==c)
	{
		printf("\nO triangulo e isosceles.\n\n");
	}
	
	else
	{
		printf("\nO triangulo e escaleno.\n\n");
	}
	
	system("pause");
	exit(0);
}
