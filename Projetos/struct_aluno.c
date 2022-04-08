#include <stdio.h>

#define ALUNOS 4
#define NOME (120+1)

typedef struct aluno
{
	char nome[NOME];
	int num;
}Aluno;

void ReadAlunos(Aluno *aluno, int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\n Aluno %d numero: ", i+1);
		scanf("%d", &aluno[i].num);
		
		printf("\n Aluno %d nome: ", i+1);
		fflush(stdin);
		scanf("%[^\n]s", &aluno[i].nome);
	}
	puts("\n\n");
}

void ShowPauta(Aluno *aluno, int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\n Aluno %s numero %d\n", aluno[i].nome, aluno[i].num);
	}
}

int main()
{
	Aluno alunos[ALUNOS];
	
	ReadAlunos(alunos, ALUNOS);
	
	ShowPauta(alunos, ALUNOS);
	
	return 0;
}
