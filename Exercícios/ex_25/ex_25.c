#include <stdio.h>

int main()
{
	int i = 0;
	int arr[10];
	
	for (i=0; i<10; i++)
	{
		printf("\nInsira um valor inteiro positivo: ");
		scanf("%d", &arr[i]);
		
		if (arr[i] <= 0)
		{
		printf("\nO valor introduzido nao e' inteiro positivo.\n");
		i = i-1;
		}
	}
	
	for (i=0; i<10; i++)
	{
		if (arr[0]>arr[i])
			arr[0] = arr[i];
	}
	
	printf("\nO menor valor introduzido e' %d", arr[0]);
	
	return 0;
}
