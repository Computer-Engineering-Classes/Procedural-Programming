#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int k=0, n;
	float nota, soma=0, media;
	
	do
	{
		printf("\nInsira a nota: ");
		scanf("%f", &nota);
		
		while(nota<0 || nota>20)
		{
		printf("\nInsira uma nota valida: ");
		scanf("%f", &nota);
		}
		soma+=nota;
		k++;
		
		printf("\n Deseja inserir outra nota? Sim(1)/Nao(2): ");
		scanf("%d", &n);
	} while (n==1);
	
	media = soma/k;
	
	printf("\n A media das notas e' %.2f.\n\n", media);
	
	system("pause");
}
