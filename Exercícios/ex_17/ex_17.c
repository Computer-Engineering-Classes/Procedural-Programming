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
		
		else
		{
			printf("\nOs segmentos de reta permitem formar um triangulo.\n\n");
		}
		
		system("pause");
		exit(0);
	}
