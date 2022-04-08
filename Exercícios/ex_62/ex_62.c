#include <stdio.h>
#include <string.h>

#define N 100

void sigla(char string[]);

void main()
{
	char string[N];
	printf("\nString: ");
	scanf("%[^\n]s", string);
	sigla(string);
}

void sigla(char string[])
{
	int i;
	char prep[6][4]={"de","do","da","dos","das","e","para"};
	strupr(string);
	printf("\nsigla: %c.", string[0]);
	for(i=0; string[i]!='\0'; i++)
	{
		if(string[i]==' ')
			printf("%c.", string[i+1]);
	}
}
