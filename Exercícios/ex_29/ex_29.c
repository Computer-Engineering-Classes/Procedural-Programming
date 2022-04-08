#include <stdio.h>
#include <stdlib.h>

int ex29(int max)
{
	int i=0, soma=0;
	
	for (i=2; i<=2*max; i+=2)
	{
		soma += i;
	}
	return soma;
}

void main(void)
{
	int soma=0, max=200;
	
	printf("\nNumero de elementos pares positivos a somar: ");
	scanf("%d", &max);
	soma = ex29(max);
	
	printf("\nA soma de %d numeros = %d\n\n", max, soma);
	
	system("pause");
}
