#include <stdio.h>
#include <stdlib.h>

int main(void)
	{
		float nota1, nota2, media;
		
		printf("\nInsira a primeira nota: ");
		scanf("%f", &nota1);
		
		printf("\nInsira a segunda nota: ");
		scanf("%f", &nota2);
		
		media = nota1*0.4 + nota2*0,6;
		
		if(media>=9.5 && nota1>=8.5 && nota2>=8.5 && media<=20)
		{
			printf("\nPassaste com media %.1f!", media);
		}
		else
		{
			printf("\nReprovaste!");
		}
		system("pause");
		exit(0);
	}
