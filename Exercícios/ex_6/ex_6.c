#include <stdio.h>

int main(void)
	{
		char z[20];
    	
    	printf("\nInsira o seu nome: ");
    	gets(z);
    	
    	int a;
    
	 	printf("\nInsira o seu numero de matricula: ");
    	scanf("%d", &a);
    	
    	printf("\nNome: %s\n\nAluno: al%d", z, a);
		return 0;	
	}
