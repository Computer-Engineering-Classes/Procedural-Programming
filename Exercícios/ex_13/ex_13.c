#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int nota;
		
		printf("\nInsira a sua nota: ");
		scanf("%d", &nota);
		
		if(nota>=0 && nota<5)
		{
			printf("\nNivel: Pessimo.\n\n");
		}
		if(nota>=5 && nota<8)
		{
			printf("\nNivel: Mau.\n\n");
		}
		if(nota>=8 && nota<10)
		{
			printf("\nNivel: Insuficiente.\n\n");
		}
		if(nota>=10 && nota<12)
		{
			printf("\nNivel: Suficiente.\n\n");
		}
		if(nota>=12 && nota<16)
		{
			printf("\nNivel: Bom.\n\n");
		}
		if(nota>=16 && nota<=20)
		{
			printf("\nNivel: Excelente.\n\n");
		}
		
		system("pause");
		exit(0);
	}
