#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) //calcula n! de forma recursiva
{
	if (n>1)
		return (n*fatorial(n-1));
	else
		return 1; 		//0! = 1
}

int main()
{
	int n;
	printf("\nInsira um numero n: ");
	scanf("%d", &n);
	
	printf("\n %d! = %d\n", n, fatorial(n));
	
	return 0;
}
