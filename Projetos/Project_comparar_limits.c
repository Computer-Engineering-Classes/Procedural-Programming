#include <stdio.h>
#include <limits.h>

int main()
{
	int num=0, max = INT_MIN, i=0, N=10;
	
	for (i=0; i<N; i++)
	{
		printf("\n\n Insira um numero (i=%d): ", i);
		scanf("%d", &num);
		
		if (num>max)
			max=num;
		
	}
	
	printf("\n\n O maximo absoluto e %d ao fim de %d iteracoes.\n\n", max, i);
	
	return 0;
}
