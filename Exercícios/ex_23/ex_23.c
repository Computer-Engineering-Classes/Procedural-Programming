#include <stdio.h>

int main()
{
	float n;
	int i = 0;
	
	printf("\nInsira um valor numerico: ");
	scanf("%f", &n);
	
	while(n<0)
	{
		printf("\nValor negativo. Insira um novo valor: ");
		scanf("%f", &n);
	}
	
	if(n>=0)
	{
		printf("\nValor positivo!\n");
	}
	
	return 0;
}
