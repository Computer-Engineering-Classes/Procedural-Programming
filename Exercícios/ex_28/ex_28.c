#include <stdio.h>
#include <stdlib.h>

int ex28(int max)
{
	int i=0, soma=0;
	
	for (i=1; i<=max; i++)
	{
		soma += i;
	}
	return soma;
}

void main(void)
{
	int soma=0, max=200;
	
	printf("\nNumero de elementos inteiros positivos a somar: ");
	scanf("%d", &max);
	soma = ex28(max);
	
	printf("\nA soma de %d numeros = %d\n\n", max, soma);
	
	system("pause");
}
