#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num, soma=0, media;
	int k=0;
	
	printf("\n Insira numeros aleatorios: ");
	
	do
	{
		scanf("%f", &num);
		soma+=num;
		k++;
	}	while (num!=-1);
	
	media = soma/k;
	
	printf("\n Media = %f\n N.o de valores introduzidos = %d\n", media, k);
	
	return 0;
}
