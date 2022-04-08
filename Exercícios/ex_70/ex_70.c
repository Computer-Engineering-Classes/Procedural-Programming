#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define N 50

typedef struct aluno {
	char nome[N];
	int numero;
	float nota;
}ALUNO;

void Menu(void);

ALUNO* LoadList(int n, FILE *alunos, ALUNO *lista)
{
	int i=0;
	char c;
	lista=(ALUNO*)malloc(n*sizeof(ALUNO));
	fseek(alunos,0,SEEK_SET);
	if(lista!=NULL) {
		for(i=0; i<n; i++) {
			fscanf(alunos,"%d#", &lista[i].numero);
			fscanf(alunos,"%[^\n]s\n", lista[i].nome);
			printf("%d %s\n", lista[i].numero, lista[i].nome);
		}
	}
	return lista;
}
void LoadGrades(int n, ALUNO *lista)
{
	int i=0;
	system("cls");
	for(i=0; i<n; i++) {
		printf("\nNota %d: ", i+1);
		fflush(stdin);
		scanf("%f", &lista[i].nota);
	}
}
void SaveList(int n, FILE *alunos, ALUNO *lista)
{
	int i=0;
	fseek(alunos,0,SEEK_SET);
	for(i=0; i<n; i++) {
		fprintf(alunos,"%d#%s", lista[i].numero, lista[i].nome);
		if(i!=n-1)
			fputc('\n', alunos);
	}
}
ALUNO* AddList(int n, ALUNO *lista)
{
	system("cls");
	int i;
	ALUNO *temp;
	lista=(ALUNO*)realloc(lista,n*sizeof(ALUNO));
	fflush(stdin);
	printf("\tNome: ");
	scanf("%[^\n]*c", lista[n-1].nome);
	putch('\n');
	printf("\tNúmero: ");
	scanf("%d", &lista[n-1].numero);
	return lista;
}
void ShowList(int n, ALUNO *lista)
{
	int i=0;
	for(i=0; i<n; i++)
		printf("%d %s\n", lista[i].numero, lista[i].nome);
}
ALUNO* DelList(int n, ALUNO *lista)
{
	int x, i=0;
	ALUNO *temp;
	temp=(ALUNO*)malloc((n-1)*sizeof(ALUNO));
	system("cls");
	printf("\n\t Indique a posição do elemento que pretende eliminar: ");
	scanf("%d", &x);
	for(i=0; i<n-1; i++) {
		if(i!=x-1) {
			temp[i].numero=lista[i].numero;
			strcpy(temp[i].nome, lista[i].nome);
		}
		else {
			temp[i].numero=lista[i+1].numero;
			strcpy(temp[i].nome, lista[i+1].nome);
		}
	}
	free(lista);
	return temp;
}
void SaveGrades(int n, ALUNO *lista, FILE *pauta)
{
	int i=0;
	fseek(pauta,0,SEEK_SET);
	for(i=0; i<n; i++) {
		fprintf(pauta, "%d*%s*%.2f\n", lista[i].numero, lista[i].nome, lista[i].nota);
	}
}
void ShowGrades(int n, ALUNO *lista)
{
	system("cls");
	ALUNO *temp;
	temp=(ALUNO*)malloc(n*sizeof(ALUNO));
	for(i=0; i<n; i++) {
		temp[i].numero=lista[i].numero;
		strcpy(temp[i].nome, lista[i].nome);
	}
	
}
int main()
{
	ALUNO *lista;
	FILE *alunos, *pauta;
	char nome1[]="alunos.txt";
	char nome2[]="pauta.txt";
	char c;
	int n;
	alunos=fopen(nome1, "r+");
	pauta=fopen(nome2, "w");
	n=CountLines(alunos);
	do {
		system("cls");
		Menu();
		fflush(stdin);
		scanf("%c", &c);
		switch (c) {
			case 'a':
				lista=LoadList(n, alunos, lista);
				break;
			case 'b':
				SaveList(n, alunos, lista);
				break;
			case 'c':
				n++;
				lista=AddList(n, lista);
				break;
			case 'd':
				lista=DelList(n, lista);
				n--;
				break;
			case 'e':
				LoadGrades(n, lista);
				break;
			case 'f':
				SaveGrades(n, lista, pauta);
				break;
			case 'g':
				ShowGrades(n, lista);
				break;
			case 'h':
				ShowList(n, lista);
				break;
			case 'i':
				break;
			default:
				puts("Opcao invalida.");
				break;
		}
		system("pause");
	} while(c!='i');
	fclose(pauta);
	fclose(alunos);
	exit(0);
}

int CountLines(FILE *alunos)
{
	int k=0;
	char c;
	c=fgetc(alunos);
	while(c!=EOF){
		if(c=='#')
			k++;
		c=fgetc(alunos);		
	}
	return k;
}
void Menu()
{
	setlocale(LC_ALL, "");
	puts("\n\t Menu:\n");
	puts(" a. Carregar a lista de alunos do ficheiro para a memória\n");
	puts(" b. Guardar a lista de alunos (apenas os alunos) no ficheiro “alunos.txt”, respeitando o formato dos dados especificado para esse ficheiro\n");
	puts(" c. Acrescentar um aluno à lista na memória\n");
	puts(" d. Eliminar, à escolha do utilizador, um aluno da lista na memória\n");
	puts(" e. Atribuir manualmente as notas aos alunos na memória\n");
	puts(" f. Produzir uma pauta em ficheiro com os dados completos de cada aluno\n");
	puts(" g. Apresentar no ecrã a pauta da avaliação, ordenada por ordem alfabética de nome\n");
	puts(" h. Apresentar no ecrã a lista de alunos\n");
	puts(" i. Sair do programa\n");
	printf("\t Opção: ");
}
