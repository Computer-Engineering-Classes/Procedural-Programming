#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float a, b, c;
		
		printf("\nInsira 3 numeros distintos: ");
		scanf("%f %f %f", &a, &b, &c);
		
		if(a>b && a>c)
		{
			printf("\nO maior numero e %f\n\n", a);
		}
		
		else if(b>a && b>c)
		{
			printf("\nO maior numero e %f\n\n", b);
		}
		
		else
		{
			printf("\nO maior numero e %f\n\n", c);
		}
		
		system("pause");
		exit(0);
	}
