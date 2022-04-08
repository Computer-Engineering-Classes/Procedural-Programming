#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int n;
		printf("\nInsira o numero: ");
		scanf("%d", &n);
		
		if(n % 2 == 0)
		{
			printf("\nO numero e par.\n\n");
		}
		else
		{
			printf("\nO numero e impar.\n\n");
		}
		
		system("pause");
		exit(0);
	}

