#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k=0, num, div=0;
	do {
	div=0;
	printf("\nIntroduzo o numero: ");
	scanf(" %d", &num);
	
	for (i=1; i<=num; i++)
	{
		if(num % i == 0)
			div++;
	}
	
	if(div == 2)
		printf("\nO numero e' primo.\n");
	else
		printf("\nO numero e' composto.\n");
	} while(k==0);
	return 0;
}
