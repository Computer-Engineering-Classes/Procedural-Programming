#include <stdio.h>
#include <stdlib.h>

void UpperCase(char*, int);

void main()
{
	char c[20]="aNo letIVo 18/19";
	
	putchar('\n');
	
	UpperCase(c, 20);
}

void UpperCase(char *c, int n)
{
	int i=0;
	
	while (c[i]!='\0')
	{
		if(c[i]>='a' && c[i]<='z')
		{
			c[i]-=32;
		}
		printf("%c", c[i]);	
		i++;
	}
}
