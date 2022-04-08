#include <stdio.h>
#include <stdlib.h>

int main()
	{
		float a;

		printf("\nInsira um valor: ");
		scanf("%f", &a);
		
		if(a==0)
		{
			printf("\nO numero e igual a zero.\n\n");
		}
		else if(a<0)
		{
			printf("\nO numero e negativo.\n\n");
		}
		else
		{
			printf("\nO numero e positivo.\n\n");
		}
		
		system("pause");
		exit(0);
	}

