#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int a;

		printf("\nInsira um numero inteiro: ");
		scanf("%d", &a);
		
		if(a==0)
		{
			printf("\nO numero e igual a zero.\n\n");
		}
		else
		{
			printf("\nO numero e diferente de zero.\n\n");
		}
		
		system("pause");
		exit(0);
	}

