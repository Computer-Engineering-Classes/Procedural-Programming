#include <stdio.h>

int main()
{
	int i = 0, m[10];
	
	for (i=0; i<=10; i++)
	{
		m[i] = i * i;
		
	}
	for (i=0; i<=10; i++)
	{
		printf("\n%2d^2 = %3d\n", i, m[i]);	
	}
	
	return 0;
}
