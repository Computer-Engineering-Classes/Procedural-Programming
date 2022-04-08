#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "search.h"
#include "sort.h"
#include "file.h"

void main()
{
	float *V; 
	int n=0, position;
	char output[]="ordenado.txt";
	
	if((V=LoadArray("data.txt", &n))!=NULL)
	{
		ShowArray(V,n);
		position=LinearSearch(V,n);
		if(position>=0 && position<n)
			printf("O valor foi encontrado na posicao %d.", position);
		else 
			printf("O valor nao foi encontrado.");
		SelectionSort(V,n);
		ShowArray(V,n);
	}
	else
	{
		printf("\n Tamanho do Vetor = ");
		scanf("%d", &n);
		V=(float*)malloc(n*sizeof(float));
		CreateArray(V,n);
	}
}
