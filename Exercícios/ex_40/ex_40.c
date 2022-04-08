#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, k1=0, k2=0, k3=0, k4=0, idade;
	char genero;
	
	printf("\n Numero de pessoas entrevistadas: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf("\n Idade = ");
		scanf("%d", &idade);
		printf("\n Sexo (M/F) = ");
		scanf(" %c", &genero);
		
		if(idade<=18)
		{
			if(genero=='M')
			k1++;
			else
			k3++;
		}
		else
			if(genero=='M')
			k2++;
			else
			k4++;	
	}
	printf("\n Pessoas que comecaram a trabalhar com: \n");
	printf("\n Menos de 18 anos: %d\n - Do sexo masculino: %d\n - Do sexo feminino: %d", k1+k3, k1, k3);
	printf("\n Mais de 18 anos: %d\n - Do sexo masculino: %d\n - Do sexo feminino: %d", k2+k4, k2, k4);
	
	return 0;
}
