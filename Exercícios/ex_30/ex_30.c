#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	
	printf("\n Introduza a letra 'a': ");
	scanf("%c", &c);

	while (c != 'a')
	{
		printf("\n Letra errada. Introduza a letra 'a': ");
		scanf(" %c", &c);
	}
	
	return 0;
}
