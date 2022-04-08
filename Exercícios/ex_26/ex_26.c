#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, max;
	
	printf("\nInsira o numero de elementos que pretende comparar: ");
	scanf("%d", &max);
	
	int arr1[max], arr2[max];
	
	for (i=0; i<max; i++)
	{
		printf("Insira o %d.o numero positivo: ", i+1);
		scanf("%d", &arr1[i]);
	}
	
	for(i=0; i<max; i++)
    {
        arr2[i] = arr1[i];
    }
	
	for (i=0; i<max; i++)
	{
		if (arr1[0]>arr1[i])
			arr1[0] = arr1[i];
	}
	
	for (i=1; i<max; i++)
	{
		if(arr2[0] < arr2[i])
			arr2[0] = arr2[i];
	}
	
	printf("\nO maior numero e' %d e o menor numero e' %d.\n", arr2[0], arr1[0]);
	
	return 0;
}
