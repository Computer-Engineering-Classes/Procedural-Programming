#include <stdio.h>
#include <string.h>

#define N 10

typedef struct atleta
{
	char nome[30];
} ATLETA;

void Switch (ATLETA *a, ATLETA *b)
{
	ATLETA aux;
	aux=*a;
	*a=*b;
	*b=aux;
}
void main()
{
	int i=0, j=0;
	ATLETA v[5];
	strcpy(v[0].nome,"Rui");
	strcpy(v[1].nome,"Bruno");
	strcpy(v[2].nome,"Ana");
	strcpy(v[3].nome,"Joana");
	strcpy(v[4].nome,"Pedro");
	
	for(i=0; i<5-1; i++) {
		for(j=i; j<5-1; j++) {
			if(strcmp(v[i].nome, v[j+1].nome)==1)
				Switch(&v[i],&v[j+1]);
		}
	}
	putch('\n');
	for(i=0; i<5; i++) {
		printf("%s ", v[i].nome);
	}
}
