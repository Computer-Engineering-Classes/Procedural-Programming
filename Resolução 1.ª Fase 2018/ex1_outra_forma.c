#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	char mes [12][10]={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

	do
	{
	printf("\n Introduza o numero do mes: ");
	scanf("%d", &n);
	if(n<=0||n>12)
	printf("\n Valor invalido!");
	}while(n<=0||n>12);
	

	printf("\n %d.o Mes = %s", n, mes[n-1][1]);
	return 0;
}
