#include <stdio.h>
#include <stdlib.h>

int main()
{
	int npar=0;
	int nimpar=0;
	int n;
	
	printf("\n Insira numeros inteiros aleatorios: ");

	while (1==scanf("%d", &n))
	{
		if(n%2==0)
			npar++;
		else
			nimpar++;
	}
	
	printf("\n Numeros pares = %d\n Numeros impares = %d\n", npar, nimpar);
	
	return 0;
}
