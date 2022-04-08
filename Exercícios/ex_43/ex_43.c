#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int i, base, n, num, aux, num10=0;
	
	printf("\n Introduza um valor para a base de 1 a 10: ");
	scanf("%d", &base);
	printf("\n Valor de base %d: ", base);
	scanf("%d", &num);
	
	aux=num;
	n=ndigit(num);
	
	for(i=0;i<n;i++)
	{
		num10=num10+(num%10)*pow(base, i);
		num=floor(num/10);
	}
	
	printf("\n %d em base %d = %d em base 10\n", aux, base, num10);
}

int ndigit(int n)
{
	int k;
	k=1;
	
	while (n/pow(10, k)>=1)
	{
		k++;
	}
	return k;
}
