#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	float precip[12], soma=0, media, max=0, min;
	int i=0;

	for(i=0; i<12; i++)
	{
		printf("\n Valor de precipitacao da %d.a localidade: ", i+1);
		scanf("%f", &precip[i]);
	}
	min=precip[0];
	
	for(i=0; i<12; i++)
	{
		if(precip[i]>max)
		{
			max=precip[i];
		}
		if(precip[i]<min)
		{
			min=precip[i];
		}
		soma+=precip[i];
	}
	media=soma/12;
	
	printf("\n O valor maximo de precipitacao foi %.2f.\n O valor minimo foi %.2f.\n A media e' %.2f.\n\n", max, min, media);
	
	system("pause");
}
