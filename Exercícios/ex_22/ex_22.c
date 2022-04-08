#include <stdio.h>

#define MAX_NOME 50
#define MAX_NOME_S "49"

int main()
{
	char nome[MAX_NOME] = ""; 
	int i = 0;
	
	for (i = 1; i <= 20; i++)
	{
		printf("\nInsira o %d.o nome: ", i);
		
		scanf(" %" MAX_NOME_S "[a-zA-Z ]s", nome);
		
		printf("\nFoi inserido '%s'\n", nome);
	}
	
	system("pause");
}
