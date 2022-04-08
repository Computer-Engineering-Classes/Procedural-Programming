#include <stdio.h>
#include <stdlib.h>

#define N 5

void ShowArray(char *nomes);

void main()
{
	int i=0;
	char nomes[N][30]={"",""};
	
	for(i=0; i<N; i++)
	{
		printf("\n %d.o Nome: ", i+1);
		scanf(" %29[a-zA-Z ]s", &nomes[i]);
	}
	for(i=0; i<N; i++)
	{
		printf("\n %s", &nomes[i]);
	}
}
