#include <stdio.h>
#include <stdlib.h>

void ex66()
{
	FILE *fp = NULL;
	char c;
	int i=0;
	
	fp = fopen("dados.txt", "r");
	if(fp==NULL)
	{
		printf("\nErro de abertura do ficheiro.");
		return;
	}
	do
	{
		printf("%c", c);
		if(c=='\n')
			i++;
		c = fgetc(fp);
	} while (c != EOF);

	printf("\nN.o de linhas: %d", i);
}

int main()
{
	ex66();
}
