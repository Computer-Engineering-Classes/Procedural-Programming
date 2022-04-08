#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char* CopyFile(FILE *file, char *aux, int *n)
{
	int i=0;
	char c;
	c=fgetc(file);
	while(c!=EOF) {
		(*n)++;
		c=fgetc(file);
	}
	aux=(char*)malloc((*n)*sizeof(char));
	fseek(file, 0, SEEK_SET);
	for(i=0; i<k; i++) {
		c=fgetc(file);
		aux[i]=c;
	}
	return aux;
}
void main()
{
	char nome1[]="file1.txt";
	char nome2[]="file2.txt";
	FILE *fp1, *fp2;
	char *aux1, *aux2;
	int k1=0, k2=0;
	
	fp1=fopen(nome1, "r");
	fp2=fopen(nome2, "r");
	
	aux1=CopyFile(fp1, aux1, &k1);
	aux2=CopyFile(fp2, aux2, &k2);
	
	if(k1!=k2)
		printf("\n\tOs ficheiros são diferentes.");
	else if(strcmp(aux1, aux2)==0)
		printf("\n\tOs ficheiros são iguais.");
	else
		printf("\n\tOs ficheiros são diferentes.");
		
	fclose(fp1);
	fclose(fp2);
}
