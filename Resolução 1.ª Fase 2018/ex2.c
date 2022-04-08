#include <stdio.h>
#include <stdlib.h>

void MostrarVetor(int*);

int main()
{
	int v[20], i;
	
	do
	{
		printf("\n Introduza um valor inteiro: ");
		scanf("%d", &v[i]);
		if(i>0 && v[i]<=v[i-1])
		{
			printf("\n Valor invalido!");
			i--;
		}
		i++;
	}while (i<20);

	putchar('\n');
	MostrarVetor(v);
}

void MostrarVetor(int *v)
{
	int i;
	for(i=0; i<20; i++)
	{
		printf(" v[%d] = %d\n", i, v[i]);
	}
}
