#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}

int minimo(int a, int b)
{
	if (a>b)
		return b;
	else
		return a;
}

int main()
{
	int a, b;
	
	printf("\n a = ");
	scanf("%d", &a);
	
	printf("\n b = ");
	scanf("%d", &b);
	
	
	printf("\n\nO maximo de %d e %d e' %d.\n\n", a, b, maximo(a,b));
	printf("\n\nO minimo de %d e %d e' %d.\n\n", a, b, minimo(a,b));
	
	return 0;
}
