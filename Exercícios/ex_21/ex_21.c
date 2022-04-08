#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c; // "c" corresponde à conversao pedida
	float e, d; // "e" para euros e "d" para dolares
	
	printf("\nSe pretender converter euros em dolares insira (1). Caso contrario, insira (2): ");
	scanf("%d", &c);
	
	if(c==1)
	{
		printf("\nInsira o valor em euros que pretende converter: ");
		scanf("%f", &e);
		
		d=e*1.05;
		
		printf("\n%.2f€ = %.2f$\n\n", e, d);
	}
	
	else
	{
		printf("\nInsira o valor em dolares que pretende converter: ");
		scanf("%f", &d);
		
		e=d/1.05;
		
		printf("\n%.2f$ = %.2f€\n\n", d, e);	
	}
	
	system("pause");
	exit(0);
}
