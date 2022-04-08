#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	
	printf("\n a = ");
	scanf("%d", &a);
	printf("\n b = ");
	scanf("%d", &b);
	
	printf("\n mdc(%d,%d) = %d\n", a, b, mdc(a, b));
	printf("\n mmc(%d,%d) = %d\n", a, b, mmc(a, b));
}

int mdc(int x, int y)
{
	int i, k=1;
	if(y<x)
		trocar(&x, &y);
	
	for(i=2; i<=x; i++)
	{
		if(x%i==0 && y%i==0)
			k=i;
	}
	return k;
}

int trocar(int *x, int *y)
{
	int aux;
	aux=*x;
	*x=*y;
	*y=aux;
}

int mmc(int x, int y)
{
	return (x*y)/mdc(x, y);
}
