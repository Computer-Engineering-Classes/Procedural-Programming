#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	float h, b, A;
	
	printf("\n Introduza o numero de triangulos cujas areas pretende determinar: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		printf("\n Base (cm) = ");
		scanf("%f", &b);
		printf("\n Altura (cm) = ");
		scanf("%f", &h);
		
		A = (b*h)/2;
		
		printf("\n Area %d = %.2f cm^2\n", i, A);
	}
	printf("\n");
	
	system("pause");
	exit(0);
}
