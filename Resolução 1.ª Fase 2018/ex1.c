#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n;
	char mes[10];

	do
	{
	printf("\n Introduza o numero do mes: ");
	scanf("%d", &n);
	if(n<=0||n>12)
	printf("\n Valor invalido!");
	}while(n<=0||n>12);
	
	switch(n)
	{
		case 1:
			strcpy(mes, "Janeiro");
			break;
		case 2:
			strcpy(mes, "Fevereiro");
			break;
		case 3:
			strcpy(mes, "Marco");
			break;
		case 4:
			strcpy(mes, "Abril");
			break;
		case 5:
			strcpy(mes, "Maio");
			break;
		case 6:
			strcpy(mes, "Junho");
			break;
		case 7:
			strcpy(mes, "Julho");
			break;
		case 8:
			strcpy(mes, "Agosto");
			break;
		case 9:
			strcpy(mes, "Setembro");
			break;
		case 10:
			strcpy(mes, "Outubro");
			break;
		case 11:
			strcpy(mes, "Novembro");
			break;
		case 12:
			strcpy(mes, "Dezembro");
			break;
	}
	printf("\n %d.o Mes = %s", n, mes);
	return 0;
}
