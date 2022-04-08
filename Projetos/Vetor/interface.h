#include <stdio.h>
#include <stdlib.h>

void CreateArray(float *V, int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
	printf("\n V[%d] = ", i);
	scanf("%f", &V[i]);
	}
}
void ShowArray(float *V, int n)
{
	int i;
	for(i=0; i<n; i++)
		printf(" V[%d] = %.2f\n", i, V[i]);
}
