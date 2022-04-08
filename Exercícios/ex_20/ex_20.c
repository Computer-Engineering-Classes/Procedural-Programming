#include <stdio.h>
#include <stdlib.h>

int main()
{
	float km, mi;
	
	printf("\nInsira o numero de km: ");
	scanf("%f", &km);
	
	mi=km/1.609;
	
	printf("\n%.2f km = %.2f mi\n\n", km, mi);
	
	if(km>5000)
	{
		printf("Muito longe.\n\n");
	}
	
	system("pause");
	exit(0);
}
