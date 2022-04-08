#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, max;
	
	printf("\nInsira o numero de elementos que pretende comparar: ");
	scanf("%d", &max);
	
	float arr[max];
	
	for (i=0; i<max; i++)
	{
		printf("Insira o %d.o numero: ", i+1);
		scanf("%f", &arr[i]);
	}
	
	for (i=1; i<max; i++)
	{
		if(arr[0] < arr[i])
			arr[0] = arr[i];
	}
	
	printf("\nO maior numero e': %.2f\n", arr[0]);
	
	return 0;
}
