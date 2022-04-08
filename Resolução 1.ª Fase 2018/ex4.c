#include <stdio.h>

void Vetor(int*, int*);
void ShowVetor(int*, int);

void main(void)
{
	int n=10;
	int v[10]={2,13,5,4,20,17,5,12,10,3};
	
	ShowVetor(v,n);
	Vetor(v, &n);
	putchar('\n');
	ShowVetor(v,n);
}

void Vetor(int *v, int *n)
{
	int i, j;
	
	for(i=0; i<*n; i++)
	{
		if(v[i]<10||v[i]>20)
		{
			for(j=i; j<*n; j++)
			{
				v[j]=v[j+1];
			}
			(*n)--;
			i--;
		}
	}
}

void ShowVetor(int *v, int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("\n v[%d] = %d", i, v[i]);
}
