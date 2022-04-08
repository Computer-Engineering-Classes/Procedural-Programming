#include <stdio.h>

int main()
{
	int valor;
	
	printf("Indique o valor: ");
	scanf("%d", &valor);
	
	switch (valor)
	{
		case 1 ... 3:
			printf("%d pertence a lista de valores 1, 2, 3\n", valor);
			break;
		case 4:
		case 5:
			printf("%d pertence a lista de valores 4, 5\n", valor);
		case 6:
			printf("%dpertence a lista de valores 4, 5, 6\n", valor);
		default :
			printf("%d nao e 1, 2, 3, 4, 5 ou 6\n", valor);
	}
	return 0;
}
