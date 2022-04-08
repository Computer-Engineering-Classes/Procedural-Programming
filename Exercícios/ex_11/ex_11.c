#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		int horas, minutos, h;
		
		printf("\nInsira as horas: ");
		scanf("%d:%02d", &horas, &minutos);
	
			if(horas>12)
			{
				h = horas - 12;
				printf("\n%d:%02dPM\n\n", h, minutos);
			}
			else if(horas==12)
			{
				printf("\n%d:%02dPM\n\n", horas, minutos);
			}
			else if(horas==0)
			{
				printf("\n12:%02dAM\n\n", minutos);
			}
			else
			{
				printf("\n%d:%02dAM\n\n", horas, minutos);
			}
		
		system("pause");
		exit(0);
	}
