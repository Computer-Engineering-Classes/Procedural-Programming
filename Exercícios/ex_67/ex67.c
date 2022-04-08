#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	char nome[]="pot2.txt";
	FILE *pot2;
	
	int i=0;
	int aux;
	
	pot2=fopen(nome, "w");
	do {
		aux=pow(2,i);
		fprintf(pot2, "2^%d=%d\n", i, aux);
		i++;
	} while (pow(2,i)<32767);
	
	fclose(pot2);
}
