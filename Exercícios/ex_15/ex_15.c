#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int a, b;
		
		printf("\nInsira dois numeros inteiros distintos: ");
		scanf("%d %d", &a, &b);
		
		if(a<b)
		{
			printf("\nO menor numero e %d\n\n", a);
		}
		else
		{
			printf("O menor numero e %d\n\n", b);
		}
		
		system("pause");
		exit(0);
	}
