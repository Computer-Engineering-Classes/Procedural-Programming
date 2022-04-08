#include <stdio.h>
#include <stdlib.h>

void sort_crescente(float*, int);
void sort_decrescente(float *, int );
void ShowArray(float *, int );

int main()
{
	float a[5] = {4.5,1.8,-4,5.7,8};
	
	sort_crescente(a,5);
	ShowArray(a,5);
	putch('\n');
	sort_decrescente(a,5);
	ShowArray(a,5);
}

void sort_decrescente(float *dados, int n)
{
	int i, j;
	float aux=0;
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(dados[j]>dados[j-1])
			{
			aux=dados[j];
			dados[j]=dados[j-1];
			dados[j-1]=aux;
			}
		}
	}
}
void sort_crescente(float *dados, int n)
{
	int i, j=0;
	float aux;
	
	for(i=0; i<n-1; i++)
	{
		for(j=i; j<n-1-i; j++)
		{
			if(dados[j]<dados[j-1])
			{
			aux=dados[j];
			dados[j]=dados[j-1];
			dados[j-1]=aux;
			}
		}
	}
}

void ShowArray(float *dados, int n)
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("\n a[%d] = %.1f", i, dados[i]);
	}
}
