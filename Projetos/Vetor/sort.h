#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Switch(float *v, float *w)
{
	float aux;
	aux=*v;
	*v=*w;
	*w=aux;
}

void BubbleSort(float *v, int n)
{
	bool flag=true;
	int i=1, j;
	
	while(i<n && flag==true)
	{
		flag=false;
		for(j=0; j<=n-i; j++)
		{
			if(v[j+1]<v[j])
			{
				Switch((v+j+1),(v+j));	
				flag=true;
			}
		}
		i++;
	}
}

void SelectionSort(float *v, int n)
{
	int i, j, min;

	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1; j<=n; j++)
		{
			if(v[j]<v[min])
				min=j;
		}
		if(min!=i)
		{
			Switch((v+i),(v+min));
		}
	}
}

void InsertSort(float *V, int n)
{
	int i,k;
	float x;
	for(i=0;i<n-1;i++)
	{
		if(V[i+1]<V[i])
		{
			k = i;
			x = V[i+1];
		while((k>=0) && (V[k]>x))
		{ 
			V[k+1] = V[k];
			k--;
		}
		V[k+1] = x;
		}
	}
}

void Invert(float *v, int n)
{
	int i;
	
	for(i=0; i<n/2; i++)
	{
		Switch((v+i),(v+n-1-i));
	}
}
