#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int LinearSearch(float *V, int n)
{
	int i=0;
	float x;
	bool flag=false;
	printf("\n Em que posicao se encontra: ");
	scanf("%f", &x);
	do
	{
		if(V[i]==x)
		{
			flag=true;
		}
		else
		i++;
	} while (flag ==false);
	return i;
}

void BinarySearch(float *V, int n)
{
		
}
