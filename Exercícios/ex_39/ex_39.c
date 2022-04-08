#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, maior=-1;
	int k=0;
	
	printf("\n Insira numeros inteiros positivos: ");
	
	do
	{
		scanf("%d", &num);
		if(num>=maior&&num>0)
			maior=num;
	}	while (num!=-1);
	
	
	printf("\n Maior numero = %d\n", maior);
	
	return 0;
}
